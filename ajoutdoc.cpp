#include "ajoutdoc.h"
#include "ui_ajoutdoc.h"
#include "livre.h"
#include "cd.h"
#include "document.h"
#include "biblio.h"
#include "pdf.h"

extern Biblio Bibliotheque;

AjoutDoc::AjoutDoc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutDoc)
{
    ui->setupUi(this);
}

AjoutDoc::~AjoutDoc()
{
    delete ui;
}

void AjoutDoc::on_pushButton_clicked()
{
    QString titre,auteur,type,date_sortie,nb_empreint,identifiant,nb_exemplaire,pos_rayon,duree,taille,nb_pages,poids,prix;
    identifiant = ui->lineEdit_id->text();
    titre = ui->lineEdit_tit->text();
    date_sortie = ui->lineEdit_date_sortie->text();
    nb_empreint = "0";
    auteur = ui->lineEdit_auteur->text();
    nb_exemplaire = ui->lineEdit_exemp->text();
    pos_rayon = ui->lineEdit_pos->text();
    if (ui->radioButton_livre->isChecked()){
        type = "Livre";
        nb_pages = ui->lineEdit_page->text();
        poids = ui->lineEdit_poids->text();
        prix = ui->lineEdit_prix->text();
        Livre L(identifiant,titre,auteur,type,date_sortie,nb_empreint,nb_exemplaire,pos_rayon,nb_pages,poids,prix);
        Bibliotheque.connOpenDoc();
        Bibliotheque.Open_Doc();
        Bibliotheque.ajout_doc(&L);
        Bibliotheque.Close_Doc();
        Bibliotheque.connCloseDoc();
    }
    else if (ui->radioButton_cd->isChecked()){
        type = "CD";
        taille = ui->lineEdit_taille->text();
        duree = ui->lineEdit_duree->text();
        CD L(identifiant,titre,auteur,type,date_sortie,nb_empreint,nb_exemplaire,pos_rayon,duree,taille);
        Bibliotheque.connOpenDoc();
        Bibliotheque.Open_Doc();
        Bibliotheque.ajout_doc(&L);
        Bibliotheque.Close_Doc();
        Bibliotheque.connCloseDoc();
    }/*
    else if (ui->radioButton->isChecked()){
        type="PDF";
        taille = ui->lineEdit_taille->text();
        nb_pages = ui->lineEdit_page->text();
        PDF L(identifiant,titre,auteur,type,date_sortie,nb_empreint,nb_exemplaire,pos_rayon,nb_pages,taille);
        Bibliotheque.connOpenDoc();
        Bibliotheque.Open_Doc();
        Bibliotheque.ajout_doc(&L);
        Bibliotheque.Close_Doc();
        Bibliotheque.connCloseDoc();
    }*/

    ui->lineEdit_id->clear();
    ui->lineEdit_tit->clear();
    ui->lineEdit_date_sortie->clear();
    ui->lineEdit_auteur->clear();
    ui->lineEdit_exemp->clear();
    ui->lineEdit_pos->clear();
    ui->lineEdit_page->clear();
    ui->lineEdit_poids->clear();
    ui->lineEdit_prix->clear();
    ui->lineEdit_taille->clear();
    ui->lineEdit_duree->clear();
}
