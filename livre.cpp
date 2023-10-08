#include "livre.h"

Livre::Livre() : Document(){
    nb_pages = "";
    poids = "";
    prix = "";
}

Livre::Livre(QString a, QString b, QString c, QString d, QString e, QString f, QString g, QString h, QString i, QString j, QString k) : Document(a,b,c,d,e,f,g,h){
    nb_pages = i;
    poids = j;
    prix = k;
}
