#include "formcomplant.h"
#include "ui_formcomplant.h"

FormComplant::FormComplant(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FormComplant)
{
    ui->setupUi(this);
}

FormComplant::FormComplant(ElementType formType, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FormComplant)
{
    ui->setupUi(this);
    delete this->layout();

    this->m_formType = formType;
   

    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    QStringList labelsWithoutId = tableLabels[formType];

    labelsWithoutId.removeFirst();

    int countLabels = labelsWithoutId.length();
    
    int maxLabelWidth = 0;
    QFontMetrics fm(this->font());

    for (const auto& label : labelsWithoutId) {
        QString labelText = descriptionLabels[label];
        maxLabelWidth = qMax(maxLabelWidth, fm.horizontalAdvance(labelText));
    }

    maxLabelWidth += 20; 

    for (const auto& field : labelsWithoutId) {

        QLabel *label = new QLabel("Введите " + descriptionLabels[field], this);

        label->setFixedWidth(maxLabelWidth);
        label->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        
        QLineEdit *lineEdit = new QLineEdit(this);
        lineEdit->setMinimumWidth(250);
        
        auto qvalidatorLabel = fieldValidators[field];
        const QValidator *qLabelValidator = new QRegularExpressionValidator(qvalidatorLabel, this);

        lineEdit->setValidator(qLabelValidator);
        
        m_lineEdits[field] = lineEdit;
        m_labels[field] = label;
        
        mainLayout->addWidget(label);
        mainLayout->addWidget(lineEdit);
    }
    
    mainLayout->addStretch();

    mainLayout->addWidget(ui->buttonBox);
    
    ui->buttonBox->setStandardButtons(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &FormComplant::accept);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &FormComplant::reject);
    
    this->setLayout(mainLayout);
    
    this->adjustSize();
    this->setMinimumWidth(400);
}

FormComplant::~FormComplant()
{
    delete ui;
}

void FormComplant::on_buttonBox_accepted()
{
    QStringList userData;

    emit dataEntered(userData);
    close();
}