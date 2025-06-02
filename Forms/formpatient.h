#ifndef FORMPATIENT_H
#define FORMPATIENT_H

#include <QDialog>

namespace Ui {
class FormPatient;
}

class FormPatient : public QDialog
{
    Q_OBJECT

public:
    explicit FormPatient(QWidget *parent = nullptr);
    ~FormPatient();
signals:
    void dataEntered(QStringList &userData);

private slots:
    void on_buttonBox_accepted();
    
private:
    Ui::FormPatient *ui;
};

#endif // FORMPATIENT_H
