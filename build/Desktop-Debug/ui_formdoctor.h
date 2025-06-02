/********************************************************************************
** Form generated from reading UI file 'formdoctor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDOCTOR_H
#define UI_FORMDOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_FormDoctor
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FormDoctor)
    {
        if (FormDoctor->objectName().isEmpty())
            FormDoctor->setObjectName("FormDoctor");
        FormDoctor->resize(400, 300);
        buttonBox = new QDialogButtonBox(FormDoctor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(FormDoctor);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FormDoctor, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FormDoctor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FormDoctor);
    } // setupUi

    void retranslateUi(QDialog *FormDoctor)
    {
        FormDoctor->setWindowTitle(QCoreApplication::translate("FormDoctor", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormDoctor: public Ui_FormDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDOCTOR_H
