#ifndef EMPREINT_H
#define EMPREINT_H
#include <QString>
#include <QDateTime>
#include<ctime>
#include "abonne.h"
#include "document.h"

class Empreint
{
    QString date_empreint;
    QString date_retour;
    QString date_remise;
    Abonne empreinteur;
    Document doc_empreinte;
public:
    Empreint(QString,QString,QString,Abonne,Document);
    Empreint();
    Empreint(Abonne,Document);
    QString get_date_empreint();
    QString get_date_retour();
    QString get_date_remise();
    Document get_doc_empreinte(){return doc_empreinte;}
    Abonne get_empreinteur(){return empreinteur;}
    void set_date_empreint(QString);
    void set_date_retour(QString);
    void set_date_remise(QString);
    void set_empreinteur(Abonne A){empreinteur=A;}
    void set_doc_empreinte(Document D){doc_empreinte=D;}
    QString convert(std::tm*);
};

#endif // EMPREINT_H
