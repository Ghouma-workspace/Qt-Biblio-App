#include "registry.h"
#include "ui_registry.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QVector>
#include <QDebug>

extern Biblio Bibliotheque;

Registry::Registry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registry)
{
    ui->setupUi(this);
    MainWindow conn;
    if (!conn.connOpen())
        ui->label->setText("Data Base Inexistante");
    else
        ui->label->setText("Connected...");
}

Registry::~Registry()
{
    delete ui;
}

void Registry::on_pushButton_clicked()
{
    QString nom,prenom,username,password,age,role;
    nom = ui->lineEdit_nom->text();
    prenom = ui->lineEdit_prenom->text();
    age = ui->lineEdit_age->text();
    username = ui->lineEdit_u->text();
    password = ui->lineEdit_pw->text();
    role = "Invite";
    Utilisateur U(nom,prenom,age,username,password);

    Bibliotheque.connOpenDoc();

    Bibliotheque.Open_User();

    Bibliotheque.ajout_user(&U);

    Bibliotheque.Close_User();

    Bibliotheque.connCloseDoc();

    ui->lineEdit_nom->setText("");
    ui->lineEdit_prenom->setText("");
    ui->lineEdit_age->setText("");
    ui->lineEdit_u->setText("");
    ui->lineEdit_pw->setText("");

}
