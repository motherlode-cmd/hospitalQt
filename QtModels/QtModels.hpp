#ifndef QTMODELS_H
#define QTMODELS_H
#include "QtModels/QTableModel.h"
#include "Models/Models.hpp"

class QtModel : public QTableModel
{
    Q_OBJECT
public:
    QtModel(QObject *parent = nullptr);
    QtModel(QObject *parent = nullptr, ElementType type = ElementType::Unknown, QSqlDatabase *connection = nullptr)
    {
        this->type = type;
        this->db = new Database(type);
        values = db->selectRows();
    }
    // Переопределение виртуальных методов базового класса
    void addItem(QStringList &newValue) override;
    void removeItem(QModelIndex &index) override;
    void search(const QString &searchString) override;
    QList<QStringList> *getQList() override;
    QStringList get_headers() const override;

private:
    Database * db;
    ElementType type;
};
#endif // QTMODELS_H
