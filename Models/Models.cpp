#include "Models/Models.hpp"
#include <iostream>
#include <QSqlRecord>
#include <string>
#include <iomanip>
#include <ctime>
#include <sstream>

void Database::insertRow(QStringList &row)
{
    auto db = QSqlDatabase::database();
    if (!db.isOpen())
    {
        db.open();
        std::cout << "Noe opened" << std::endl;
    }
    QSqlQuery query;

    auto colunmNames = this->getColumnNames();
    auto tableNmae = this->getTableName();

    QString isertedColumns = "";
    QString insertedValuesString = "";
    for (int i = 1; i < colunmNames.size(); i++)
    {

        isertedColumns += colunmNames[i];
        insertedValuesString += ":" + colunmNames[i]; 

        if (i < colunmNames.size() - 1)
        {
            isertedColumns += ", ";
            insertedValuesString += ", ";
        }
    }

    query.prepare(QString("INSERT INTO %1 (%2) "
                          "VALUES (%3)")
                      .arg(tableNmae)
                      .arg(isertedColumns)
                      .arg(insertedValuesString));

    for (int i = 0; i < row.size(); i++)
    {
        query.bindValue(QString(":%1").arg(colunmNames[i+1]), row.at(i));
    }

    qDebug() << query.lastQuery()<<" QUERY";

    bool isOk = query.exec();
    if (!isOk)
    {
        qDebug() << "SQL Error:" << query.lastError().text();
    }
}

void Database::deleteRow(const QString id)
{
    auto db = QSqlDatabase::database();
    if (!db.isOpen())
    {
        db.open();
    }

    QSqlQuery query;

    auto tableNmae = this->getTableName();
    auto colunmNames = this->getColumnNames();

    query.prepare(QString("DELETE FROM %1 "
                          "WHERE %2 = :id")
                      .arg(tableNmae)
                      .arg(colunmNames[0]));
    query.bindValue(":id", id);
    bool isOk = query.exec();
    if (!isOk)
    {
        qDebug() << "SQL Error:" << query.lastError().text();
    }
}

QList<QStringList> Database::searchRows(const QString &position, const QString &qualification_date)
{
    auto db = QSqlDatabase::database();
    if (!db.isOpen())
    {
        db.open();
    }

    QSqlQuery query;

    query.prepare(QString("SELECT e.* "
        "FROM employees e "
        "JOIN employee_qualifications eq ON e.id = eq.employee_id "
        "WHERE e.position LIKE %1  "
        "AND eq.qualification_date before %2 " )
                      .arg(position)
                      .arg(qualification_date));
    bool isOk = query.exec();
    if (!isOk)
    {
        qDebug() << "SQL Error searching:" << query.lastError().text();
    }

    return this->processSelectQuery(query);
}

QList<QStringList> Database::selectRows()
{
    auto db = QSqlDatabase::database();
    if (!db.isOpen())
    {
        db.open();
    }

    QSqlQuery query;

    auto tableNmae = this->getTableName();
    qDebug() << "SELECT in " << tableNmae;

    query.prepare(QString("SELECT * FROM %1")
                      .arg(tableNmae));
    bool isOk = query.exec();
    if (!isOk)
    {
        qDebug() << "SQL Error:" << query.lastError().text();
    }

    return this->processSelectQuery(query);
}

QList<QStringList> Database::processSelectQuery(QSqlQuery &query)
{
    QList<QStringList> result;
    auto columnCount = query.record().count();
    
    while (query.next()) {
        QStringList row;
        for (int i = 0; i < columnCount; ++i) {
            row << query.value(i).toString();
        }
        result << row;
    }
    
    return result;
}
