#ifndef REGISTRY_H
#define REGISTRY_H

#include <QDialog>

namespace Ui {
class Registry;
}

class Registry : public QDialog
{
    Q_OBJECT

public:
    explicit Registry(QWidget *parent = 0);
    ~Registry();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Registry *ui;
};

#endif // REGISTRY_H
