#ifndef ABONNE_H
#define ABONNE_H

#include "utilisateur.h"

class Abonne : public Utilisateur
{
    QString num_tel;
    QString adresse;
    QString adresse_mail;
    QString date_abonnement;
    QString date_expiration;
    QString nb_pinalite;
public:
    Abonne(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);
    Abonne &operator=(Abonne);
    Abonne(const Abonne&);
    Abonne();
    QString get_date_abonnement(){return date_abonnement;}
    QString get_date_expiration(){return date_expiration;}
    QString get_nb_pinalite(){return nb_pinalite;}
    QString get_num_tel(){return num_tel;}
    QString get_adresse(){return adresse;}
    QString get_adresse_mail(){return adresse_mail;}
    void set_date_abonnement(QString a){date_abonnement=a;}
    void set_date_expiration(QString a){date_expiration=a;}
    void set_nb_pinalite(QString a){nb_pinalite=a;}
    void set_adresse(QString a){adresse=a;}
    void set_adresse_mail(QString a){adresse_mail=a;}
    void set_num_tel(QString a){num_tel=a;}
};

#endif // ABONNE_H
