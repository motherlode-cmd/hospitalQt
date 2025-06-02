/********************************************************************************
** Form generated from reading UI file 'formprescription.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPRESCRIPTION_H
#define UI_FORMPRESCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_formprescription
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formprescription)
    {
        if (formprescription->objectName().isEmpty())
            formprescription->setObjectName("formprescription");
        formprescription->resize(400, 300);
        buttonBox = new QDialogButtonBox(formprescription);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(formprescription);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, formprescription, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, formprescription, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(formprescription);
    } // setupUi

    void retranslateUi(QDialog *formprescription)
    {
        formprescription->setWindowTitle(QCoreApplication::translate("formprescription", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formprescription: public Ui_formprescription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPRESCRIPTION_H
