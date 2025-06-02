#include "QTableModel.h"

#include <QModelIndex>
#include <QDebug>
//#include <QPixmap>
#include <iostream>


QTableModel::QTableModel(QObject *parent)
    :QAbstractListModel(parent)
{
    values = QList<QStringList>();
}

int QTableModel::rowCount(const QModelIndex &) const
{
    return values.count();
}

int QTableModel::columnCount(const QModelIndex &) const
{
    return get_headers().size();
}

QVariant QTableModel::data( const QModelIndex &index, int role ) const
{
    //std::cout<<"DATA"<<std::endl;
    QVariant value;
    if(index.isValid()) {
        switch ( role )
        {
        case Qt::DisplayRole: //strin
        case Qt::UserRole: //data
        {
            value = values.at(index.row()).at(index.column());
        }
        break;

        default:
            break;
        }
    }

    return value;
}

QVariant QTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole) {
        QStringList headers = get_headers();
        if (section < headers.size()) {
            return headers.at(section);
        }
    }

    return QAbstractListModel::headerData(section, orientation, role);
}

void QTableModel::populate(QList<QStringList> *newValues)
{
    beginResetModel(); // Начать сброс модели
    values = *newValues;
    endResetModel();   // Завершить сброс модели
}

void QTableModel::alt_search(const QString &searchString)
{
    std::cout<<searchString.toStdString()<<std::endl;
}

