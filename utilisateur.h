#include <iostream>
#include <QString>
#include "abonne.h"

using namespace std;
#ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED

class Utilisateur {
protected :
    QString nom;
    QString prenom;
    QString username;
    QString password;
    QString age;
    QString role;
public :
    Utilisateur();
    Utilisateur(QString, QString, QString, QString, QString);
    bool operator==(Utilisateur);
    //friend ostream& operator<<(ostream &out, Utilisateur U){out << U.nom <<" ";out<<U.prenom<<" ";out<<U.username<<" ";out<<U.password<<endl;return out;}
    bool operator!=(Utilisateur);
    QString get_username(){return username;}
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    QString get_password(){return password;}
    QString get_role(){return role;}
    QString get_age(){return age;}
    virtual QString get_CIN(){return "";}
    virtual QString get_salaire(){return "";}
    virtual QString get_etat_civil(){return "";}
    virtual QString get_num_tel(){return "";}
    virtual QString get_poste(){return "";}
    virtual QString get_adresse(){return "";}
    virtual QString get_adresse_mail(){return "";}
    virtual QString get_date_abonnement(){return "";}
    virtual QString get_date_expiration(){return "";}
    virtual QString get_nb_pinalite(){return "";}
    void set_username(QString s){username = s;}
    void set_nom(QString s){nom = s;}
    void set_prenom(QString s){prenom = s;}
    void set_password(QString s){password = s;}
    void set_role(QString s){role = s;}
    void set_age(QString s){age = s;}
    void update_utilisateur(QString, QString, QString, QString);
    void update_utilisateur(QString);
    virtual void set_date_abonnement(QString a);
    virtual void set_date_expiration(QString a);
    virtual void set_nb_pinalite(QString a);
    virtual void set_adresse(QString a);
    virtual void set_adresse_mail(QString a);
    virtual void set_num_tel(QString a);
    virtual void set_poste(QString a);
    virtual void set_CIN(QString a);
    virtual void set_salaire(QString a);
    virtual void set_etat_civil(QString a);
    Utilisateur(const Utilisateur&);
    Utilisateur &operator=(Utilisateur);
    //virtual void update_abonne(Abonne){}

};


#endif // UTILISATEUR_H_INCLUDED
