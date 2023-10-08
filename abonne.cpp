#include "abonne.h"
#include <iostream>

using namespace std;

Abonne::Abonne(QString a,QString b,QString c,QString d,QString e,QString f,QString g,QString h,QString i,QString j,QString k) : Utilisateur(a,b,c,d,e)
{
    num_tel = f;
    adresse = g;
    adresse_mail = h;
    date_abonnement = i;
    date_expiration = j;
    nb_pinalite = k;
    role = "Abonne";
}

Abonne::Abonne(const Abonne &A){
    nom = A.nom;
    prenom = A.prenom;
    username = A.username;
    password = A.password;
    age = A.age;
    role = "Abonne";
    num_tel = A.num_tel;
    adresse = A.adresse;
    adresse_mail = A.adresse_mail;
    date_abonnement = A.date_abonnement;
    date_expiration = A.date_expiration;
    nb_pinalite = A.nb_pinalite;
}

Abonne &Abonne::operator=(Abonne A){
    nom = A.nom;
    prenom = A.prenom;
    username = A.username;
    password = A.password;
    age = A.age;
    role = "Abonne";
    num_tel = A.num_tel;
    adresse = A.adresse;
    adresse_mail = A.adresse_mail;
    date_abonnement = A.date_abonnement;
    date_expiration = A.date_expiration;
    nb_pinalite = A.nb_pinalite;
    return *this;
}

Abonne::Abonne(){
    num_tel = "";
    adresse = "";
    adresse_mail = "";
    date_abonnement = "";
    date_expiration = "";
    nb_pinalite = "";
    role = "Abonne";
}
/*
void Abonne::update_abonne(Abonne A){
    nom = A.nom;
    prenom = A.prenom;
    username = A.username;
    password = A.password;
    age = A.age;
    num_tel = A.num_tel;
    adresse = A.adresse;
    adresse_mail = A.adresse_mail;
    date_abonnement = A.date_abonnement;
    date_expiration = A.date_expiration;
    nb_pinalite = A.nb_pinalite;
}
*/
