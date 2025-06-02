#include "formprescription.h"
#include "ui_formprescription.h"

FormPrescription::FormPrescription(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FormPrescription)
{
    ui->setupUi(this);
}

FormPrescription::~FormPrescription()
{
    delete ui;
}

void FormPrescription::on_buttonBox_accepted()
{
    QStringList userData;

    userData.append(ui->lineEdit_doctor_id->text());
    userData.append(ui->lineEdit_medicine->text());
    userData.append(ui->dateEdit_issue_date->text());
    userData.append(ui->timeEdit_issue_time->text());
    userData.append(ui->doubleSpinBox_->text());
    userData.append(ui->lineEdit_inclassions->text());
    emit dataEntered(userData);
    close();
}