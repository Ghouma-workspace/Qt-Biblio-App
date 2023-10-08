#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <QString>

class Document
{
protected :
        QString titre;
        QString auteur;
        QString type;
        QString date_sortie;
        QString nb_empreint;
        QString identifiant;
        QString nb_exemplaire;
        QString pos_rayon;
public :
        Document();
        Document(QString, QString, QString, QString, QString, QString, QString, QString);
        Document(const Document&);
        ~Document();
        QString get_type(){return type;}
        QString get_identifiant(){return identifiant;}
        QString get_auteur(){return auteur;}
        QString get_date_sortie(){return date_sortie;}
        QString get_nb_empreint(){return nb_empreint;}
        QString get_nb_exemplaire(){return nb_exemplaire;}
        QString get_pos_rayon(){return pos_rayon;}
        QString get_titre(){return titre;}
        void set_nb_empreint(QString a){nb_empreint=a;}
        void set_pos_rayon(QString a){pos_rayon=a;}
        void set_nb_exemplaire(QString a){nb_exemplaire=a;}
        virtual QString get_nb_pages(){return "";}
        virtual QString get_poids(){return "";}
        virtual QString get_prix(){return "";}
        virtual QString get_duree(){return "";}
        virtual QString get_taille(){return "";}
        virtual QString get_age(){return "";}
        virtual void set_age(QString){}
        virtual QString get_valeur(){return "";}
        virtual void set_valeur(QString){}
        virtual QString get_origine(){return "";}
        virtual QString get_matiere(){return "";}
        virtual void set_matiere(QString){}
        virtual void set_origine(QString){}
        virtual void set_poids(QString){}
        virtual void set_prix(QString){}
        virtual void set_nb_pages(QString){}
        virtual void set_taille(QString){}
        virtual void set_duree(QString){}
        bool operator==(Document);
};

#endif // DOC_H
