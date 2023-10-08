#include <vector>
#include "utilisateur.h"
#include "mainwindow.h"
#include "abonne.h"
#include "admin.h"
#include "document.h"
#include <QtSql>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include "livre.h"
#include "cd.h"
#include "empreint.h"

#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

using namespace std;

class Biblio
{
    QString nom ;
    int date_etablisement ;
public :
    vector<Utilisateur*> liste_users;
    vector<Document*> liste_docs ;
    vector<Empreint> liste_emprunt ;
    vector<Empreint> liste_requete;
    QSqlDatabase my_doc;
    Biblio();
    void ajout_doc(Document*);
    Document chercher_doc(QString);
    void ajout_user(Utilisateur*);
    Utilisateur chercher_user(QString);
    Abonne chercher_abonne(QString);
    Admin chercher_admin(QString);
    void ajout_empreint(Empreint);
    void ajout_requete(Empreint);
        //void supp_emprunt();
        //Document livre_plus_emprunte();
    int chercher_r(QString,QString);
    void connCloseDoc();
    void connOpenDoc();
    void Open_Doc();
    void Close_Doc();
    void Open_User();
    void Close_User();
    void Open_Empreint();
    void Close_Empreint();
    void Open_requete();
    void Close_requete();
    Document chercher_doc_auteur(QString);
    Document chercher_doc_titre(QString);
    void supprimer_req(QString,QString);
};


#endif // BIBLIO_H_INCLUDED
