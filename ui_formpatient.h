/********************************************************************************
** Form generated from reading UI file 'formpatient.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPATIENT_H
#define UI_FORMPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FormPatient
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit_full_name;
    QLabel *label_3;
    QLabel *label_2;
    QCheckBox *checkBox_is_patient;
    QDateEdit *dateEdit_birth_date;

    void setupUi(QDialog *FormPatient)
    {
        if (FormPatient->objectName().isEmpty())
            FormPatient->setObjectName("FormPatient");
        FormPatient->resize(400, 300);
        buttonBox = new QDialogButtonBox(FormPatient);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(FormPatient);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 151, 17));
        lineEdit_full_name = new QLineEdit(FormPatient);
        lineEdit_full_name->setObjectName("lineEdit_full_name");
        lineEdit_full_name->setGeometry(QRect(210, 50, 161, 25));
        label_3 = new QLabel(FormPatient);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 130, 161, 17));
        label_2 = new QLabel(FormPatient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 90, 161, 17));
        checkBox_is_patient = new QCheckBox(FormPatient);
        checkBox_is_patient->setObjectName("checkBox_is_patient");
        checkBox_is_patient->setGeometry(QRect(210, 130, 85, 20));
        dateEdit_birth_date = new QDateEdit(FormPatient);
        dateEdit_birth_date->setObjectName("dateEdit_birth_date");
        dateEdit_birth_date->setGeometry(QRect(210, 90, 110, 22));

        retranslateUi(FormPatient);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FormPatient, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FormPatient, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FormPatient);
    } // setupUi

    void retranslateUi(QDialog *FormPatient)
    {
        FormPatient->setWindowTitle(QCoreApplication::translate("FormPatient", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FormPatient", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\244\320\230\320\236", nullptr));
        label_3->setText(QCoreApplication::translate("FormPatient", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202? ", nullptr));
        label_2->setText(QCoreApplication::translate("FormPatient", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        checkBox_is_patient->setText(QCoreApplication::translate("FormPatient", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPatient: public Ui_FormPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPATIENT_H
