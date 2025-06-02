/********************************************************************************
** Form generated from reading UI file 'formcomplant.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCOMPLANT_H
#define UI_FORMCOMPLANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FormComplant
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_patient_id;
    QLabel *label;
    QDateEdit *dateEdit_end_date;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *lineEdit_doctor_id;
    QLabel *label_3;
    QLineEdit *lineEdit_complaint_message;
    QLabel *label_5;
    QComboBox *comboBox_status;

    void setupUi(QDialog *FormComplant)
    {
        if (FormComplant->objectName().isEmpty())
            FormComplant->setObjectName("FormComplant");
        FormComplant->resize(400, 300);
        buttonBox = new QDialogButtonBox(FormComplant);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(20, 260, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lineEdit_patient_id = new QLineEdit(FormComplant);
        lineEdit_patient_id->setObjectName("lineEdit_patient_id");
        lineEdit_patient_id->setGeometry(QRect(200, 20, 161, 25));
        label = new QLabel(FormComplant);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 151, 17));
        dateEdit_end_date = new QDateEdit(FormComplant);
        dateEdit_end_date->setObjectName("dateEdit_end_date");
        dateEdit_end_date->setGeometry(QRect(210, 170, 110, 22));
        label_4 = new QLabel(FormComplant);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 170, 161, 17));
        label_2 = new QLabel(FormComplant);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 60, 151, 17));
        lineEdit_doctor_id = new QLineEdit(FormComplant);
        lineEdit_doctor_id->setObjectName("lineEdit_doctor_id");
        lineEdit_doctor_id->setGeometry(QRect(200, 60, 161, 25));
        label_3 = new QLabel(FormComplant);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 130, 161, 17));
        lineEdit_complaint_message = new QLineEdit(FormComplant);
        lineEdit_complaint_message->setObjectName("lineEdit_complaint_message");
        lineEdit_complaint_message->setGeometry(QRect(200, 100, 161, 25));
        label_5 = new QLabel(FormComplant);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 100, 161, 17));
        comboBox_status = new QComboBox(FormComplant);
        comboBox_status->addItem(QString());
        comboBox_status->addItem(QString());
        comboBox_status->addItem(QString());
        comboBox_status->setObjectName("comboBox_status");
        comboBox_status->setGeometry(QRect(200, 130, 161, 32));

        retranslateUi(FormComplant);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FormComplant, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FormComplant, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FormComplant);
    } // setupUi

    void retranslateUi(QDialog *FormComplant)
    {
        FormComplant->setWindowTitle(QCoreApplication::translate("FormComplant", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FormComplant", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 ID \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("FormComplant", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\267\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("FormComplant", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 ID \320\264\320\276\320\272\321\202\320\276\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("FormComplant", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\320\260\321\202\321\203\321\201 ", nullptr));
        label_5->setText(QCoreApplication::translate("FormComplant", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265 ", nullptr));
        comboBox_status->setItemText(0, QCoreApplication::translate("FormComplant", "\320\235\320\260 \321\200\320\260\321\201\321\201\320\274\320\276\321\202\321\200\320\265\320\275\320\270\320\270", nullptr));
        comboBox_status->setItemText(1, QCoreApplication::translate("FormComplant", "\320\237\321\200\320\270\320\275\321\217\321\202\320\260", nullptr));
        comboBox_status->setItemText(2, QCoreApplication::translate("FormComplant", "\320\236\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\260", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FormComplant: public Ui_FormComplant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCOMPLANT_H
