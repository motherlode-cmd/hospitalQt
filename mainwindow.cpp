#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    connectDatabase();
    initializeModels();
    setupComboBox();
    
    // Установить первую модель по умолчанию
    ui->table->setModel(models[ElementType::Wards]);
    ui->table->resizeColumnsToContents();
    ui->pushButton_delete->setEnabled(true);
}

MainWindow::~MainWindow()
{
    db.close();
    qDeleteAll(models);
    delete ui;
}

void MainWindow::connectDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./hospital.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось открыть базу данных");
        qDebug() << "Database error:" << db.lastError().text();
    }
}

void MainWindow::initializeModels()
{
    // Создаем модели для всех таблиц
    models[ElementType::Wards] = new QtModel(this, ElementType::Wards);
    models[ElementType::Employees] = new QtModel(this, ElementType::Employees);
    models[ElementType::Employee_qualifications] = new QtModel(this, ElementType::Employee_qualifications);
    models[ElementType::Employee_experience] = new QtModel(this, ElementType::Employee_experience);
    models[ElementType::Work_schedules] = new QtModel(this, ElementType::Work_schedules);
    models[ElementType::Patients] = new QtModel(this, ElementType::Patients);
    models[ElementType::Patient_relatives] = new QtModel(this, ElementType::Patient_relatives);
    models[ElementType::District_doctors] = new QtModel(this, ElementType::District_doctors);
    models[ElementType::Appointments] = new QtModel(this, ElementType::Appointments);
    models[ElementType::Outpatient_patients] = new QtModel(this, ElementType::Outpatient_patients);
    models[ElementType::Inpatient_patients] = new QtModel(this, ElementType::Inpatient_patients);
    models[ElementType::Medications] = new QtModel(this, ElementType::Medications);
    models[ElementType::Prescribed_medications] = new QtModel(this, ElementType::Prescribed_medications);
    models[ElementType::Supplies] = new QtModel(this, ElementType::Supplies);
    models[ElementType::Suppliers] = new QtModel(this, ElementType::Suppliers);
    models[ElementType::Supply_requests] = new QtModel(this, ElementType::Supply_requests);
    models[ElementType::SearchingResult] = new QtModel(this, ElementType::SearchingResult);
}

void MainWindow::setupComboBox()
{
    // Очищаем комбобокс
    ui->comboBox->clear();
    
    // Добавляем все доступные таблицы
    ui->comboBox->addItem("Палаты", QVariant::fromValue(ElementType::Wards));
    ui->comboBox->addItem("Сотрудники", QVariant::fromValue(ElementType::Employees));
    ui->comboBox->addItem("Квалификации", QVariant::fromValue(ElementType::Employee_qualifications));
    ui->comboBox->addItem("Опыт работы", QVariant::fromValue(ElementType::Employee_experience));
    ui->comboBox->addItem("График работы", QVariant::fromValue(ElementType::Work_schedules));
    ui->comboBox->addItem("Пациенты", QVariant::fromValue(ElementType::Patients));
    ui->comboBox->addItem("Родственники", QVariant::fromValue(ElementType::Patient_relatives));
    ui->comboBox->addItem("Участковые врачи", QVariant::fromValue(ElementType::District_doctors));
    ui->comboBox->addItem("Приемы", QVariant::fromValue(ElementType::Appointments));
    ui->comboBox->addItem("Амбулаторные пациенты", QVariant::fromValue(ElementType::Outpatient_patients));
    ui->comboBox->addItem("Стационарные пациенты", QVariant::fromValue(ElementType::Inpatient_patients));
    ui->comboBox->addItem("Медикаменты", QVariant::fromValue(ElementType::Medications));
    ui->comboBox->addItem("Назначенные медикаменты", QVariant::fromValue(ElementType::Prescribed_medications));
    ui->comboBox->addItem("Расходные материалы", QVariant::fromValue(ElementType::Supplies));
    ui->comboBox->addItem("Поставщики", QVariant::fromValue(ElementType::Suppliers));
    ui->comboBox->addItem("Заявки на материалы", QVariant::fromValue(ElementType::Supply_requests));
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    
    // Получаем выбранный тип элемента из комбобокса
    ElementType selectedType = ui->comboBox->currentData().value<ElementType>();
    
    // Устанавливаем соответствующую модель в таблицу
    if (models.contains(selectedType)) {
        ui->table->setModel(models[selectedType]);
        ui->table->resizeColumnsToContents();
    }
}

void MainWindow::on_pushButton_clicked()
{
    showFormForCurrentTable();
}

void MainWindow::showFormForCurrentTable()
{
    ElementType currentType = ui->comboBox->currentData().value<ElementType>();
    
    QString tableName = tableNames[currentType];
    QMessageBox::information(this, "Добавление", 
                           QString("Должна открыться форма для добавления в таблицу %1").arg(tableName));
    
    FormComplant *form = new FormComplant(currentType, this);
    connect(form, &FormComplant::dataEntered, this->models[currentType], &QTableModel::addItem);
    form->show();
}

void MainWindow::on_pushButton_delete_clicked()
{
    QModelIndexList indexes = ui->table->selectionModel()->selectedRows();
    
    if (!indexes.isEmpty()) {
        ElementType currentType = ui->comboBox->currentData().value<ElementType>();
        QModelIndex index = indexes.first();
        
        if (models.contains(currentType)) {
            models[currentType]->removeItem(index);
        }
    }
}

void MainWindow::on_pushButton_search_clicked()
{
    if (ui->pushButton_search->text() != "Отмена") {
            QString searchingRowDate = ui->dateEdit->dateTime().toString();
            QString searchingRowQuality = ui->lineEdit_search_2->text();

            if (searchingRowQuality == "") {
                searchingRowQuality = "%";
            } else {
                searchingRowQuality = "%" + searchingRowQuality + "%";
            }

            ui->table->setModel(models[ElementType::SearchingResult]);
            ui->table->resizeColumnsToContents();
            models[ElementType::SearchingResult]->search(searchingRowQuality, searchingRowDate);
            ui->pushButton_search->setText("Отмена");
    } else {
        on_comboBox_currentIndexChanged(ui->comboBox->currentIndex());
        ui->pushButton_search->setText("Поиск сотрудника");
    }
}