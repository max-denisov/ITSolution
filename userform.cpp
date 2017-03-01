#include "userform.h"
#include "ui_userform.h"

UserForm::UserForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserForm)
{
    ui->setupUi(this);
}

UserForm::~UserForm()
{
    delete ui;
}
