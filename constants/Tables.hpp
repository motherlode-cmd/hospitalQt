#ifndef TABLES_H
#define TABLES_H
#include <iostream>
#include <map>
#include <QStringList>
#include <QString>
#include <QMap>
#include <QRegularExpression>
#include <QValidator>

enum class ElementType
{
    Wards,
    Employees,
    Employee_qualifications,
    Employee_experience,
    Work_schedules,
    Patients,
    Patient_relatives,
    District_doctors,
    Appointments,
    Outpatient_patients,
    Inpatient_patients,
    Medications,
    Prescribed_medications,
    Supplies,
    Suppliers,
    Supply_requests,
    Unknown
};

const QMap<ElementType, QStringList> tableLabels{
    {ElementType::Wards, {"id", "number", "name", "location", "total_beds", "phone_extension"}},
    {ElementType::Employees, {"id", "personnel_number", "last_name", "first_name", "middle_name", 
                             "address_city", "address_street", "address_house", "address_apartment",
                             "phone", "birth_date", "gender", "passport_series", "passport_number",
                             "position", "current_salary", "pay_rate", "hours_per_week",
                             "payment_frequency", "contract_type", "ward_id"}},
    {ElementType::Employee_qualifications, {"id", "employee_id", "qualification_type", 
                                          "qualification_date", "institution_name"}},
    {ElementType::Employee_experience, {"id", "employee_id", "organization_name", "position",
                                      "start_date", "end_date"}},
    {ElementType::Work_schedules, {"id", "employee_id", "ward_id", "shift_date", "shift_type"}},
    {ElementType::Patients, {"id", "patient_number", "last_name", "first_name", "middle_name",
                            "address_city", "address_street", "address_house", "address_apartment",
                            "phone", "birth_date", "gender", "marital_status", "registration_date"}},
    {ElementType::Patient_relatives, {"id", "patient_id", "last_name", "first_name", "middle_name",
                                    "relationship", "address_city", "address_street", "address_house",
                                    "address_apartment", "phone"}},
    {ElementType::District_doctors, {"id", "last_name", "first_name", "middle_name", "clinic_name",
                                   "address_city", "address_street", "address_house", "address_apartment",
                                   "phone"}},
    {ElementType::Appointments, {"id", "patient_id", "district_doctor_id", "consultant_last_name",
                               "consultant_first_name", "consultant_middle_name", "consultant_personnel_number",
                               "appointment_date", "room_number", "recommendation"}},
    {ElementType::Outpatient_patients, {"id", "patient_id", "appointment_date"}},
    {ElementType::Inpatient_patients, {"id", "patient_id", "ward_id", "bed_number", "queue_registration_date",
                                     "assigned_ward_id", "expected_treatment_days", "placement_date",
                                     "expected_discharge_date", "actual_discharge_date"}},
    {ElementType::Medications, {"id", "medication_code", "name", "description", "dosage",
                               "administration_method", "stock_quantity", "reorder_level", "unit_cost"}},
    {ElementType::Prescribed_medications, {"id", "patient_id", "medication_id", "ward_id",
                                         "daily_dosage", "administration_method", "start_date", "end_date"}},
    {ElementType::Supplies, {"id", "item_code", "purpose", "description", "item_type",
                            "stock_quantity", "reorder_level", "unit_cost"}},
    {ElementType::Suppliers, {"id", "supplier_number", "name", "address_city", "address_street",
                             "address_house", "address_apartment", "phone", "fax"}},
    {ElementType::Supply_requests, {"id", "request_number", "employee_id", "ward_id", "item_id",
                                  "medication_id", "quantity", "order_date", "delivery_date", "status"}},
    {ElementType::Unknown, {}}
};

const QMap<ElementType, QString> tableNames{
{ElementType::Wards, "wards"},
{ElementType::Employees, "employees"},
{ElementType::Employee_qualifications, "employee_qualifications"},
{ElementType::Employee_experience, "employee_experience"},
{ElementType::Work_schedules, "work_schedules"},
{ElementType::Patients, "patients"},
{ElementType::Patient_relatives, "patient_relatives"},
{ElementType::District_doctors, "district_doctors"},
{ElementType::Appointments, "appointments"},
{ElementType::Outpatient_patients, "outpatient_patients"},
{ElementType::Inpatient_patients, "inpatient_patients"},
{ElementType::Medications, "medications"},
{ElementType::Prescribed_medications, "prescribed_medications"},
{ElementType::Supplies, "supplies"},
{ElementType::Suppliers, "suppliers"},
{ElementType::Supply_requests, "supply_requests"}
};

const QMap<QString, QString> descriptionLabels
{
    // Общие поля
    {"id", "Уникальный идентификатор"},
    {"number", "Номер"},
    {"name", "Наименование"},
    {"phone", "Телефон"},
    {"address_city", "Город"},
    {"address_street", "Улица"},
    {"address_house", "Дом"},
    {"address_apartment", "Квартира"},
    {"description", "Описание"},
    
    // Палаты
    {"location", "Расположение (блок)"},
    {"total_beds", "Общее количество коек"},
    {"phone_extension", "Добавочный номер"},
    
    // Сотрудники
    {"personnel_number", "Табельный номер"},
    {"last_name", "Фамилия"},
    {"first_name", "Имя"},
    {"middle_name", "Отчество"},
    {"birth_date", "Дата рождения"},
    {"gender", "Пол (М/Ж)"},
    {"passport_series", "Серия паспорта"},
    {"passport_number", "Номер паспорта"},
    {"position", "Должность"},
    {"current_salary", "Текущая зарплата"},
    {"pay_rate", "Ставка"},
    {"hours_per_week", "Часов в неделю"},
    {"payment_frequency", "Частота выплат (еженедельно/ежемесячно)"},
    {"contract_type", "Тип контракта (постоянный/временный)"},
    {"ward_id", "ID палаты"},
    
    // Квалификация и опыт
    {"employee_id", "ID сотрудника"},
    {"qualification_type", "Тип квалификации"},
    {"qualification_date", "Дата получения квалификации"},
    {"institution_name", "Учебное заведение"},
    {"organization_name", "Организация"},
    {"start_date", "Дата начала"},
    {"end_date", "Дата окончания"},
    
    // График работы
    {"shift_date", "Дата смены"},
    {"shift_type", "Тип смены (утро/день/ночь)"},
    
    // Пациенты
    {"patient_number", "Номер пациента"},
    {"marital_status", "Семейное положение"},
    {"registration_date", "Дата регистрации"},
    
    // Родственники
    {"relationship", "Родственная связь"},
    
    // Участковые врачи
    {"clinic_name", "Название клиники"},
    
    // Приемы
    {"district_doctor_id", "ID участкового врача"},
    {"consultant_last_name", "Фамилия консультанта"},
    {"consultant_first_name", "Имя консультанта"},
    {"consultant_middle_name", "Отчество консультанта"},
    {"consultant_personnel_number", "Табельный номер консультанта"},
    {"appointment_date", "Дата и время приема"},
    {"room_number", "Номер кабинета"},
    {"recommendation", "Рекомендации"},
    
    // Стационарные пациенты
    {"bed_number", "Номер койки"},
    {"queue_registration_date", "Дата постановки в очередь"},
    {"assigned_ward_id", "ID назначенной палаты"},
    {"expected_treatment_days", "Предполагаемый срок лечения (дней)"},
    {"placement_date", "Дата размещения"},
    {"expected_discharge_date", "Предполагаемая дата выписки"},
    {"actual_discharge_date", "Фактическая дата выписки"},
    
    // Медикаменты
    {"medication_code", "Код препарата"},
    {"dosage", "Дозировка"},
    {"administration_method", "Способ приема"},
    {"stock_quantity", "Количество на складе"},
    {"reorder_level", "Уровень повторного заказа"},
    {"unit_cost", "Стоимость единицы"},
    
    // Назначенные медикаменты
    {"medication_id", "ID медикамента"},
    {"daily_dosage", "Дозировка в день"},
    
    // Расходные материалы
    {"item_code", "Код предмета"},
    {"purpose", "Назначение"},
    {"item_type", "Тип (хирургический/нехирургический/фармацевтический)"},
    
    // Поставщики
    {"supplier_number", "Номер поставщика"},
    {"fax", "Факс"},
    
    // Заявки
    {"request_number", "Номер заявки"},
    {"quantity", "Количество"},
    {"order_date", "Дата заказа"},
    {"delivery_date", "Дата доставки"},
    {"status", "Статус (ожидает/доставлено/отменено)"}
};

const QMap<QString, QRegularExpression> fieldValidators {
    // Общие поля
    {"id", QRegularExpression("^\\d+$")}, // Только цифры
    {"number", QRegularExpression("^[A-Za-z0-9-]+$")}, // Буквы, цифры и дефисы
    {"name", QRegularExpression("^[\\p{L}0-9\\s\\.-]+$", QRegularExpression::UseUnicodePropertiesOption)}, // Буквы, цифры, пробелы, точки, дефисы
    {"phone", QRegularExpression("^\\+?[0-9\\s()-]{7,20}$")}, // Международные номера
    {"address_city", QRegularExpression("^[\\p{L}\\s-]+$", QRegularExpression::UseUnicodePropertiesOption)}, // Только буквы и дефисы
    {"address_street", QRegularExpression("^[\\p{L}0-9\\s\\.-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"address_house", QRegularExpression("^[0-9]+[A-Za-z]?$")}, // Номер дома с возможной буквой
    {"address_apartment", QRegularExpression("^[0-9]+[A-Za-z]?$")}, // Номер квартиры
    {"description", QRegularExpression("^[\\p{L}0-9\\s\\.\\,\\!\\?-]+$", QRegularExpression::UseUnicodePropertiesOption)}, // Текст с пунктуацией

    // Палаты
    {"location", QRegularExpression("^[A-Za-z0-9\\s-]+$")}, // Блоки с цифрами/буквами
    {"total_beds", QRegularExpression("^\\d{1,3}$")}, // До 3 цифр
    {"phone_extension", QRegularExpression("^\\d{2,5}$")}, // 2-5 цифр

    // Сотрудники
    {"personnel_number", QRegularExpression("^[A-Za-z0-9-]{5,20}$")},
    {"last_name", QRegularExpression("^[\\p{L}-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"first_name", QRegularExpression("^[\\p{L}-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"middle_name", QRegularExpression("^[\\p{L}-]*$", QRegularExpression::UseUnicodePropertiesOption)}, // Может быть пустым
    {"birth_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")}, // DD.MM.YYYY
    {"gender", QRegularExpression("^[МЖ]$")}, // Только М или Ж
    {"passport_series", QRegularExpression("^\\d{4}$")},
    {"passport_number", QRegularExpression("^\\d{6}$")},
    {"position", QRegularExpression("^[\\p{L}\\s-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"current_salary", QRegularExpression("^\\d{1,6}(\\.\\d{1,2})?$")}, // Зарплата с копейками
    {"pay_rate", QRegularExpression("^\\d{1,4}(\\.\\d{1,2})?$")},
    {"hours_per_week", QRegularExpression("^\\d{1,2}(\\.\\d{1,1})?$")}, // До 99.9 часов
    {"payment_frequency", QRegularExpression("^(еженедельно|ежемесячно)$")},
    {"contract_type", QRegularExpression("^(постоянный|временный)$")},
    {"ward_id", QRegularExpression("^\\d+$")},

    // Квалификация и опыт
    {"employee_id", QRegularExpression("^\\d+$")},
    {"qualification_type", QRegularExpression("^[\\p{L}\\s-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"qualification_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")},
    {"institution_name", QRegularExpression("^[\\p{L}0-9\\s\\.\"'-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"organization_name", QRegularExpression("^[\\p{L}0-9\\s\\.\"'-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"start_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")},
    {"end_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$|^$")}, // Может быть пустым

    // График работы
    {"shift_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")},
    {"shift_type", QRegularExpression("^(утро|день|ночь)$")},

    // Пациенты
    {"patient_number", QRegularExpression("^[A-Za-z0-9-]{5,20}$")},
    {"marital_status", QRegularExpression("^[\\p{L}\\s-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"registration_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")},

    // Родственники
    {"relationship", QRegularExpression("^[\\p{L}\\s-]+$", QRegularExpression::UseUnicodePropertiesOption)},

    // Участковые врачи
    {"clinic_name", QRegularExpression("^[\\p{L}0-9\\s\\.\"'-]+$", QRegularExpression::UseUnicodePropertiesOption)},

    // Приемы
    {"district_doctor_id", QRegularExpression("^\\d+$")},
    {"consultant_last_name", QRegularExpression("^[\\p{L}-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"consultant_first_name", QRegularExpression("^[\\p{L}-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"consultant_middle_name", QRegularExpression("^[\\p{L}-]*$", QRegularExpression::UseUnicodePropertiesOption)}, // Может быть пустым
    {"consultant_personnel_number", QRegularExpression("^[A-Za-z0-9-]{5,20}$")},
    {"appointment_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d\\s([01][0-9]|2[0-3]):[0-5][0-9]$")}, // DD.MM.YYYY HH:MM
    {"room_number", QRegularExpression("^[A-Za-z0-9-]{1,10}$")},
    {"recommendation", QRegularExpression("^[\\p{L}0-9\\s\\.\\,\\!\\?-]+$", QRegularExpression::UseUnicodePropertiesOption)},

    // Стационарные пациенты
    {"bed_number", QRegularExpression("^[A-Za-z0-9-]{1,10}$")},
    {"queue_registration_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")},
    {"assigned_ward_id", QRegularExpression("^\\d+$")},
    {"expected_treatment_days", QRegularExpression("^\\d{1,3}$")},
    {"placement_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")},
    {"expected_discharge_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")},
    {"actual_discharge_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$|^$")}, // Может быть пустым

    // Медикаменты
    {"medication_code", QRegularExpression("^[A-Za-z0-9-]{5,20}$")},
    {"dosage", QRegularExpression("^\\d{1,5}(\\.\\d{1,3})?\\s?[a-zA-Z]{0,5}$")}, // Число с единицами измерения
    {"administration_method", QRegularExpression("^[\\p{L}\\s-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"stock_quantity", QRegularExpression("^\\d{1,6}$")},
    {"reorder_level", QRegularExpression("^\\d{1,6}$")},
    {"unit_cost", QRegularExpression("^\\d{1,6}(\\.\\d{1,2})?$")},

    // Назначенные медикаменты
    {"medication_id", QRegularExpression("^\\d+$")},
    {"daily_dosage", QRegularExpression("^\\d{1,2}$")}, // До 99 приемов в день

    // Расходные материалы
    {"item_code", QRegularExpression("^[A-Za-z0-9-]{5,20}$")},
    {"purpose", QRegularExpression("^[\\p{L}\\s-]+$", QRegularExpression::UseUnicodePropertiesOption)},
    {"item_type", QRegularExpression("^(хирургический|нехирургический|фармацевтический)$")},

    // Поставщики
    {"supplier_number", QRegularExpression("^[A-Za-z0-9-]{5,20}$")},
    {"fax", QRegularExpression("^\\+?[0-9\\s()-]{7,20}$")},

    // Заявки
    {"request_number", QRegularExpression("^[A-Za-z0-9-]{5,20}$")},
    {"quantity", QRegularExpression("^\\d{1,6}$")},
    {"order_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$")},
    {"delivery_date", QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[012])\\.(19|20)\\d\\d$|^$")}, // Может быть пустым
    {"status", QRegularExpression("^(ожидает|доставлено|отменено)$")}
};
#endif