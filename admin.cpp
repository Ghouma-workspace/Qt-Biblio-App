#include <iostream>
#include "Utilisateur.h"
#include "admin.h"

using namespace std;

Admin::Admin(QString a, QString b, QString c, QString d, QString e, QString g, QString h, QString i, QString j, QString k, QString l, QString m) : Utilisateur(a,b,c,d,e) {
    CIN=g;
    salaire=h;
    etat_civil=i;
    num_tel=j;
    poste=k;
    adresse=l;
    adresse_mail=m;
    role = "Admin";
}


Admin & Admin::operator=(Admin U){
    nom = U.nom;
    prenom = U.prenom;
    username = U.username;
    password = U.password;
    age = U.age;
    role = "Admin";
    CIN=U.CIN;
    salaire=U.salaire;
    etat_civil=U.etat_civil;
    num_tel=U.num_tel;
    poste=U.poste;
    adresse=U.adresse;
    adresse_mail=U.adresse_mail;
    return *this;
}
/*
void Admin::Update_Utilisateur(Biblio B){
    
}*/
