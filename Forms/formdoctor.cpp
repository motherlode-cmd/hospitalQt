#include "formdoctor.h"
#include "ui_formdoctor.h"
#include <QRegularExpression>
#include <QValidator>

FormDoctor::FormDoctor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FormDoctor)
{
    ui->setupUi(this);
    QRegularExpression phoneValidator("^\\d{2}-\\d{2}-\\d{3}$");
    QValidator *validator = new QRegularExpressionValidator(phoneValidator, this);
    ui->lineEdit_phone->setValidator(validator);
}

FormDoctor::~FormDoctor()
{
    delete ui;
}

void FormDoctor::on_buttonBox_accepted()
{
    QStringList userData;

    userData.append(ui->lineEdit_full_name->text());
    userData.append(ui->comboBox_peciality->currentText());
    userData.append(ui->lineEdit_phone->text());
    userData.append(ui->lineEdit_email->text());
    emit dataEntered(userData);
    close();
}