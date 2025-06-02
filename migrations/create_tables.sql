CREATE TABLE wards (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    number VARCHAR(10) NOT NULL UNIQUE,
    name VARCHAR(100) NOT NULL,
    location VARCHAR(50) NOT NULL,
    total_beds INTEGER NOT NULL,
    phone_extension VARCHAR(10),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE employees (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    personnel_number VARCHAR(20) NOT NULL UNIQUE,
    last_name VARCHAR(50) NOT NULL,
    first_name VARCHAR(50) NOT NULL,
    middle_name VARCHAR(50),
    address_city VARCHAR(50) NOT NULL,
    address_street VARCHAR(100) NOT NULL,
    address_house VARCHAR(10) NOT NULL,
    address_apartment VARCHAR(10),
    phone VARCHAR(20) NOT NULL,
    birth_date DATE NOT NULL,
    gender CHAR(1) NOT NULL,
    passport_series VARCHAR(10) NOT NULL,
    passport_number VARCHAR(20) NOT NULL,
    position VARCHAR(100) NOT NULL,
    current_salary DECIMAL(10, 2) NOT NULL,
    pay_rate DECIMAL(10, 2) NOT NULL,
    hours_per_week DECIMAL(5, 2) NOT NULL,
    payment_frequency VARCHAR(10) NOT NULL, -- 'weekly' or 'monthly'
    contract_type VARCHAR(20) NOT NULL, -- 'permanent' or 'temporary'
    ward_id INTEGER REFERENCES wards(id),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE employee_qualifications (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    employee_id INTEGER NOT NULL REFERENCES employees(id),
    qualification_type VARCHAR(100) NOT NULL,
    qualification_date DATE NOT NULL,
    institution_name VARCHAR(100) NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE employee_experience (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    employee_id INTEGER NOT NULL REFERENCES employees(id),
    organization_name VARCHAR(100) NOT NULL,
    position VARCHAR(100) NOT NULL,
    start_date DATE NOT NULL,
    end_date DATE,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE work_schedules (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    employee_id INTEGER NOT NULL REFERENCES employees(id),
    ward_id INTEGER NOT NULL REFERENCES wards(id),
    shift_date DATE NOT NULL,
    shift_type VARCHAR(10) NOT NULL, -- 'morning', 'evening', 'night'
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    UNIQUE (employee_id, shift_date)
);

CREATE TABLE patients (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    patient_number VARCHAR(20) NOT NULL UNIQUE,
    last_name VARCHAR(50) NOT NULL,
    first_name VARCHAR(50) NOT NULL,
    middle_name VARCHAR(50),
    address_city VARCHAR(50) NOT NULL,
    address_street VARCHAR(100) NOT NULL,
    address_house VARCHAR(10) NOT NULL,
    address_apartment VARCHAR(10),
    phone VARCHAR(20) NOT NULL,
    birth_date DATE NOT NULL,
    gender CHAR(1) NOT NULL,
    marital_status VARCHAR(20),
    registration_date DATE NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE patient_relatives (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    patient_id INTEGER NOT NULL REFERENCES patients(id),
    last_name VARCHAR(50) NOT NULL,
    first_name VARCHAR(50) NOT NULL,
    middle_name VARCHAR(50),
    relationship VARCHAR(50) NOT NULL,
    address_city VARCHAR(50) NOT NULL,
    address_street VARCHAR(100) NOT NULL,
    address_house VARCHAR(10) NOT NULL,
    address_apartment VARCHAR(10),
    phone VARCHAR(20) NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE district_doctors (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    last_name VARCHAR(50) NOT NULL,
    first_name VARCHAR(50) NOT NULL,
    middle_name VARCHAR(50),
    clinic_name VARCHAR(100) NOT NULL,
    address_city VARCHAR(50) NOT NULL,
    address_street VARCHAR(100) NOT NULL,
    address_house VARCHAR(10) NOT NULL,
    address_apartment VARCHAR(10),
    phone VARCHAR(20) NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE appointments (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    patient_id INTEGER NOT NULL REFERENCES patients(id),
    district_doctor_id INTEGER REFERENCES district_doctors(id),
    consultant_last_name VARCHAR(50) NOT NULL,
    consultant_first_name VARCHAR(50) NOT NULL,
    consultant_middle_name VARCHAR(50),
    consultant_personnel_number VARCHAR(20),
    appointment_date TIMESTAMP NOT NULL,
    room_number VARCHAR(10) NOT NULL,
    recommendation TEXT,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE outpatient_patients (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    patient_id INTEGER NOT NULL REFERENCES patients(id),
    appointment_date TIMESTAMP NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE inpatient_patients (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    patient_id INTEGER NOT NULL REFERENCES patients(id),
    ward_id INTEGER NOT NULL REFERENCES wards(id),
    bed_number VARCHAR(10) NOT NULL,
    queue_registration_date DATE NOT NULL,
    assigned_ward_id INTEGER REFERENCES wards(id),
    expected_treatment_days INTEGER,
    placement_date DATE,
    expected_discharge_date DATE,
    actual_discharge_date DATE,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE medications (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    medication_code VARCHAR(20) NOT NULL UNIQUE,
    name VARCHAR(100) NOT NULL,
    description TEXT,
    dosage VARCHAR(50) NOT NULL,
    administration_method VARCHAR(50) NOT NULL,
    stock_quantity INTEGER NOT NULL,
    reorder_level INTEGER NOT NULL,
    unit_cost DECIMAL(10, 2) NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE prescribed_medications (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    patient_id INTEGER NOT NULL REFERENCES patients(id),
    medication_id INTEGER NOT NULL REFERENCES medications(id),
    ward_id INTEGER NOT NULL REFERENCES wards(id),
    daily_dosage INTEGER NOT NULL,
    administration_method VARCHAR(50) NOT NULL,
    start_date DATE NOT NULL,
    end_date DATE,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE supplies (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    item_code VARCHAR(20) NOT NULL UNIQUE,
    purpose VARCHAR(100) NOT NULL,
    description TEXT NOT NULL,
    item_type VARCHAR(50) NOT NULL, -- 'surgical', 'non-surgical', 'pharmaceutical'
    stock_quantity INTEGER NOT NULL,
    reorder_level INTEGER NOT NULL,
    unit_cost DECIMAL(10, 2) NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE suppliers (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    supplier_number VARCHAR(20) NOT NULL UNIQUE,
    name VARCHAR(100) NOT NULL,
    address_city VARCHAR(50) NOT NULL,
    address_street VARCHAR(100) NOT NULL,
    address_house VARCHAR(10) NOT NULL,
    address_apartment VARCHAR(10),
    phone VARCHAR(20) NOT NULL,
    fax VARCHAR(20),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE supply_requests (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    request_number VARCHAR(20) NOT NULL UNIQUE,
    employee_id INTEGER NOT NULL REFERENCES employees(id),
    ward_id INTEGER NOT NULL REFERENCES wards(id),
    item_id INTEGER REFERENCES supplies(id),
    medication_id INTEGER REFERENCES medications(id),
    quantity INTEGER NOT NULL,
    order_date DATE NOT NULL,
    delivery_date DATE,
    status VARCHAR(20) NOT NULL, -- 'pending', 'delivered', 'cancelled'
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    CHECK ((item_id IS NOT NULL AND medication_id IS NULL) OR (item_id IS NULL AND medication_id IS NOT NULL))
);

-- Индексы для сотрудников
CREATE INDEX idx_employees_last_name ON employees(last_name);
CREATE INDEX idx_employees_position ON employees(position);
CREATE INDEX idx_employees_ward_id ON employees(ward_id);

-- Индексы для пациентов
CREATE INDEX idx_patients_last_name ON patients(last_name);
CREATE INDEX idx_patients_patient_number ON patients(patient_number);

-- Индексы для стационарных пациентов
CREATE INDEX idx_inpatient_patients_ward_id ON inpatient_patients(ward_id);
CREATE INDEX idx_inpatient_patients_placement_date ON inpatient_patients(placement_date);

-- Индексы для назначенных медикаментов
CREATE INDEX idx_prescribed_medications_patient_id ON prescribed_medications(patient_id);
CREATE INDEX idx_prescribed_medications_medication_id ON prescribed_medications(medication_id);

-- Индексы для заявок на материалы
CREATE INDEX idx_supply_requests_ward_id ON supply_requests(ward_id);
CREATE INDEX idx_supply_requests_status ON supply_requests(status);


DROP TABLE work_schedules, patients, patient_relatives, district_doctors, appointments, outpatient_patients, inpatient_patients, medications, prescribed_medications, supplies, suppliers, supply_requests;