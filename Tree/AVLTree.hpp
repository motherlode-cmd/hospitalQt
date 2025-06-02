#include <iostream>
#include <algorithm>
#include "../Flight/Flight.hpp"

class AVLNode {
public:
    Flight data;
    AVLNode *left;
    AVLNode *right;
    int height;

    AVLNode(Flight &value)
        : data(value), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree {
private:
    AVLNode *root = nullptr;

    int height(AVLNode *node);
    int balanceFactor(AVLNode *node);
    void updateHeight(AVLNode *node);
    AVLNode *rotateRight(AVLNode *y);
    AVLNode *rotateLeft(AVLNode *x);
    AVLNode *balance(AVLNode *node);
    AVLNode *insert(AVLNode *node, Flight &value);
    AVLNode *minValueNode(AVLNode *node);
    AVLNode *deleteValue(AVLNode *root, Flight value);
    void push_data(QList<QStringList> * data, AVLNode * curr);
    void search(QList <QStringList> * data, AVLNode * curr, Flight & flight);
    void search_name_airport(QList <QStringList> * data, AVLNode * curr,const QString & name);
    void append_to_list(QStringList & newValue, AVLNode * curr);

public:
    AVLTree() = default;
    void insert(Flight &value);
    void deleteValue(Flight value);
    QList <QStringList> * get_data();
    QList <QStringList> * get_search_data(const QString & search);
    QList <QStringList> * get_search_airport(const QString & name);
};
