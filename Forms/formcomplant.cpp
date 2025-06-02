#include "formcomplant.h"
#include "ui_formcomplant.h"

FormComplant::FormComplant(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FormComplant)
{
    ui->setupUi(this);
}

FormComplant::~FormComplant()
{
    delete ui;
}

void FormComplant::on_buttonBox_accepted()
{
    QStringList userData;
    userData.append(ui->lineEdit_doctor_id->text());
    userData.append(ui->lineEdit_patient_id->text());
    userData.append(ui->comboBox_status->currentText());
    userData.append(ui->dateEdit_end_date->text());
    userData.append(ui->lineEdit_complaint_message->text());
    emit dataEntered(userData);
    close();
}