#ifndef COUNTFORM_H
#define COUNTFORM_H

#include <QWidget>

namespace Ui {
class CountForm;
}

class CountForm : public QWidget
{
    Q_OBJECT

public:
    explicit CountForm(QWidget *parent = 0);
    ~CountForm();

private:
    Ui::CountForm *ui;
};

#endif // COUNTFORM_H
