#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QMainWindow>
#include "userdialog.h"
#include "admindialog.h"
#include "abonnedialog.h"
#include "utilisateur.h"
#include "registry.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "biblio.h"
#include "admin.h"
#include <QVector>
#include "abonne.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public :
    QSqlDatabase my_data;

    void connClose(){
        my_data.close();
        my_data.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen(){
        my_data = QSqlDatabase::addDatabase("QSQLITE");
        my_data.setDatabaseName("./UserBase.db");

        if (!my_data.open()){
            qDebug()<<("Data Base Inexistante");
            return false;
        }
        else{
            qDebug()<<("Connected...");
            return true;
        }
    }



public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Biblio B;

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_Registry_clicked();

private:
    Ui::MainWindow *ui;
    UserDialog *userDialog;
    AdminDialog *adminDialog;
    AbonneDialog *abonneDialog;
    Registry *variableregister;
    //QSqlDatabase my_data;
};

#endif // MAINWINDOW_H
