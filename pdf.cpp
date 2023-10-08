#include "pdf.h"

PDF::PDF()
{}
PDF::~PDF()
{}

PDF:: PDF( QString t , QString a, QString g , QString ds , QString ne , QString i , QString nbe , QString pr , QString k , QString n ):Document( t ,  a ,  g ,  ds ,  ne ,  i ,  nbe , pr)
   { taille= n ;
    nb_pages =  k;
}
PDF::PDF(const PDF&B)
{
     taille= B.taille ;
     nb_pages = B.nb_pages;}
