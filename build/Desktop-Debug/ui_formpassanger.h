/********************************************************************************
** Form generated from reading UI file 'formpassanger.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPASSANGER_H
#define UI_FORMPASSANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPassanger
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_passport_num;
    QLineEdit *lineEdit_date_passport;
    QLineEdit *lineEdit_fio;
    QDateEdit *dateEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *FormPassanger)
    {
        if (FormPassanger->objectName().isEmpty())
            FormPassanger->setObjectName("FormPassanger");
        FormPassanger->resize(400, 300);
        buttonBox = new QDialogButtonBox(FormPassanger);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(110, 260, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_passport_num = new QLineEdit(FormPassanger);
        lineEdit_passport_num->setObjectName("lineEdit_passport_num");
        lineEdit_passport_num->setGeometry(QRect(240, 20, 113, 25));
        lineEdit_date_passport = new QLineEdit(FormPassanger);
        lineEdit_date_passport->setObjectName("lineEdit_date_passport");
        lineEdit_date_passport->setGeometry(QRect(240, 80, 113, 25));
        lineEdit_fio = new QLineEdit(FormPassanger);
        lineEdit_fio->setObjectName("lineEdit_fio");
        lineEdit_fio->setGeometry(QRect(240, 140, 113, 25));
        dateEdit = new QDateEdit(FormPassanger);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(240, 190, 110, 26));
        label = new QLabel(FormPassanger);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 161, 17));
        label_2 = new QLabel(FormPassanger);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 140, 161, 17));
        label_3 = new QLabel(FormPassanger);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 190, 161, 17));
        label_4 = new QLabel(FormPassanger);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 80, 161, 17));

        retranslateUi(FormPassanger);

        QMetaObject::connectSlotsByName(FormPassanger);
    } // setupUi

    void retranslateUi(QWidget *FormPassanger)
    {
        FormPassanger->setWindowTitle(QCoreApplication::translate("FormPassanger", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormPassanger", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\277\320\260\321\201\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("FormPassanger", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\244\320\230\320\236", nullptr));
        label_3->setText(QCoreApplication::translate("FormPassanger", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("FormPassanger", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\262\321\213\320\264\320\260\321\207\320\270 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260 \320\270 \320\272\320\265\320\274 \320\262\321\213\320\264\320\260\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPassanger: public Ui_FormPassanger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPASSANGER_H
