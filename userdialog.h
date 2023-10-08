#ifndef USERDIALOG_H
#define USERDIALOG_H

#include <QDialog>

namespace Ui {
class UserDialog;
}

class UserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserDialog(QWidget *parent = 0);
    ~UserDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_23_clicked();

    void on_comboBox_titre_3_currentIndexChanged(const QString &arg1);

    void on_comboBox_auteur_3_currentIndexChanged(const QString &arg1);

private:
    Ui::UserDialog *ui;
};

#endif // USERDIALOG_H
