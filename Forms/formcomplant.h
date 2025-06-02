#ifndef FORMCOMPLANT_H
#define FORMCOMPLANT_H

#include <QDialog>
#include "constants/Tables.hpp"
#include <QRegularExpression>
#include <QValidator>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSpacerItem>
namespace Ui {
class FormComplant;
}

class FormComplant : public QDialog
{
    Q_OBJECT

public:
    explicit FormComplant(QWidget *parent = nullptr);
    FormComplant(ElementType formType = ElementType::Unknown, QWidget *parent = nullptr);
    ~FormComplant();
signals:
    void dataEntered(QStringList &userData);

private slots:
    void on_buttonBox_accepted();
private:
    Ui::FormComplant *ui;
    ElementType m_formType;
    QMap<QString, QLineEdit*> m_lineEdits;
};

#endif // FORMCOMPLANT_H
