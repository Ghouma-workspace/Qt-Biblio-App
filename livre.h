#ifndef LIVRE_H
#define LIVRE_H

#include <QString>
#include "document.h"

class Livre : public Document
{
    QString nb_pages;
    QString poids;
    QString prix;
public:
    Livre();
    Livre(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString);
    QString get_nb_pages(){return nb_pages;}
    QString get_poids(){return poids;}
    QString get_prix(){return prix;}
    void set_poids(QString a){poids = a;}
    void set_prix(QString a){prix = a;}
    void set_nb_pages(QString a){nb_pages = a;}
};

#endif // LIVRE_H
