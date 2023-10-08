#include <iostream>
#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED

using namespace std;

class Admin : public Utilisateur {
    QString CIN;
    QString salaire;
    QString etat_civil;
    QString num_tel;
    QString poste;
    QString adresse;
    QString adresse_mail;
public :
    Admin(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString);
    //void Update_Utilisateur(Biblio);
    QString get_CIN(){return CIN;}
    QString get_salaire(){return salaire;}
    QString get_etat_civil(){return etat_civil;}
    QString get_num_tel(){return num_tel;}
    QString get_poste(){return poste;}
    QString get_adresse(){return adresse;}
    QString get_adresse_mail(){return adresse_mail;}
    void set_adresse(QString a){adresse=a;}
    void set_adresse_mail(QString a){adresse_mail=a;}
    void set_num_tel(QString a){num_tel=a;}
    void set_poste(QString a){poste=a;}
    void set_CIN(QString a){CIN=a;}
    void set_salaire(QString a){salaire=a;}
    void set_etat_civil(QString a){etat_civil=a;}
    //Document chercher_document();
    //void empreinter(Document);
    Admin &operator=(Admin);
};


#endif // ADMIN_H_INCLUDED
