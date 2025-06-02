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

    this->m_formType = formType;
   

    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    int countLabels = tableLabels[formType].length();
    
    int maxLabelWidth = 0;
    QFontMetrics fm(this->font());

    for (const auto& label : tableLabels[formType]) {
        QString labelText = descriptionLabels[label];
        maxLabelWidth = qMax(maxLabelWidth, fm.horizontalAdvance(labelText));
    }

    maxLabelWidth += 20; 

    for (const auto& field : tableLabels[formType]) {

        QLabel *label = new QLabel("Введите" + descriptionLabels[formType], this);

        label->setFixedWidth(maxLabelWidth);
        label->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        
        QLineEdit *lineEdit = new QLineEdit(this);
        lineEdit->setMinimumWidth(250);
        
        auto qvalidatorLabel = fieldValidators[field];
        QValidator *qLabelValidator = new QRegularExpressionValidator(qvalidatorLabel, this);
        
        m_lineEdits[field] = lineEdit;
        
        rowLayout->addWidget(label);
        rowLayout->addWidget(lineEdit);
        
        mainLayout->addLayout(rowLayout);
    }
    
    mainLayout->addStretch();
    
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

    //emit dataEntered(userData);
    close();
}