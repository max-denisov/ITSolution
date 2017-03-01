#ifndef USERFORM_H
#define USERFORM_H

#include <QMainWindow>

namespace Ui {
class UserForm;
}

class UserForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserForm(QWidget *parent = 0);
    ~UserForm();

private:
    Ui::UserForm *ui;
};

#endif // USERFORM_H
