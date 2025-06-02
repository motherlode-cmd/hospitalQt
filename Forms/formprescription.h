#ifndef FORMPRESCRIPTION_H
#define FORMPRESCRIPTION_H

#include <QDialog>

namespace Ui {
class FormPrescription;
}

class FormPrescription : public QDialog
{
    Q_OBJECT

public:
    explicit FormPrescription(QWidget *parent = nullptr);
    ~FormPrescription();
signals:
    void dataEntered(QStringList &userData);

private slots:
    void on_buttonBox_accepted();
private:
    Ui::FormPrescription *ui;
};

#endif // FORMPRESCRIPTION_H
