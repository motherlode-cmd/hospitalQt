#ifndef FORMTREATMENT_H
#define FORMTREATMENT_H

#include <QDialog>

namespace Ui {
class FormTreatment;
}

class FormTreatment : public QDialog
{
    Q_OBJECT

public:
    explicit FormTreatment(QWidget *parent = nullptr);
    ~FormTreatment();
signals:
    void dataEntered(QStringList &userData);

private slots:
    void on_buttonBox_accepted();
    
private:
    Ui::FormTreatment *ui;

};

#endif // FORMTREATMENT_H
