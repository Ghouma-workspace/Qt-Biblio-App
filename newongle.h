#ifndef NEWONGLE_H
#define NEWONGLE_H

#include <QWidget>

namespace Ui {
class Newongle;
}

class Newongle : public QWidget
{
    Q_OBJECT

public:
    explicit Newongle(QWidget *parent = 0);
    ~Newongle();

private:
    Ui::Newongle *ui;
};

#endif // NEWONGLE_H
