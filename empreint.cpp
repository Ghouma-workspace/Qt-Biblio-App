#include "empreint.h"
#include <QString>
#include <QDate>
#include <QTime>


Empreint::Empreint(){
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    QDate cd2 = cd.addMonths(1);
    date_empreint = cd.toString()+" "+ct.toString();
    date_retour="";
    date_remise= cd2.toString()+" "+ct.toString();
}

Empreint::Empreint(Abonne B, Document D){
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    QDate cd2 = cd.addMonths(1);
    date_empreint = cd.toString()+" "+ct.toString();
    date_retour="";
    date_remise= cd2.toString()+" "+ct.toString();
    empreinteur = B;
    doc_empreinte = D;
}

Empreint::Empreint(QString c,QString v,QString b,Abonne A,Document D){
    date_empreint = c;
    date_retour = v;
    date_remise = b;
    empreinteur = A;
    doc_empreinte = D;
}

QString Empreint::get_date_empreint(){return date_empreint;}
QString Empreint::get_date_retour(){return date_retour;}
QString Empreint::get_date_remise(){return date_remise;}

void Empreint::set_date_empreint(QString date){date_empreint=date;}
void Empreint::set_date_retour(QString Date){date_retour=Date;}
void Empreint::set_date_remise(QString date){date_remise=date;}

QString Empreint::convert(std::tm* c){
    char mbstr[100];
    std::strftime(mbstr, sizeof(mbstr), "%A %c", c);
    QString strName = QString(mbstr);
    return strName;
}
