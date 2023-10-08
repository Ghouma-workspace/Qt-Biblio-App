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
    Abonne(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);
    Abonne &operator=(Abonne);
    Abonne();
    QString get_date_abonnement(){return date_abonnement;}
    QString get_date_expiration(){return date_expiration;}
    QString get_nb_pinalite(){return nb_pinalite;}
};

#endif // ABONNE_H
