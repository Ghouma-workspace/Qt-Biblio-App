#ifndef REGISTRYABONNE_H
#define REGISTRYABONNE_H

#include <QDialog>

namespace Ui {
class RegistryAbonne;
}

class RegistryAbonne : public QDialog
{
    Q_OBJECT

public:
    explicit RegistryAbonne(QWidget *parent = 0);
    ~RegistryAbonne();

private slots:
    void on_pushButton_ch_clicked();

    void on_pushButton_pay_clicked();

private:
    Ui::RegistryAbonne *ui;
};

#endif // REGISTRYABONNE_H
