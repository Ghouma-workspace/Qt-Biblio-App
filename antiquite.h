#ifndef ANTIQUITE_H
#define ANTIQUITE_H

#include "document.h"

class Antiquite : public Document
{
    QString matiere;
    QString age;
    QString valeur ;
    QString origine ;
public:
    Antiquite();
    Antiquite(const Antiquite &C);
    Antiquite(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString , QString , QString);
    QString get_matiere(){return matiere;}
    void set_matiere(QString j){matiere = j ;}

    QString get_age()
    {return age;}
    void set_age(QString s)
    {age = s ; }
    QString get_valeur()
    {return valeur;}
    void set_valeur(QString v)
    {valeur = v ; }
    QString get_origine()
    {return origine;}
    void set_origine(QString f)
    { origine = f ;}
};

#endif // ANTIQUITE_H
