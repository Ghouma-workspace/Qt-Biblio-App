#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include <QDialog>
#include "registryabonne.h"
#include "ajoutdoc.h"

namespace Ui {
class AdminDialog;
}

class AdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDialog(QWidget *parent = 0);
    ~AdminDialog();

private slots:
    void on_tabWidget_tabCloseRequested(int index);

    void on_ajout_clicked();

    //void on_pushButton_clicked();

    //void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_Inv_clicked();

    void on_pushButton_chargeab_clicked();

    void on_pushButton_chargead_clicked();

    void on_buttonDelete_clicked();

    void on_buttonUpdate_clicked();

    void on_buttonPayer_clicked();

    //void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_ajout_clicked();

    void on_pushButton_supp_clicked();

    void on_pushButton_modif_clicked();

    void on_pushButton_clicked();

    void on_comboBox_titre_currentIndexChanged(const QString &arg1);

    void on_comboBox_auteur_currentIndexChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_pushbutton_loadreq_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::AdminDialog *ui;
    RegistryAbonne *registryabonne;
    AjoutDoc *ajoutdoc;
};

#endif // ADMINDIALOG_H
