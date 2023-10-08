#include "document.h"
Document::Document(QString i , QString t , QString a , QString g , QString ds , QString ne , QString nbe , QString pr)
{
    identifiant = i ;
    auteur = a ;
    titre =  t ;
    type = g ;
    date_sortie = ds ;
    nb_empreint = ne ;
    nb_exemplaire = nbe ;
    pos_rayon = pr ;
}
Document::Document(const Document&D)
{
    auteur= D.auteur;
    titre = D.titre;
    type = D.type;
    date_sortie= D.date_sortie;
    nb_empreint= D.nb_empreint;
    nb_exemplaire= D.nb_exemplaire;
    pos_rayon= D.pos_rayon;
    identifiant= D.identifiant;
}
Document::Document(){
    auteur = "" ;
    titre = "" ;
    type = "" ;
    date_sortie = "" ;
    nb_empreint = "" ;
    nb_exemplaire = "" ;
    identifiant= "" ;
    pos_rayon= "" ;
}
Document::~Document(){}

bool Document::operator ==(Document D){
    return (D.identifiant==identifiant);
}
