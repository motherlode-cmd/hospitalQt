/********************************************************************************
** Form generated from reading UI file 'formtreatment.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTREATMENT_H
#define UI_FORMTREATMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_formtreatment
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formtreatment)
    {
        if (formtreatment->objectName().isEmpty())
            formtreatment->setObjectName("formtreatment");
        formtreatment->resize(400, 300);
        buttonBox = new QDialogButtonBox(formtreatment);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(formtreatment);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, formtreatment, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, formtreatment, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(formtreatment);
    } // setupUi

    void retranslateUi(QDialog *formtreatment)
    {
        formtreatment->setWindowTitle(QCoreApplication::translate("formtreatment", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formtreatment: public Ui_formtreatment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTREATMENT_H
