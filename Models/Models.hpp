#ifndef MODELS_H
#define MODELS_H
#include <string>
#include <iostream>
#include <chrono>
#include <vector>
#include <ctime>
#include <iomanip>
#include "constants/Tables.hpp"
#include <QSql>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QString>

class Database
{
public:
    ~Database() = default;
    void insertRow(QStringList & row);
    void deleteRow(const QString id);
    Database(ElementType tableType):tableType(tableType){}
    QList<QStringList> searchRows(const QString &searchString, const QString &columnSearch);
    QList<QStringList> selectRows();
    QStringList getColumnNames(){return tableLabels[tableType];};
    QString getTableName(){return tableNames[tableType];};
    QList<QStringList> processSelectQuery(QSqlQuery& query);
private:
    ElementType tableType;
};

#endif // MODELS_H
