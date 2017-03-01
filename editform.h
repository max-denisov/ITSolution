#ifndef EDITFORM_H
#define EDITFORM_H

#include <QWidget>

namespace Ui {
class EditForm;
}

class EditForm : public QWidget
{
    Q_OBJECT

public:
    explicit EditForm(QWidget *parent = 0);
    ~EditForm();

private:
    Ui::EditForm *ui;
};

#endif // EDITFORM_H
