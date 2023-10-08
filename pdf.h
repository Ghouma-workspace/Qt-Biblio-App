#ifndef PDF_H
#define PDF_H

#include <QString>
#include "document.h"

class PDF:public Document
{
        QString taille;
        QString nb_pages ;

        public :
            PDF() ;
            PDF(QString t , QString a , QString g , QString ds , QString ne , QString i , QString nbe , QString pr , QString k,  QString n ) ;
            PDF(const PDF &B);
            ~PDF() ;
            QString get_taille(){return taille;}
            void set_taille( QString k){taille = k ;}
            QString get_nb_pages(){return nb_pages;}
            void set_nb_pages( QString n){nb_pages = n ;}
    };



#endif // PDF_H
