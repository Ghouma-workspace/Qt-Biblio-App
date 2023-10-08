#include "antiquite.h"

Antiquite::Antiquite() : Document(){}

Antiquite::Antiquite(QString a, QString b, QString c, QString d, QString e, QString f, QString g, QString h, QString s , QString  r , QString w , QString y) : Document(a,b,c,d,e,f,g,h)
{
    matiere = s;
     age = r;
     valeur = w ;
     origine = y ;
}


Antiquite::Antiquite(const Antiquite &C)
{
     matiere = C.matiere ;
     age = C.age ;
     valeur = C.valeur ;
     origine = C.origine ; }
