#ifndef QTABLEMODEL_H
#define QTABLEMODEL_H
#include <QAbstractListModel>
class QTableModel : public QAbstractListModel
{
    Q_OBJECT
public:
    QTableModel(QObject *parent=nullptr);
    int rowCount(const QModelIndex &) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    void populate(QList<QStringList> * newValues);
    void writeItem(QString filename);
    virtual void addItem(QStringList & newValue) = 0;
    virtual void removeItem(QModelIndex & index) = 0;
    virtual void search(const QString & searchString) = 0;
    virtual void alt_search(const QString & searchString);
    virtual QList<QStringList> * getQList() = 0;
    virtual QStringList get_headers() const = 0;
protected:
    QList<QStringList> values;
};

#endif // QTABLEMODEL_H
