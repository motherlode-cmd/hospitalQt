#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QMap>
#include "constants/Tables.hpp"
#include "QtModels/QTableModel.h"
#include "QtModels/QtModels.hpp"
#include "Forms/formcomplant.h"
#include <QDebug>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBox_currentIndexChanged(int index);
    void on_pushButton_clicked();
    void on_pushButton_delete_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QMap<ElementType, QTableModel*> models;
    
    void initializeModels();
    void setupComboBox();
    void connectDatabase();
    void showFormForCurrentTable();
};
#endif // MAINWINDOW_H