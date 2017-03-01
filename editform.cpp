#include "editform.h"
#include "ui_editform.h"

EditForm::EditForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditForm)
{
    ui->setupUi(this);
}

EditForm::~EditForm()
{
    delete ui;
}
