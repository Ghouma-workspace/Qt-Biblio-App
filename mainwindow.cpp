#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "biblio.h"

Utilisateur user_courant;
Abonne abonne_courant;
Biblio Bibliotheque;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("./image.png");
    ui->label_picture->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));

    if (!connOpen())
        ui->label_db->setText("Data Base Inexistante");
    else
        ui->label_db->setText("Connected...");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
        QString username = ui->lineEdit_username->text();
        QString password = ui->lineEdit_2_password->text();
        QString role = "hh";


        if (ui->radioadmin->isChecked()){
            role = "Admin";
        }
        if (ui->radiouser->isChecked()){
            role = "Abonne";
        }
        if (ui->radioButton_invite->isChecked()){
            role = "Invite";
        }


        if (!connOpen()){
            qDebug()<<"Data Base Inexistante";
            return;
        }

        connOpen();

        Bibliotheque.Open_User();
        if (role=="Admin"){
            Admin S = Bibliotheque.chercher_admin(username);
            if (S.get_password()==password){
                Bibliotheque.Close_User();
                connClose();
                adminDialog = new AdminDialog(this);
                adminDialog->show();
            }
            else
                ui->label_db->setText("Username and Password are not correct");
        }
        else if (role=="Invite"){
            user_courant=Bibliotheque.chercher_user(username);
            if (user_courant.get_password()==password){
                Bibliotheque.Close_User();
                connClose();
                this->hide();
                userDialog = new UserDialog(this);
                userDialog->show();
            }
            else
                ui->label_db->setText("Username and Password are not correct");
        }
        else if (role=="Abonne"){
            abonne_courant=Bibliotheque.chercher_abonne(username);
            if (abonne_courant.get_password()==password){
                Bibliotheque.Close_User();
                connClose();
                this->hide();
                abonneDialog = new AbonneDialog(this);
                abonneDialog->show();
            }
            else
                ui->label_db->setText("Username and Password are not correct");
        }
        Bibliotheque.liste_users.clear();
        connClose();
}

void MainWindow::on_pushButton_Registry_clicked()
{
    variableregister = new Registry(this);
    variableregister->show();
}
