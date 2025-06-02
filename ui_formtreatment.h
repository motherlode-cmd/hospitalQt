/********************************************************************************
** Form generated from reading UI file 'formtreatment.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTREATMENT_H
#define UI_FORMTREATMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FormTreatment
{
public:
    QDateEdit *dateEdit_end_date;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *lineEdit_patient_id;
    QLineEdit *lineEdit_note;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit_diagnosis;
    QDateEdit *dateEdit_start_date;
    QLineEdit *lineEdit_prescription_id;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *FormTreatment)
    {
        if (FormTreatment->objectName().isEmpty())
            FormTreatment->setObjectName("FormTreatment");
        FormTreatment->resize(400, 300);
        dateEdit_end_date = new QDateEdit(FormTreatment);
        dateEdit_end_date->setObjectName("dateEdit_end_date");
        dateEdit_end_date->setGeometry(QRect(240, 130, 110, 22));
        label_6 = new QLabel(FormTreatment);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 210, 151, 17));
        label_2 = new QLabel(FormTreatment);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 50, 161, 17));
        lineEdit_patient_id = new QLineEdit(FormTreatment);
        lineEdit_patient_id->setObjectName("lineEdit_patient_id");
        lineEdit_patient_id->setGeometry(QRect(210, 10, 161, 25));
        lineEdit_note = new QLineEdit(FormTreatment);
        lineEdit_note->setObjectName("lineEdit_note");
        lineEdit_note->setGeometry(QRect(210, 210, 161, 25));
        label_5 = new QLabel(FormTreatment);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 170, 151, 17));
        label_4 = new QLabel(FormTreatment);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 130, 161, 17));
        lineEdit_diagnosis = new QLineEdit(FormTreatment);
        lineEdit_diagnosis->setObjectName("lineEdit_diagnosis");
        lineEdit_diagnosis->setGeometry(QRect(210, 50, 161, 25));
        dateEdit_start_date = new QDateEdit(FormTreatment);
        dateEdit_start_date->setObjectName("dateEdit_start_date");
        dateEdit_start_date->setGeometry(QRect(240, 90, 110, 22));
        lineEdit_prescription_id = new QLineEdit(FormTreatment);
        lineEdit_prescription_id->setObjectName("lineEdit_prescription_id");
        lineEdit_prescription_id->setGeometry(QRect(210, 170, 161, 25));
        buttonBox = new QDialogButtonBox(FormTreatment);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 250, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(FormTreatment);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 151, 17));
        label_3 = new QLabel(FormTreatment);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 90, 161, 17));

        retranslateUi(FormTreatment);

        QMetaObject::connectSlotsByName(FormTreatment);
    } // setupUi

    void retranslateUi(QDialog *FormTreatment)
    {
        FormTreatment->setWindowTitle(QCoreApplication::translate("FormTreatment", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("FormTreatment", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("FormTreatment", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\270\320\260\320\263\320\275\320\276\320\267 ", nullptr));
        label_5->setText(QCoreApplication::translate("FormTreatment", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 ID \320\277\321\200\320\265\321\201\320\272\321\200\320\270\320\277\321\210\320\265\320\275\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("FormTreatment", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\272\320\276\320\275\321\206\320\260 \320\273\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("FormTreatment", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 ID \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("FormTreatment", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\275\320\260\321\207\320\260\320\273\320\260 \320\273\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTreatment: public Ui_FormTreatment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTREATMENT_H
