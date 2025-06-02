#include "AVLTree.hpp"
int AVLTree::height(AVLNode *node) {
    return node ? node->height : 0;
}

int AVLTree::balanceFactor(AVLNode *node) {
    return height(node->left) - height(node->right);
}

void AVLTree::updateHeight(AVLNode *node) {
    node->height = std::max(height(node->left), height(node->right)) + 1;
}

AVLNode *AVLTree::rotateRight(AVLNode *y) {
    AVLNode *x = y->left;
    AVLNode *T2 = x->right;

    x->right = y;
    y->left = T2;

    updateHeight(y);
    updateHeight(x);

    return x;
}

AVLNode *AVLTree::rotateLeft(AVLNode *x) {
    AVLNode *y = x->right;
    AVLNode *T2 = y->left;

    y->left = x;
    x->right = T2;

    updateHeight(x);
    updateHeight(y);

    return y;
}

AVLNode *AVLTree::balance(AVLNode *node) {
    updateHeight(node);

    int balance = balanceFactor(node);

    // девый больше
    if (balance > 1) {
        if (balanceFactor(node->left) < 0) {
            node->left = rotateLeft(node->left);
        }
        return rotateRight(node);
    }

    // правый больше
    if (balance < -1) {
        if (balanceFactor(node->right) > 0) {
            node->right = rotateRight(node->right);
        }
        return rotateLeft(node);
    }

    return node;
}

AVLNode *AVLTree::insert(AVLNode *node, Flight &value) {
    if (!node) {
        return new AVLNode(value);
    }

    if (value.get_key() < node->data.get_key()) {
        node->left = insert(node->left, value);
    } else if (value.get_key() > node->data.get_key()) {
        node->right = insert(node->right, value);
    } else {
        // Если равны, то нечего делать
        return node;
    }
    return balance(node);
}

AVLNode *AVLTree::minValueNode(AVLNode *node) {
    AVLNode *current = node;
    while (current->left) {
        current = current->left;
    }
    return current;
}

AVLNode *AVLTree::deleteValue(AVLNode *root, Flight value) {
    if (!root) {
        return root;
    }

    if (value.get_key() < root->data.get_key()) {
        root->left = deleteValue(root->left, value);
    } else if (value.get_key() > root->data.get_key()) {
        root->right = deleteValue(root->right, value);
    } else {
        // Если только 1 ребенок или 0
        if (!root->left || !root->right) {
            AVLNode *temp = root->left ? root->left : root->right;
            if (!temp) {
                temp = root;
                root = nullptr;
            } else {
                *root = *temp; // Копирование в не пустого потомка
            }
            delete temp;
        } else {
            AVLNode *temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteValue(root->right, temp->data);
        }
    }

    // If the tree had only one node, then return
    if (!root) {
        return root;
    }

    return balance(root);
}

void AVLTree::append_to_list(QStringList &new_list, AVLNode *curr)
{
    new_list.append(QString::fromStdString(curr->data.get_number_of_flight()));
    new_list.append(QString::fromStdString(curr->data.get_arrival_airport()));
    new_list.append(QString::fromStdString(curr->data.get_departure_airport()));
    new_list.append(QString::fromStdString(curr->data.get_airline()));
    new_list.append(QString::fromStdString(curr->data.get_departure_date()));
    new_list.append(QString::fromStdString(curr->data.get_departure_time()));
    new_list.append(QString::number(curr->data.get_number_of_seats()));
    new_list.append(QString::number(curr->data.get_number_of_available_seats()));
}

void AVLTree::insert(Flight &value) {
    root = insert(root, value);
}

void AVLTree::deleteValue(Flight value) {
    root = deleteValue(root, value);
}

void AVLTree::push_data(QList<QStringList> *data, AVLNode * curr)
{
    if(curr != nullptr) {
        push_data(data, curr->left);
        QStringList new_list;
        append_to_list(new_list, curr);
        data->append(new_list);
        push_data(data, curr->right);
    }
}


QList<QStringList> *AVLTree::get_data()
{
    QList<QStringList> * data = new QList<QStringList>;
    AVLNode * curr = root;
    push_data(data, curr);
    return data;
}

void AVLTree::search(QList<QStringList> *data, AVLNode *curr, Flight &flight)
{
    if(curr != nullptr && curr->data.get_key() == flight.get_key()) {
        QStringList new_list;
        append_to_list(new_list, curr);
        data->append(new_list);
    } else if(curr != nullptr && curr->data.get_key() < flight.get_key()) {
        search(data, curr->right, flight);
    } else if(curr != nullptr && curr->data.get_key() > flight.get_key()) {
        search(data, curr->left, flight);
    }
}

QList<QStringList> *AVLTree::get_search_data(const QString &searchStr)
{
    QList<QStringList> * data = new QList<QStringList>;
    AVLNode * curr = root;
    Flight fl;
    fl.set_number_of_flight(searchStr.toStdString());
    search(data, curr, fl);
    return data;
}


void AVLTree::search_name_airport(QList<QStringList> *data, AVLNode *curr, const QString &name)
{
    if(curr != nullptr) {
        search_name_airport(data, curr->left, name);
        if((curr->data.get_arrival_airport()).find(name.toStdString()) != std::string::npos) {
            QStringList new_list;
            append_to_list(new_list, curr);
            data->append(new_list);
        }
        search_name_airport(data, curr->right, name);
    }
}

QList<QStringList> *AVLTree::get_search_airport(const QString &name)
{
    QList<QStringList> * data = new QList<QStringList>;
    AVLNode * curr = root;
    search_name_airport(data, curr, name);
    return data;
}


