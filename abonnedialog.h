#ifndef ABONNEDIALOG_H
#define ABONNEDIALOG_H

#include <QDialog>

namespace Ui {
class AbonneDialog;
}

class AbonneDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AbonneDialog(QWidget *parent = 0);
    ~AbonneDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_23_clicked();

    void on_comboBox_titre_3_currentIndexChanged(const QString &arg1);

    void on_comboBox_auteur_3_currentIndexChanged(const QString &arg1);

    void on_pushButton_31_clicked();

    void on_comboBox_re_currentIndexChanged(const QString &arg1);

    void on_comboBox_non_re_currentIndexChanged(const QString &arg1);

private:
    Ui::AbonneDialog *ui;
};

#endif // ABONNEDIALOG_H
