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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_FormComplant
{
public:
    QDialogButtonBox *buttonBox;

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

        retranslateUi(FormComplant);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FormComplant, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FormComplant, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FormComplant);
    } // setupUi

    void retranslateUi(QDialog *FormComplant)
    {
        FormComplant->setWindowTitle(QCoreApplication::translate("FormComplant", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormComplant: public Ui_FormComplant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCOMPLANT_H
