#include "formpatient.h"
#include "ui_formpatient.h"

FormPatient::FormPatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FormPatient)
{
    ui->setupUi(this);
}

FormPatient::~FormPatient()
{
    delete ui;
}

void FormPatient::on_buttonBox_accepted()
{
    QStringList userData;
    userData.append(ui->lineEdit_full_name->text());
    userData.append(ui->dateEdit_birth_date->text());
    userData.append(ui->checkBox_is_patient->isChecked()? "1":"0");
    emit dataEntered(userData);
    close();
}