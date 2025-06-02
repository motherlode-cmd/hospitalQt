/********************************************************************************
** Form generated from reading UI file 'formdoctor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDOCTOR_H
#define UI_FORMDOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FormDoctor
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit_full_name;
    QLineEdit *lineEdit_email;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_phone;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox_peciality;

    void setupUi(QDialog *FormDoctor)
    {
        if (FormDoctor->objectName().isEmpty())
            FormDoctor->setObjectName("FormDoctor");
        FormDoctor->resize(400, 300);
        label_3 = new QLabel(FormDoctor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 161, 17));
        label_2 = new QLabel(FormDoctor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 161, 17));
        lineEdit_full_name = new QLineEdit(FormDoctor);
        lineEdit_full_name->setObjectName("lineEdit_full_name");
        lineEdit_full_name->setGeometry(QRect(200, 60, 161, 25));
        lineEdit_email = new QLineEdit(FormDoctor);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(200, 180, 161, 25));
        label_4 = new QLabel(FormDoctor);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 180, 151, 17));
        label = new QLabel(FormDoctor);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 60, 151, 17));
        lineEdit_phone = new QLineEdit(FormDoctor);
        lineEdit_phone->setObjectName("lineEdit_phone");
        lineEdit_phone->setGeometry(QRect(200, 140, 161, 25));
        buttonBox = new QDialogButtonBox(FormDoctor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        comboBox_peciality = new QComboBox(FormDoctor);
        comboBox_peciality->addItem(QString());
        comboBox_peciality->addItem(QString());
        comboBox_peciality->addItem(QString());
        comboBox_peciality->addItem(QString());
        comboBox_peciality->setObjectName("comboBox_peciality");
        comboBox_peciality->setGeometry(QRect(200, 90, 161, 32));

        retranslateUi(FormDoctor);

        QMetaObject::connectSlotsByName(FormDoctor);
    } // setupUi

    void retranslateUi(QDialog *FormDoctor)
    {
        FormDoctor->setWindowTitle(QCoreApplication::translate("FormDoctor", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("FormDoctor", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260 ", nullptr));
        label_2->setText(QCoreApplication::translate("FormDoctor", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("FormDoctor", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\276\321\207\321\202\320\276\320\262\321\213\320\271 \320\260\320\264\321\200\320\265\321\201 ", nullptr));
        label->setText(QCoreApplication::translate("FormDoctor", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\244\320\230\320\236", nullptr));
        comboBox_peciality->setItemText(0, QCoreApplication::translate("FormDoctor", "\320\237\321\201\320\270\321\205\320\270\320\260\321\202\321\200", nullptr));
        comboBox_peciality->setItemText(1, QCoreApplication::translate("FormDoctor", "\320\235\320\265\320\262\321\200\320\276\320\273\320\276\320\263", nullptr));
        comboBox_peciality->setItemText(2, QCoreApplication::translate("FormDoctor", "\320\224\320\265\321\202\321\201\320\272\320\270\320\271 \320\262\321\200\320\260\321\207", nullptr));
        comboBox_peciality->setItemText(3, QCoreApplication::translate("FormDoctor", "\320\235\320\260\321\200\320\272\320\276\320\273\320\276\320\263", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FormDoctor: public Ui_FormDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDOCTOR_H
