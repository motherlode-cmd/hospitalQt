#ifndef FORMDOCTOR_H
#define FORMDOCTOR_H

#include <QDialog>

namespace Ui {
class FormDoctor;
}

class FormDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit FormDoctor(QWidget *parent = nullptr);
    ~FormDoctor();
signals:
    void dataEntered(QStringList &userData);

private slots:
    void on_buttonBox_accepted();
private:
    Ui::FormDoctor *ui;
};

#endif // FORMDOCTOR_H
