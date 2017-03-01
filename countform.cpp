#include "countform.h"
#include "ui_countform.h"

CountForm::CountForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CountForm)
{
    ui->setupUi(this);
}

CountForm::~CountForm()
{
    delete ui;
}
