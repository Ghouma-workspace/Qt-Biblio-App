#ifndef CD_H
#define CD_H

#include "document.h"

class CD : public Document
{
    QString duree;
    QString taille;
public:
    CD();
    CD(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString);
    QString get_duree(){return duree;}
    QString get_taille(){return taille;}
    void set_taille(QString a){taille = a;}
    void set_duree(QString a){duree = a;}
};

#endif // CD_H
