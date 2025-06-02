/********************************************************************************
** Form generated from reading UI file 'formprescription.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPRESCRIPTION_H
#define UI_FORMPRESCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_FormPrescription
{
public:
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *lineEdit_doctor_id;
    QLineEdit *lineEdit_inclassions;
    QLineEdit *lineEdit_medicine;
    QDateEdit *dateEdit_issue_date;
    QLabel *label_5;
    QLabel *label_4;
    QTimeEdit *timeEdit_issue_time;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_;
    QLabel *label_3;

    void setupUi(QDialog *FormPrescription)
    {
        if (FormPrescription->objectName().isEmpty())
            FormPrescription->setObjectName("FormPrescription");
        FormPrescription->resize(400, 300);
        label_6 = new QLabel(FormPrescription);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 210, 151, 17));
        label_2 = new QLabel(FormPrescription);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 50, 161, 17));
        lineEdit_doctor_id = new QLineEdit(FormPrescription);
        lineEdit_doctor_id->setObjectName("lineEdit_doctor_id");
        lineEdit_doctor_id->setGeometry(QRect(200, 10, 161, 25));
        lineEdit_inclassions = new QLineEdit(FormPrescription);
        lineEdit_inclassions->setObjectName("lineEdit_inclassions");
        lineEdit_inclassions->setGeometry(QRect(200, 210, 161, 25));
        lineEdit_medicine = new QLineEdit(FormPrescription);
        lineEdit_medicine->setObjectName("lineEdit_medicine");
        lineEdit_medicine->setGeometry(QRect(200, 50, 161, 25));
        dateEdit_issue_date = new QDateEdit(FormPrescription);
        dateEdit_issue_date->setObjectName("dateEdit_issue_date");
        dateEdit_issue_date->setGeometry(QRect(230, 90, 110, 22));
        label_5 = new QLabel(FormPrescription);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 170, 161, 17));
        label_4 = new QLabel(FormPrescription);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 130, 161, 17));
        timeEdit_issue_time = new QTimeEdit(FormPrescription);
        timeEdit_issue_time->setObjectName("timeEdit_issue_time");
        timeEdit_issue_time->setGeometry(QRect(230, 130, 118, 22));
        buttonBox = new QDialogButtonBox(FormPrescription);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(20, 250, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(FormPrescription);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 151, 17));
        doubleSpinBox_ = new QDoubleSpinBox(FormPrescription);
        doubleSpinBox_->setObjectName("doubleSpinBox_");
        doubleSpinBox_->setGeometry(QRect(230, 170, 62, 22));
        label_3 = new QLabel(FormPrescription);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 90, 161, 17));

        retranslateUi(FormPrescription);

        QMetaObject::connectSlotsByName(FormPrescription);
    } // setupUi

    void retranslateUi(QDialog *FormPrescription)
    {
        FormPrescription->setWindowTitle(QCoreApplication::translate("FormPrescription", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("FormPrescription", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 inclassions", nullptr));
        label_2->setText(QCoreApplication::translate("FormPrescription", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\265\320\272\320\260\321\200\321\201\321\202\320\262\320\276 ", nullptr));
        label_5->setText(QCoreApplication::translate("FormPrescription", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\276\320\267\320\270\321\200\320\276\320\262\320\272\321\203 ", nullptr));
        label_4->setText(QCoreApplication::translate("FormPrescription", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\321\200\320\265\320\274\321\217 \320\262\321\213\320\264\320\260\321\207\320\270", nullptr));
        label->setText(QCoreApplication::translate("FormPrescription", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 ID \320\264\320\276\320\272\321\202\320\276\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("FormPrescription", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\262\321\213\320\264\320\260\321\207\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPrescription: public Ui_FormPrescription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPRESCRIPTION_H
