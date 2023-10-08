#include <iostream>
#include "utilisateur.h"

using namespace std;

Utilisateur::Utilisateur(){
    nom = "";
    prenom = "";
    username = "";
    password = "";
    age = "";
    role = "Invite";
}

Utilisateur::Utilisateur(QString a, QString b, QString c, QString d, QString e){
        nom = a;
        prenom = b;
        age = c;
        username = d;
        password = e;
        role = "Invite";
}

Utilisateur::Utilisateur(const Utilisateur& U){
    nom = U.nom;
    prenom = U.prenom;
    username = U.username;
    password = U.password;
    age = U.age;
    role = U.role;
}

bool Utilisateur::operator==(Utilisateur U){
    if (username==U.username){
        return true;
    }
    else
        return false;
}

bool Utilisateur::operator!=(Utilisateur U){
    if (username!=U.username)
        return true;
    else
        return false;
}

Utilisateur & Utilisateur::operator=(Utilisateur U){
    nom = U.nom;
    prenom = U.prenom;
    username = U.username;
    password = U.password;
    age = U.age;
    role = "Invite";
    return *this;
}

void Utilisateur::update_utilisateur(QString a, QString b, QString c, QString d){
    nom = a;
    prenom = b;
    age = c;
    password = d;
}

void Utilisateur::set_date_abonnement(QString){}
void Utilisateur::set_date_expiration(QString){}
void Utilisateur::set_nb_pinalite(QString){}
void Utilisateur::set_num_tel(QString){}
void Utilisateur::set_adresse(QString){}
void Utilisateur::set_adresse_mail(QString){}
void Utilisateur::set_poste(QString){}
void Utilisateur::set_CIN(QString){}
void Utilisateur::set_salaire(QString){}
void Utilisateur::set_etat_civil(QString){}
