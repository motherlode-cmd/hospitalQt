#include "formtreatment.h"
#include "ui_formtreatment.h"

FormTreatment::FormTreatment(QWidget *parent)
    : QDialog(parent), ui(new Ui::FormTreatment)
{
    ui->setupUi(this);
}

FormTreatment::~FormTreatment()
{
    delete ui;
}

void FormTreatment::on_buttonBox_accepted()
{
    QStringList userData;

    userData.append(ui->lineEdit_patient_id->text());
    userData.append(ui->dateEdit_start_date->text());
    userData.append(ui->lineEdit_diagnosis->text());
    userData.append(ui->lineEdit_prescription_id->text());
    userData.append(ui->dateEdit_end_date->text());
    userData.append(ui->lineEdit_note->text());
    emit dataEntered(userData);
    close();
}