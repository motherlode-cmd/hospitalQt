/********************************************************************************
** Form generated from reading UI file 'formsales.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSALES_H
#define UI_FORMSALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSales
{
public:
    QLineEdit *lineEdit_passport;
    QLineEdit *lineEdit_flight;
    QLineEdit *lineEdit_ticket;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *FormSales)
    {
        if (FormSales->objectName().isEmpty())
            FormSales->setObjectName("FormSales");
        FormSales->resize(400, 300);
        lineEdit_passport = new QLineEdit(FormSales);
        lineEdit_passport->setObjectName("lineEdit_passport");
        lineEdit_passport->setGeometry(QRect(230, 60, 161, 25));
        lineEdit_flight = new QLineEdit(FormSales);
        lineEdit_flight->setObjectName("lineEdit_flight");
        lineEdit_flight->setGeometry(QRect(230, 140, 161, 25));
        lineEdit_ticket = new QLineEdit(FormSales);
        lineEdit_ticket->setObjectName("lineEdit_ticket");
        lineEdit_ticket->setGeometry(QRect(230, 100, 161, 25));
        label = new QLabel(FormSales);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 60, 151, 17));
        label_2 = new QLabel(FormSales);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 161, 17));
        label_3 = new QLabel(FormSales);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 140, 161, 17));
        buttonBox = new QDialogButtonBox(FormSales);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(110, 260, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(FormSales);

        QMetaObject::connectSlotsByName(FormSales);
    } // setupUi

    void retranslateUi(QWidget *FormSales)
    {
        FormSales->setWindowTitle(QCoreApplication::translate("FormSales", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormSales", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\277\320\260\320\277\320\276\321\200\321\202\320\260 ", nullptr));
        label_2->setText(QCoreApplication::translate("FormSales", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\260\320\262\320\270\320\261\320\270\320\273\320\265\321\202\320\260 ", nullptr));
        label_3->setText(QCoreApplication::translate("FormSales", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\260\320\262\320\270\320\260\321\200\320\265\320\271\321\201\320\260 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSales: public Ui_FormSales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSALES_H
