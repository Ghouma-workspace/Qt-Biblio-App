#include "admindialog.h"
#include "ui_admindialog.h"
#include "newongle.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "document.h"
#include "livre.h"
#include "cd.h"
#include <qDebug>
#include "ajoutdoc.h"

extern Utilisateur user_courant;
extern Abonne abonne_courant;
extern Biblio Bibliotheque;

AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    QPixmap pix("./admin.jpg");
    ui->imageeeee->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));
    MainWindow conn;
    if (!conn.connOpen())
        ui->label_conn->setText("Data Base Inexistante");
    else
        ui->label_conn->setText("Connected...");
}

AdminDialog::~AdminDialog()
{
    delete ui;
}

void AdminDialog::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void AdminDialog::on_ajout_clicked()
{
    ui->tabWidget->addTab(new Newongle(), QString("Ongle %0").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}

void AdminDialog::on_pushButton_3_clicked()
{
    Bibliotheque.connOpenDoc();
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select * from Utilisateur ");
    qry->exec();

    model->setQuery(*qry);
    ui->tableView->setModel(model);

    Bibliotheque.connCloseDoc();
    qDebug()<<(model->rowCount());
}



void AdminDialog::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString username = ui->comboBox->currentText();
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_User();
    abonne_courant = Bibliotheque.chercher_abonne(username);
    user_courant = Bibliotheque.chercher_user(username);
    Admin a = Bibliotheque.chercher_admin(username);
    if (user_courant.get_username()==username){
           ui->text_nom->setText(user_courant.get_nom());
           ui->text_prenom->setText(user_courant.get_prenom());
           ui->text_username->setText(user_courant.get_username());
           ui->text_pw->setText(user_courant.get_password());
           ui->text_age->setText(user_courant.get_age());
           ui->radioinvite->setChecked(true);
    }
    else if (abonne_courant.get_username()==username){
           ui->text_nom->setText(abonne_courant.get_nom());
           ui->text_prenom->setText(abonne_courant.get_prenom());
           ui->text_username->setText(abonne_courant.get_username());
           ui->text_pw->setText(abonne_courant.get_password());
           ui->text_age->setText(abonne_courant.get_age());
           ui->radioabonne->setChecked(true);
    }
    else if (a.get_username()==username){
        ui->text_nom->setText(a.get_nom());
        ui->text_prenom->setText(a.get_prenom());
        ui->text_username->setText(a.get_username());
        ui->text_pw->setText(a.get_password());
        ui->text_age->setText(a.get_age());
        ui->radioadmin->setChecked(true);
    }
    Bibliotheque.Close_User();
    Bibliotheque.connCloseDoc();
    user_courant.set_username(ui->text_username->text());
}

void AdminDialog::on_tableView_activated(const QModelIndex &index)
{
    QString valeur = ui->tableView->model()->data(index).toString();
    Bibliotheque.connOpenDoc();
    QSqlQuery qry;
    qry.prepare("select * from Utilisateur where identifant='"+valeur+"' or username='"+valeur+"' or password='"+valeur+"' or age='"+valeur+"'");
    if (qry.exec()){
       while(qry.next()){
           ui->text_nom->setText(qry.value(0).toString());
           ui->text_prenom->setText(qry.value(1).toString());
           ui->text_pw->setText(qry.value(2).toString());
           ui->text_age->setText(qry.value(3).toString());
           if (qry.value(4).toString()=="Admin")
               ui->radioadmin->setChecked(true);
           else if (qry.value(4).toString()=="User")
               ui->radioinvite->setChecked(true);
       }
       Bibliotheque.connCloseDoc();
    }
    else
       QMessageBox::critical(this,tr("ERROR"),qry.lastError().text());
}

void AdminDialog::on_pushButton_Inv_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select username from Utilisateur where role='Invite'");
    qry->exec();

    model->setQuery(*qry);
    ui->comboBox->setModel(model);

    Bibliotheque.connCloseDoc();
    ui->label_out->setText("Nombre des Invités : "+(model->rowCount()));
}

void AdminDialog::on_pushButton_chargeab_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select username from Utilisateur where role='Abonne'");
    qry->exec();

    model->setQuery(*qry);
    ui->comboBox->setModel(model);

    Bibliotheque.connCloseDoc();
    ui->label_out->setText("Nombre des abonnés : "+model->rowCount());
}

void AdminDialog::on_pushButton_chargead_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select username from Utilisateur where role='Admin'");
    qry->exec();

    model->setQuery(*qry);
    ui->comboBox->setModel(model);

    Bibliotheque.connCloseDoc();
    ui->label_out->setText("Nombre des Admins : "+model->rowCount());
}

void AdminDialog::on_buttonDelete_clicked()
{
    QString username;
    username = ui->text_username->text();

    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_User();
    for (int i=0;i<Bibliotheque.liste_users.size();++i)
        if (Bibliotheque.liste_users[i]->get_username()==username)
            Bibliotheque.liste_users.erase(Bibliotheque.liste_users.begin()+i);
    Bibliotheque.Close_User();
    Bibliotheque.connCloseDoc();
    on_pushButton_Inv_clicked();
}

void AdminDialog::on_buttonUpdate_clicked()
{
    QString nom,prenom,username,password,age,role;
    nom = ui->text_nom->text();
    prenom = ui->text_prenom->text();
    username = ui->text_username->text();
    password = ui->text_pw->text();
    age = ui->text_age->text();

    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_User();
    for (int i=0;i<Bibliotheque.liste_users.size();++i)
        if (Bibliotheque.liste_users[i]->get_username()==user_courant.get_username()){
            Bibliotheque.liste_users[i]->update_utilisateur(nom,prenom,age,password);
            Bibliotheque.liste_users[i]->set_username(username);
            role = Bibliotheque.liste_users[i]->get_role();
        }
    Bibliotheque.Close_User();
    Bibliotheque.connCloseDoc();
    if (role == "Admin")
        on_pushButton_chargead_clicked();
    else if (role == "Abonne")
        on_pushButton_chargeab_clicked();
    else if (role == "Invite")
        on_pushButton_Inv_clicked();
}

void AdminDialog::on_buttonPayer_clicked()
{
    QString username;
    username = ui->text_username->text();
    if (ui->radioinvite->isChecked()){
        Bibliotheque.connOpenDoc();
        Bibliotheque.Open_User();
        user_courant=Bibliotheque.chercher_user(username);
        Bibliotheque.Close_User();
        Bibliotheque.connCloseDoc();
        registryabonne = new RegistryAbonne(this);
        registryabonne->show();
    }
}

void AdminDialog::on_pushButton_4_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    ui->lineEdit_poids->setVisible(false);
    ui->lineEdit_prix->setVisible(false);
    ui->lineEdit_taille->setVisible(false);
    ui->lineEdit_nb_pages->setVisible(false);
    ui->lineEdit_duree->setVisible(false);
    ui->lineEdit_origine->setVisible(false);
    ui->lineEdit_age->setVisible(false);
    ui->lineEdit_valeur->setVisible(false);
    ui->lineEdit_matiere->setVisible(false);
    ui->label_15->setVisible(false);
    ui->label_16->setVisible(false);
    ui->label_18->setVisible(false);
    ui->label_19->setVisible(false);
    ui->label_20->setVisible(false);
    ui->label_matiere->setVisible(false);
    ui->label_valeur->setVisible(false);
    ui->label_age->setVisible(false);
    ui->label_origine->setVisible(false);

    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select * from Document ");
    qry->exec();

    model->setQuery(*qry);
    ui->tableView_2->setModel(model);

    Bibliotheque.connCloseDoc();
}

void AdminDialog::on_pushButton_ajout_clicked()
{
    ajoutdoc = new AjoutDoc(this);
    ajoutdoc->show();
}

void AdminDialog::on_pushButton_supp_clicked()
{
    QString identifiant;
    identifiant = ui->lineEdit_id->text();

    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    for (int i=0;i<Bibliotheque.liste_docs.size();++i)
        if (Bibliotheque.liste_docs[i]->get_identifiant()==identifiant)
            Bibliotheque.liste_docs.erase(Bibliotheque.liste_docs.begin()+i);
    Bibliotheque.Close_Doc();
    Bibliotheque.connCloseDoc();
}

void AdminDialog::on_pushButton_modif_clicked()
{
    QString type,nb_empreint,identifiant,nb_exemplaire,pos_rayon,duree,taille,nb_pages,poids,prix;
    identifiant = ui->lineEdit_id->text();
    nb_empreint = ui->lineEdit_nb_empre->text();
    nb_empreint = ui->lineEdit_nb_empre->text();
    nb_exemplaire = ui->lineEdit_nb_exem->text();
    pos_rayon = ui->lineEdit_pos->text();
    duree = ui->lineEdit_duree->text();
    taille = ui->lineEdit_taille->text();
    prix = ui->lineEdit_prix->text();
    poids = ui->lineEdit_poids->text();
    nb_pages = ui->lineEdit_nb_pages->text();
    if (ui->radioButton_livre->isChecked())
        type = "Livre";
    else if (ui->radioButton_CD->isChecked())
        type = "CD";

    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    for (int i=0;i<Bibliotheque.liste_docs.size();++i){
        if (Bibliotheque.liste_docs[i]->get_identifiant()==identifiant){
            if ((Bibliotheque.liste_docs[i]->get_type()=="Livre")&&(type=="Livre")){
                Bibliotheque.liste_docs[i]->set_nb_empreint(nb_empreint);
                Bibliotheque.liste_docs[i]->set_nb_exemplaire(nb_exemplaire);
                Bibliotheque.liste_docs[i]->set_pos_rayon(pos_rayon);
                Bibliotheque.liste_docs[i]->set_poids(poids);
                Bibliotheque.liste_docs[i]->set_prix(prix);
                Bibliotheque.liste_docs[i]->set_nb_pages(nb_pages);
            }
            else if ((Bibliotheque.liste_docs[i]->get_type()=="Livre")&&(type=="Livre")){
                Bibliotheque.liste_docs[i]->set_nb_empreint(nb_empreint);
                Bibliotheque.liste_docs[i]->set_nb_exemplaire(nb_exemplaire);
                Bibliotheque.liste_docs[i]->set_pos_rayon(pos_rayon);
                Bibliotheque.liste_docs[i]->set_duree(duree);
                Bibliotheque.liste_docs[i]->set_taille(taille);
            }
        }
        else
            qDebug() << ("Document inexistant");
    }

}

void AdminDialog::on_pushButton_clicked()
{
    QString type;
    if (ui->radioButton_livre->isChecked())
        type = "Livre";
    else if (ui->radioButton_CD->isChecked())
        type = "CD";
    else if (ui->radioButton_PDF->isChecked())
        type = "PDF";
    else if (ui->radioButton_Ant->isChecked())
        type = "Antiquite";

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQueryModel *model2 = new QSqlQueryModel();
    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    QSqlQuery *kry = new QSqlQuery(Bibliotheque.my_doc);
    if ((ui->checkBox_titre->isChecked())&&(!ui->checkBox_auteur->isChecked())){
        kry->prepare("select titre from Document where type='"+type+"'");
        kry->exec();
        model2->setQuery(*kry);
        ui->comboBox_titre->setModel(model2);
        ui->comboBox_auteur->clear();
    }
    else if ((!ui->checkBox_titre->isChecked())&&(ui->checkBox_auteur->isChecked())){
        qry->prepare("select auteur from Document where type='"+type+"'");
        qry->exec();
        model1->setQuery(*qry);
        ui->comboBox_auteur->setModel(model1);
    }
    Bibliotheque.connCloseDoc();
}

void AdminDialog::on_comboBox_titre_currentIndexChanged(const QString &arg1)
{
    QString type;
    if (ui->radioButton_livre->isChecked())
        type = "Livre";
    else if (ui->radioButton_CD->isChecked())
        type = "CD";
    else if (ui->radioButton_Ant->isChecked())
        type = "Antiquite";
    else if (ui->radioButton_PDF->isChecked())
        type = "PDF";


    QString titre = ui->comboBox_titre->currentText();
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    for (int i=0; i<Bibliotheque.liste_docs.size(); ++i) {
        if (Bibliotheque.liste_docs[i]->get_titre()==titre){
            ui->lineEdit_Titre->setText(Bibliotheque.liste_docs[i]->get_titre());
            ui->lineEdit_Auteur->setText(Bibliotheque.liste_docs[i]->get_auteur());
            ui->lineEdit_date_sortie->setText(Bibliotheque.liste_docs[i]->get_date_sortie());
            ui->lineEdit_id->setText(Bibliotheque.liste_docs[i]->get_identifiant());
            ui->lineEdit_nb_empre->setText(Bibliotheque.liste_docs[i]->get_nb_empreint());
            ui->lineEdit_nb_exem->setText(Bibliotheque.liste_docs[i]->get_nb_exemplaire());
            ui->lineEdit_pos->setText(Bibliotheque.liste_docs[i]->get_pos_rayon());
            if (type=="Livre"){
                ui->lineEdit_poids->setVisible(true);
                ui->lineEdit_prix->setVisible(true);
                ui->lineEdit_nb_pages->setVisible(true);
                ui->lineEdit_matiere->setVisible(false);
                ui->lineEdit_age->setVisible(false);
                ui->lineEdit_origine->setVisible(false);
                ui->lineEdit_valeur->setVisible(false);
                ui->label_15->setVisible(true);
                ui->label_16->setVisible(true);
                ui->label_18->setVisible(true);
                ui->label_19->setVisible(false);
                ui->label_20->setVisible(false);
                ui->label_origine->setVisible(false);
                ui->label_matiere->setVisible(false);
                ui->label_age->setVisible(false);
                ui->label_valeur->setVisible(false);
                ui->lineEdit_nb_pages->setText(Bibliotheque.liste_docs[i]->get_nb_pages());
                ui->lineEdit_poids->setText(Bibliotheque.liste_docs[i]->get_poids());
                ui->lineEdit_prix->setText(Bibliotheque.liste_docs[i]->get_prix());
                ui->lineEdit_taille->setVisible(false);
                ui->lineEdit_duree->setVisible(false);
            }
            else if (type=="CD"){
                ui->lineEdit_taille->setVisible(true);
                ui->lineEdit_duree->setVisible(true);
                ui->lineEdit_poids->setVisible(false);
                ui->lineEdit_prix->setVisible(false);
                ui->lineEdit_nb_pages->setVisible(false);
                ui->label_15->setVisible(false);
                ui->label_16->setVisible(false);
                ui->label_18->setVisible(false);
                ui->label_19->setVisible(true);
                ui->label_20->setVisible(true);
                ui->lineEdit_taille->setText(Bibliotheque.liste_docs[i]->get_taille());
                ui->lineEdit_duree->setText(Bibliotheque.liste_docs[i]->get_duree());
                ui->label_origine->setVisible(false);
                ui->label_matiere->setVisible(false);
                ui->label_age->setVisible(false);
                ui->label_valeur->setVisible(false);
                ui->lineEdit_matiere->setVisible(false);
                ui->lineEdit_age->setVisible(false);
                ui->lineEdit_origine->setVisible(false);
                ui->lineEdit_valeur->setVisible(false);
           }
           else if (type=="PDF"){
                ui->lineEdit_taille->setVisible(true);
                ui->lineEdit_duree->setVisible(false);
                ui->lineEdit_poids->setVisible(false);
                ui->lineEdit_prix->setVisible(false);
                ui->lineEdit_nb_pages->setVisible(true);
                ui->label_15->setVisible(false);
                ui->label_16->setVisible(false);
                ui->label_18->setVisible(true);
                ui->label_19->setVisible(true);
                ui->label_20->setVisible(false);
                ui->lineEdit_taille->setText(Bibliotheque.liste_docs[i]->get_taille());
                ui->lineEdit_nb_pages->setText(Bibliotheque.liste_docs[i]->get_nb_pages());
                ui->label_origine->setVisible(false);
                ui->label_matiere->setVisible(false);
                ui->label_age->setVisible(false);
                ui->label_valeur->setVisible(false);
                ui->lineEdit_matiere->setVisible(false);
                ui->lineEdit_age->setVisible(false);
                ui->lineEdit_origine->setVisible(false);
                ui->lineEdit_valeur->setVisible(false);
            }
            else if (type=="Antique"){
                ui->lineEdit_taille->setVisible(false);
                ui->lineEdit_duree->setVisible(false);
                ui->lineEdit_poids->setVisible(false);
                ui->lineEdit_prix->setVisible(false);
                ui->lineEdit_nb_pages->setVisible(false);
                ui->label_15->setVisible(false);
                ui->label_16->setVisible(false);
                ui->label_18->setVisible(false);
                ui->label_19->setVisible(false);
                ui->label_20->setVisible(false);
                ui->lineEdit_origine->setText(Bibliotheque.liste_docs[i]->get_origine());
                ui->lineEdit_valeur->setText(Bibliotheque.liste_docs[i]->get_valeur());
                ui->lineEdit_matiere->setText(Bibliotheque.liste_docs[i]->get_matiere());
                ui->lineEdit_age->setText(Bibliotheque.liste_docs[i]->get_age());
                ui->label_origine->setVisible(true);
                ui->label_matiere->setVisible(true);
                ui->label_age->setVisible(true);
                ui->label_valeur->setVisible(true);
                ui->lineEdit_matiere->setVisible(true);
                ui->lineEdit_age->setVisible(true);
                ui->lineEdit_origine->setVisible(true);
                ui->lineEdit_valeur->setVisible(true);
            }
        }
    }

    Bibliotheque.Close_Doc();
    Bibliotheque.connCloseDoc();


}

void AdminDialog::on_comboBox_auteur_currentIndexChanged(const QString &arg1)
{
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();

    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select titre from Document where auteur='"+ui->comboBox_auteur->currentText()+"'");
    qry->exec();

    model->setQuery(*qry);
    ui->comboBox_titre->setModel(model);

    Bibliotheque.connCloseDoc();
}

void AdminDialog::on_pushButton_2_clicked()
{
    ui->lineEdit_poids->setVisible(false);
    ui->lineEdit_prix->setVisible(false);
    ui->lineEdit_taille->setVisible(false);
    ui->lineEdit_nb_pages->setVisible(false);
    ui->lineEdit_duree->setVisible(false);
    ui->lineEdit_origine->setVisible(false);
    ui->lineEdit_age->setVisible(false);
    ui->lineEdit_valeur->setVisible(false);
    ui->lineEdit_matiere->setVisible(false);
    ui->label_15->setVisible(false);
    ui->label_16->setVisible(false);
    ui->label_18->setVisible(false);
    ui->label_19->setVisible(false);
    ui->label_20->setVisible(false);
    ui->label_matiere->setVisible(false);
    ui->label_valeur->setVisible(false);
    ui->label_age->setVisible(false);
    ui->label_origine->setVisible(false);
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    Document doc = Bibliotheque.chercher_doc(ui->lineEdit_id->text());
    if (doc.get_identifiant()!=" "){
    ui->lineEdit_Titre->setText(doc.get_titre());
    ui->lineEdit_Auteur->setText(doc.get_auteur());
    ui->lineEdit_date_sortie->setText(doc.get_date_sortie());
    ui->lineEdit_nb_empre->setText(doc.get_nb_empreint());
    ui->lineEdit_nb_exem->setText(doc.get_nb_exemplaire());
    ui->lineEdit_pos->setText(doc.get_pos_rayon());

    if (doc.get_type()=="Livre")
        ui->radioButton_livre->isChecked();
    else if (doc.get_type()=="CD")
        ui->radioButton_CD->isChecked();
    else if (doc.get_type()=="Antiquite")
        ui->radioButton_Ant->isChecked();
    else if (doc.get_type()=="PDF")
        ui->radioButton_PDF->isChecked();
    }
    Bibliotheque.Close_Doc();
    Bibliotheque.connCloseDoc();
}

void AdminDialog::on_pushbutton_loadreq_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select * from Requete ");
    qry->exec();

    model->setQuery(*qry);
    ui->tableView_3->setModel(model);

    Bibliotheque.connCloseDoc();
}

void AdminDialog::on_pushButton_5_clicked()
{
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_User();
    Bibliotheque.Open_Doc();
    Bibliotheque.Open_Empreint();
    Bibliotheque.Open_requete();
    QString username,identifiant;
    username = ui->lineEdit_r1->text();
    identifiant = ui->lineEdit_r2->text();
    if (Bibliotheque.chercher_r(username,identifiant)==-1)
        qDebug() << "Erreeeeeeeeeeur";
    else{
        Bibliotheque.ajout_empreint(Bibliotheque.liste_requete[Bibliotheque.chercher_r(username,identifiant)]);
        /*for (int i=0;Bibliotheque.liste_docs.size();++i)
            if ((*Bibliotheque.liste_docs[i])==Bibliotheque.liste_requete[Bibliotheque.chercher_r(username,identifiant)].get_doc_empreinte()){
                QString cd = QString::number(Bibliotheque.liste_docs[i]->get_nb_empreint().toInt()+1);
                Bibliotheque.liste_docs[i]->set_nb_empreint(cd);
            }*/
    }
    Bibliotheque.supprimer_req(username,identifiant);
    Bibliotheque.Close_requete();
    Bibliotheque.Close_Empreint();
    Bibliotheque.Close_Doc();
    Bibliotheque.Close_User();
    Bibliotheque.connCloseDoc();
}

void AdminDialog::on_pushButton_6_clicked()
{
    QString username,identifiant;
    username = ui->lineEdit_r1->text();
    identifiant = ui->lineEdit_r2->text();
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_User();
    Bibliotheque.Open_Doc();
    Bibliotheque.Open_requete();
    Bibliotheque.supprimer_req(username,identifiant);
    Bibliotheque.Close_Doc();
    Bibliotheque.Close_User();
    Bibliotheque.Close_requete();
    Bibliotheque.connCloseDoc();
}

void AdminDialog::on_pushButton_8_clicked()
{
    QString identifiant;
    identifiant = ui->lineEdit_recherche->text();

    Bibliotheque.connOpenDoc();
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select * from Empreint where identifiant='"+identifiant+"'");
    if(!qry->exec())
        QMessageBox::critical(this,"ERROR","ERROR");

    model->setQuery(*qry);
    ui->tableView_4->setModel(model);

    Bibliotheque.connCloseDoc();
    qDebug()<<(model->rowCount());

}

void AdminDialog::on_pushButton_7_clicked()
{
    ui->lineEdit_recherche->clear();
    Bibliotheque.connOpenDoc();
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select * from Empreint ");
    qry->exec();

    model->setQuery(*qry);
    ui->tableView_4->setModel(model);

    Bibliotheque.connCloseDoc();
    qDebug()<<(model->rowCount());
}
