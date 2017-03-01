#include "createform.h"
#include "ui_createform.h"

CreateForm::CreateForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateForm)
{
    ui->setupUi(this);
}

CreateForm::~CreateForm()
{
    delete ui;
}
