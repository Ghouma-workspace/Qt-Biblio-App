#include <iostream>
#include "biblio.h"
#include "utilisateur.h"
#include <QVector>
#include "mainwindow.h"
#include <QMessageBox>
#include "admin.h"
#include <iterator>
#include "abonne.h"
#include "livre.h"
#include "cd.h"
#include "pdf.h"
#include "antiquite.h"
#include "empreint.h"

using namespace std;

void Biblio::Open_User(){
    QSqlQuery qry;
    qry.prepare("select * from Utilisateur");
    if (qry.exec()){
       while(qry.next()){
           if (qry.value(5).toString()=="Invite"){
               Utilisateur *A = new Utilisateur(qry.value(0).toString(),qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString());
               ajout_user(A);
           }
           else if (qry.value(5).toString()=="Admin"){
               Admin *A = new Admin(qry.value(0).toString(),qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),qry.value(6).toString(),qry.value(7).toString(),qry.value(8).toString(),qry.value(9).toString(),qry.value(10).toString(),qry.value(11).toString(),qry.value(12).toString());
               ajout_user(A);
          }
           else if (qry.value(5).toString()=="Abonne"){
               Abonne *A = new Abonne(qry.value(0).toString(),qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),qry.value(9).toString(),qry.value(11).toString(),qry.value(12).toString(),qry.value(13).toString(),qry.value(14).toString(),qry.value(15).toString());
               ajout_user(A);
           }
       }
    }
    else{
         //QMessageBox::critical(this,tr("ERROR"),qry.lastError().text());
    }
}

void Biblio::Close_User(){
    QSqlQuery qery,kry;

    kry.prepare("delete from Utilisateur");
    if (!kry.exec()){
        //QMessageBox::critical(this,tr("ERROR"),kry.lastError().text());
    }

    for (int i=0; i<liste_users.size(); ++i){
        if (liste_users[i]->get_role() == "Invite"){
            qery.prepare("insert into Utilisateur (nom,prenom,age,username,password,role) values('"+liste_users[i]->get_nom()+"','"+liste_users[i]->get_prenom()+"','"+liste_users[i]->get_age()+"','"+liste_users[i]->get_username()+"','"+liste_users[i]->get_password()+"','"+liste_users[i]->get_role()+"')");
            if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }
        }
        else if (liste_users[i]->get_role() == "Admin"){
            qery.prepare("insert into Utilisateur (nom,prenom,age,username,password,role,CIN,salaire,etat_civil,num_tel,poste,adresse,adresse_mail) values('"+liste_users[i]->get_nom()+"','"+liste_users[i]->get_prenom()+"','"+liste_users[i]->get_age()+"','"+liste_users[i]->get_username()+"','"+liste_users[i]->get_password()+"','"+liste_users[i]->get_role()+"','"+liste_users[i]->get_CIN()+"','"+liste_users[i]->get_salaire()+"','"+liste_users[i]->get_etat_civil()+"','"+liste_users[i]->get_num_tel()+"','"+liste_users[i]->get_poste()+"','"+liste_users[i]->get_adresse()+"','"+liste_users[i]->get_adresse_mail()+"')");
            if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }
        }
        else if (liste_users[i]->get_role() == "Abonne"){
            qery.prepare("insert into Utilisateur (nom,prenom,age,username,password,role,num_tel,adresse,adresse_mail,date_abonnement,date_expiration,nb_pinalite) values('"+liste_users[i]->get_nom()+"','"+liste_users[i]->get_prenom()+"','"+liste_users[i]->get_age()+"','"+liste_users[i]->get_username()+"','"+liste_users[i]->get_password()+"','"+liste_users[i]->get_role()+"','"+liste_users[i]->get_num_tel()+"','"+liste_users[i]->get_adresse()+"','"+liste_users[i]->get_adresse_mail()+"','"+liste_users[i]->get_date_abonnement()+"','"+liste_users[i]->get_date_expiration()+"','"+liste_users[i]->get_nb_pinalite()+"')");
            if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }
        }
    }
    //QMessageBox::critical(this,tr("Save"),tr("Saved"));
    liste_users.clear();
}

Biblio::Biblio(){
    nom = "Library";
    date_etablisement = 2022;
    liste_users = {};
}

void Biblio::ajout_user(Utilisateur *U){
    if (U->get_role()=="Invite"){
        Utilisateur C = chercher_user(U->get_username());
        if (C.get_username()==" ")
            this->liste_users.push_back(U);
        else
            qDebug()<<"Utilisateur Existant";
    }
    else if (U->get_role()=="Admin"){
        Admin C = chercher_admin(U->get_username());
        if (C.get_username()==" ")
            this->liste_users.push_back(U);
        else
            qDebug()<<"Utilisateur Existant";
    }
    else if (U->get_role()=="Abonne"){
        Abonne C = chercher_abonne(U->get_username());
        if (C.get_username()==" ")
            this->liste_users.push_back(U);
        else
            qDebug()<<"Utilisateur Existant";
    }
}

Utilisateur Biblio::chercher_user(QString ch){
    Utilisateur S(" "," "," "," "," ");
    for (int i=0; i<liste_users.size(); ++i) {
        if ((liste_users[i]->get_username()==ch)&&(liste_users[i]->get_role()=="Invite"))
            S = *(liste_users[i]);
    }
    return S;
}


Abonne Biblio::chercher_abonne(QString ch){
    Abonne S(" "," "," "," "," "," "," "," "," "," "," ");
    for (int i=0; i<liste_users.size(); ++i) {
        if ((liste_users[i]->get_username()==ch)&&(liste_users[i]->get_role()=="Abonne")){
            S.set_nom(liste_users[i]->get_nom());
            S.set_prenom(liste_users[i]->get_prenom());
            S.set_age(liste_users[i]->get_age());
            S.set_username(liste_users[i]->get_username());
            S.set_password(liste_users[i]->get_password());
            S.set_date_abonnement(liste_users[i]->get_date_abonnement());
            S.set_date_expiration(liste_users[i]->get_date_expiration());
            S.set_nb_pinalite(liste_users[i]->get_nb_pinalite());
            S.set_adresse(liste_users[i]->get_adresse());
            S.set_adresse_mail(liste_users[i]->get_adresse_mail());
            S.set_num_tel(liste_users[i]->get_num_tel());
        }
    }
    return S;
}

Admin Biblio::chercher_admin(QString ch){
    Admin S(" "," "," "," "," "," "," "," "," "," "," "," ");
    for (int i=0; i<liste_users.size(); ++i) {
        if ((liste_users[i]->get_username()==ch)&&(liste_users[i]->get_role()=="Admin")){
            S.set_nom(liste_users[i]->get_nom());
            S.set_prenom(liste_users[i]->get_prenom());
            S.set_age(liste_users[i]->get_age());
            S.set_username(liste_users[i]->get_username());
            S.set_password(liste_users[i]->get_password());
            S.set_CIN(liste_users[i]->get_CIN());
            S.set_poste(liste_users[i]->get_poste());
            S.set_salaire(liste_users[i]->get_salaire());
            S.set_etat_civil(liste_users[i]->get_etat_civil());
            S.set_adresse(liste_users[i]->get_adresse());
            S.set_adresse_mail(liste_users[i]->get_adresse_mail());
            S.set_num_tel(liste_users[i]->get_num_tel());
        }
    }
    return S;
}

void Biblio::connCloseDoc(){
    my_doc.close();
    my_doc.removeDatabase(QSqlDatabase::defaultConnection);
}

void Biblio::connOpenDoc(){
    my_doc = QSqlDatabase::addDatabase("QSQLITE");
    my_doc.setDatabaseName("./UserBase.db");

    if (!my_doc.open()){
        qDebug()<<("Data Base Inexistante");
    }
    else{
        qDebug()<<("Connected...");
    }
}

void Biblio::Open_Doc(){
    QSqlQuery qry;
    qry.prepare("select * from Document");
    if (qry.exec()){
       while(qry.next()){
           if (qry.value(3).toString()=="Livre"){
               Livre *A = new Livre(qry.value(0).toString(),qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),qry.value(5).toString(),qry.value(6).toString(),qry.value(7).toString(),qry.value(8).toString(),qry.value(9).toString(),qry.value(10).toString());
               ajout_doc(A);
           }
           else if (qry.value(3).toString()=="CD"){
               CD *A = new CD(qry.value(0).toString(),qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),qry.value(5).toString(),qry.value(6).toString(),qry.value(7).toString(),qry.value(11).toString(),qry.value(12).toString());
               ajout_doc(A);
          }
          else if (qry.value(3).toString()=="PDF"){
               PDF *A = new PDF(qry.value(0).toString(),qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),qry.value(5).toString(),qry.value(6).toString(),qry.value(7).toString(),qry.value(8).toString(),qry.value(12).toString());
               ajout_doc(A);
           }
          else if (qry.value(3).toString()=="Antiquite"){
               Antiquite *A = new Antiquite(qry.value(0).toString(),qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),qry.value(5).toString(),qry.value(6).toString(),qry.value(7).toString(),qry.value(13).toString(),qry.value(14).toString(),qry.value(15).toString(),qry.value(16).toString());
               ajout_doc(A);
           }
       }
    }/*
    else
         QMessageBox::critical(this,tr("ERROR"),qry.lastError().text());*/
}

void Biblio::Close_Doc(){
    QSqlQuery qery,kry;

    kry.prepare("delete from Document");
    if (!kry.exec()){
        //QMessageBox::critical(this,tr("ERROR"),kry.lastError().text());
    }

    for (int i=0; i<liste_docs.size(); ++i){
        if (liste_docs[i]->get_type() == "Livre"){
            qery.prepare("insert into Document (identifiant,titre,auteur,type,date_sortie,nb_empreint,nb_exemplaire,pos_rayon,nb_pages,poids,prix) values('"+liste_docs[i]->get_identifiant()+"','"+liste_docs[i]->get_titre()+"','"+liste_docs[i]->get_auteur()+"','"+liste_docs[i]->get_type()+"','"+liste_docs[i]->get_date_sortie()+"','"+liste_docs[i]->get_nb_empreint()+"','"+liste_docs[i]->get_nb_exemplaire()+"','"+liste_docs[i]->get_pos_rayon()+"','"+liste_docs[i]->get_nb_pages()+"','"+liste_docs[i]->get_poids()+"','"+liste_docs[i]->get_prix()+"')");
            if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }
        }
        else if (liste_docs[i]->get_type() == "CD"){
            qery.prepare("insert into Document (identifiant,titre,auteur,type,date_sortie,nb_empreint,nb_exemplaire,pos_rayon,duree,taille) values('"+liste_docs[i]->get_identifiant()+"','"+liste_docs[i]->get_titre()+"','"+liste_docs[i]->get_auteur()+"','"+liste_docs[i]->get_type()+"','"+liste_docs[i]->get_date_sortie()+"','"+liste_docs[i]->get_nb_empreint()+"','"+liste_docs[i]->get_nb_exemplaire()+"','"+liste_docs[i]->get_pos_rayon()+"','"+liste_docs[i]->get_duree()+"','"+liste_docs[i]->get_taille()+"')");
            if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }
        }
        else if (liste_docs[i]->get_type() == "PDF"){
            qery.prepare("insert into Document (identifiant,titre,auteur,type,date_sortie,nb_empreint,nb_exemplaire,pos_rayon,nb_pages,taille) values('"+liste_docs[i]->get_identifiant()+"','"+liste_docs[i]->get_titre()+"','"+liste_docs[i]->get_auteur()+"','"+liste_docs[i]->get_type()+"','"+liste_docs[i]->get_date_sortie()+"','"+liste_docs[i]->get_nb_empreint()+"','"+liste_docs[i]->get_nb_exemplaire()+"','"+liste_docs[i]->get_pos_rayon()+"','"+liste_docs[i]->get_nb_pages()+"','"+liste_docs[i]->get_taille()+"')");
            if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }
        else if (liste_docs[i]->get_type()== "Antique"){
            qery.prepare("insert into Document (identifiant,titre,auteur,type,date_sortie,nb_empreint,nb_exemplaire,pos_rayon,origine,age,valeur,matiere) values('"+liste_docs[i]->get_identifiant()+"','"+liste_docs[i]->get_titre()+"','"+liste_docs[i]->get_auteur()+"','"+liste_docs[i]->get_type()+"','"+liste_docs[i]->get_date_sortie()+"','"+liste_docs[i]->get_nb_empreint()+"','"+liste_docs[i]->get_nb_exemplaire()+"','"+liste_docs[i]->get_pos_rayon()+"','"+liste_docs[i]->get_origine()+"','"+liste_docs[i]->get_age()+"','"+liste_docs[i]->get_valeur()+"','"+liste_docs[i]->get_matiere()+"')");
            if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }
        }
    }
    //QMessageBox::critical(this,tr("Save"),tr("Saved"));
        }
    qDebug() << (liste_docs[liste_docs.size()-1]->get_identifiant());
    liste_docs.clear();

}

Document Biblio::chercher_doc(QString ch){
    Document S(" "," "," "," "," "," "," "," ");
    for (int i=0; i<liste_docs.size(); ++i) {
        if (liste_docs[i]->get_identifiant()==ch)
            S = *(liste_docs[i]);
    }
    return S;
}

void Biblio::ajout_doc(Document *U){
    Document C = chercher_doc(U->get_identifiant());
    if (C.get_identifiant()==" ")
        this->liste_docs.push_back(U);
    else
        qDebug()<<"Document Existant";
}

Document Biblio::chercher_doc_auteur(QString ch){
    Document S(" "," "," "," "," "," "," "," ");
    for (int i=0; i<liste_docs.size(); ++i) {
        if (liste_docs[i]->get_auteur()==ch)
            S = *(liste_docs[i]);
    }
    return S;
}

Document Biblio::chercher_doc_titre(QString ch){
    Document S(" "," "," "," "," "," "," "," ");
    for (int i=0; i<liste_docs.size(); ++i) {
        if (liste_docs[i]->get_titre()==ch)
            S = *(liste_docs[i]);
    }
    return S;
}

void Biblio::ajout_empreint(Empreint E){
    bool dispo=true;
    for (int i=0;i<liste_emprunt.size();++i)
        if ((E.get_doc_empreinte()==liste_emprunt[i].get_doc_empreinte())&&(liste_emprunt[i].get_date_retour()==""))
            dispo=false;
    if (dispo==true)
        this->liste_emprunt.push_back(E);
    else
        qDebug() << "NON DIPONIBLE";
}

void Biblio::ajout_requete(Empreint E){
    liste_requete.push_back(E);
}

void Biblio::Open_Empreint(){
    QSqlQuery qry;
    qry.prepare("select * from Empreint");
    if (qry.exec()){
       while(qry.next()){
           Empreint *A = new Empreint(qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),chercher_abonne(qry.value(0).toString()),chercher_doc(qry.value(1).toString()));
           liste_emprunt.push_back(*A);
           }

    }
    else{
       //QMessageBox::critical(this,tr("ERROR"),qry.lastError().text());
    }
}

void Biblio::Close_Empreint(){
    QSqlQuery qery,kry;

    kry.prepare("delete from Empreint");
    if (!kry.exec()){
        //QMessageBox::critical(this,tr("ERROR"),kry.lastError().text());
    }
    for (int i=0; i<liste_emprunt.size(); ++i){
        qery.prepare("insert into Empreint (username,identifiant,date_empreint,date_remise_effective,date_remise) values('"+liste_emprunt[i].get_empreinteur().get_username()+"','"+liste_emprunt[i].get_doc_empreinte().get_identifiant()+"','"+liste_emprunt[i].get_date_empreint()+"','"+liste_emprunt[i].get_date_retour()+"','"+liste_emprunt[i].get_date_remise()+"')");
        if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }

    }
    liste_emprunt.clear();
}

void Biblio::Open_requete(){
    QSqlQuery qry;
    qry.prepare("select * from Requete");
    if (qry.exec()){
       while(qry.next()){
           Empreint *A = new Empreint(qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),chercher_abonne(qry.value(0).toString()),chercher_doc(qry.value(1).toString()));
           liste_requete.push_back(*A);
           }
    }
    else{
       //QMessageBox::critical(this,tr("ERROR"),qry.lastError().text());
    }
}

void Biblio::Close_requete(){
    QSqlQuery qery,kry;

    kry.prepare("delete from Requete");
    if (!kry.exec()){
        //QMessageBox::critical(this,tr("ERROR"),kry.lastError().text());
    }
    for (int i=0; i<liste_requete.size(); ++i){
        qery.prepare("insert into Requete (username,identifiant,date_empreint,date_remise_effective,date_remise) values('"+liste_requete[i].get_empreinteur().get_username()+"','"+liste_requete[i].get_doc_empreinte().get_identifiant()+"','"+liste_requete[i].get_date_empreint()+"','"+liste_requete[i].get_date_retour()+"','"+liste_requete[i].get_date_remise()+"')");
        if (!qery.exec()){
                //QMessageBox::critical(this,tr("ERROR"),qery.lastError().text());
            }
    }
    liste_requete.clear();
}

int Biblio::chercher_r(QString ch,QString sh){
    for (int i=0; i<liste_requete.size(); ++i) {
        if ((liste_requete[i].get_doc_empreinte().get_identifiant()==sh)&&(liste_requete[i].get_empreinteur().get_username()==ch)){
            return i;
        }
    }
    return -1;
}

void Biblio::supprimer_req(QString ch,QString sh){
    for (int i=0;i<liste_requete.size();++i)
        qDebug() << (liste_requete[i].get_empreinteur().get_username());
    qDebug() << (liste_requete.size());
    for (int i=0;i<liste_requete.size();++i)
        if ((liste_requete[i].get_empreinteur().get_username()==ch)&&(liste_requete[i].get_doc_empreinte().get_identifiant()==sh))
            liste_requete.erase(liste_requete.begin()+i);
    for (int i=0;i<liste_requete.size();++i)
        qDebug() << ("liste_requete[i].get_empreinteur().get_username()");
    qDebug() << (liste_requete.size());
}
