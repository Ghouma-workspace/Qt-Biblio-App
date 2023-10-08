#include "registryabonne.h"
#include "ui_registryabonne.h"
#include "abonne.h"
#include "mainwindow.h"

extern Utilisateur user_courant;
extern Abonne abonne_courant;
extern Biblio Bibliotheque;

RegistryAbonne::RegistryAbonne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistryAbonne)
{
    ui->setupUi(this);
}

RegistryAbonne::~RegistryAbonne()
{
    delete ui;
}

void RegistryAbonne::on_pushButton_ch_clicked()
{
    QDate cd = QDate::currentDate();

    ui->lineEdit_date_ab->setText(cd.toString());

    if (ui->radioButton->isChecked())
        ui->label_date_exp->setText(cd.addMonths(1).toString());
    else if (ui->radioButton_2->isChecked())
        ui->label_date_exp->setText(cd.addMonths(6).toString());
    else if (ui->radioButton_3->isChecked())
        ui->label_date_exp->setText(cd.addYears(1).toString());
}

void RegistryAbonne::on_pushButton_pay_clicked()
{
    QString num_tel,adresse,adresse_mail,date_abonnement,date_expiration;
    num_tel = ui->lineEdit_num_tel->text();
    adresse = ui->lineEdit_ad->text();
    adresse_mail = ui->lineEdit_adm->text();
    date_abonnement = ui->lineEdit_date_ab->text();
    date_expiration = ui->label_date_exp->text();
    Abonne *A = new Abonne(user_courant.get_nom(),user_courant.get_prenom(),user_courant.get_age(),user_courant.get_username(),user_courant.get_password(),num_tel,adresse,adresse_mail,date_abonnement,date_expiration,"0");
    Bibliotheque.connOpenDoc();
    QSqlQuery qry;
    qry.prepare("Delete from Utilisateur where username='"+user_courant.get_username()+"'");
    if (qry.exec())
       QMessageBox::critical(this,tr("Abonnement"),tr("Abonnement Effectué"));
    Bibliotheque.Open_User();
    Bibliotheque.ajout_user(A);
    Bibliotheque.Close_User();
    Bibliotheque.connCloseDoc();
}
