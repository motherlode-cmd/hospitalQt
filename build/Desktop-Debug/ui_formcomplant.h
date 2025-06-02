/********************************************************************************
** Form generated from reading UI file 'formcomplant.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCOMPLANT_H
#define UI_FORMCOMPLANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_formcomplant
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formcomplant)
    {
        if (formcomplant->objectName().isEmpty())
            formcomplant->setObjectName("formcomplant");
        formcomplant->resize(400, 300);
        buttonBox = new QDialogButtonBox(formcomplant);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(formcomplant);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, formcomplant, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, formcomplant, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(formcomplant);
    } // setupUi

    void retranslateUi(QDialog *formcomplant)
    {
        formcomplant->setWindowTitle(QCoreApplication::translate("formcomplant", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formcomplant: public Ui_formcomplant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCOMPLANT_H
