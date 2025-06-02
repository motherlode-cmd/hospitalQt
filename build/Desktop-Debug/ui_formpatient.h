/********************************************************************************
** Form generated from reading UI file 'formpatient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPATIENT_H
#define UI_FORMPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_formpatient
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formpatient)
    {
        if (formpatient->objectName().isEmpty())
            formpatient->setObjectName("formpatient");
        formpatient->resize(400, 300);
        buttonBox = new QDialogButtonBox(formpatient);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(formpatient);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, formpatient, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, formpatient, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(formpatient);
    } // setupUi

    void retranslateUi(QDialog *formpatient)
    {
        formpatient->setWindowTitle(QCoreApplication::translate("formpatient", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formpatient: public Ui_formpatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPATIENT_H
