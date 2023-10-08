#include "cd.h"

CD::CD() : Document(){
    duree = "";
    taille = "";
}

CD::CD(QString a, QString b, QString c, QString d, QString e, QString f, QString g, QString h, QString i, QString j) : Document(a,b,c,d,e,f,g,h){
    duree = i;
    taille = j;
}
