#include "abonnedialog.h"
#include "ui_abonnedialog.h"
#include "abonne.h"
#include "mainwindow.h"
#include <qDebug>
#include "empreint.h"

extern Utilisateur user_courant;
extern Abonne abonne_courant;
extern Biblio Bibliotheque;

AbonneDialog::AbonneDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbonneDialog)
{
    ui->setupUi(this);
}

AbonneDialog::~AbonneDialog()
{
    delete ui;
}

void AbonneDialog::on_pushButton_2_clicked()
{
    ui->lineEdit_poids_3->setVisible(false);
    ui->lineEdit_prix_3->setVisible(false);
    ui->lineEdit_taille_3->setVisible(false);
    ui->lineEdit_nb_pages_3->setVisible(false);
    ui->lineEdit_duree_3->setVisible(false);
    ui->label_006->setVisible(false);
    ui->label_007->setVisible(false);
    ui->label_008->setVisible(false);
    ui->label_009->setVisible(false);
    ui->label_010->setVisible(false);

    ui->lineEdit_n->setText(abonne_courant.get_nom());
    ui->lineEdit_p->setText(abonne_courant.get_prenom());
    ui->lineEdit_a->setText(abonne_courant.get_age());
    ui->label_u->setText(abonne_courant.get_username());
    ui->lineEdit_pa->setText(abonne_courant.get_password());
    ui->lineEdit_nt->setText(abonne_courant.get_num_tel());
    ui->lineEdit_ad->setText(abonne_courant.get_adresse());
    ui->lineEdit_adm->setText(abonne_courant.get_adresse_mail());
    ui->label_ab->setText(abonne_courant.get_date_abonnement());
    ui->label_ex->setText(abonne_courant.get_date_expiration());
    ui->label_pen->setText(abonne_courant.get_nb_pinalite());
}

void AbonneDialog::on_pushButton_clicked()
{
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_User();
    abonne_courant.set_nom(ui->lineEdit_n->text());
    abonne_courant.set_prenom(ui->lineEdit_p->text());
    abonne_courant.set_age(ui->lineEdit_a->text());
    abonne_courant.set_password(ui->lineEdit_pa->text());
    abonne_courant.set_num_tel(ui->lineEdit_nt->text());
    abonne_courant.set_adresse(ui->lineEdit_ad->text());
    abonne_courant.set_adresse_mail(ui->lineEdit_adm->text());
    for (int i=0;i<Bibliotheque.liste_users.size();++i)
        if (Bibliotheque.liste_users[i]->get_username()==abonne_courant.get_username()){
            Bibliotheque.liste_users[i]->set_nom(abonne_courant.get_nom());
            Bibliotheque.liste_users[i]->set_prenom(abonne_courant.get_prenom());
            Bibliotheque.liste_users[i]->set_age(abonne_courant.get_age());
            Bibliotheque.liste_users[i]->set_username(abonne_courant.get_username());
            Bibliotheque.liste_users[i]->set_password(abonne_courant.get_password());
            Bibliotheque.liste_users[i]->set_date_abonnement(abonne_courant.get_date_abonnement());
            Bibliotheque.liste_users[i]->set_date_expiration(abonne_courant.get_date_expiration());
            Bibliotheque.liste_users[i]->set_nb_pinalite(abonne_courant.get_nb_pinalite());
            Bibliotheque.liste_users[i]->set_adresse(abonne_courant.get_adresse());
            Bibliotheque.liste_users[i]->set_adresse_mail(abonne_courant.get_adresse_mail());
            Bibliotheque.liste_users[i]->set_num_tel(abonne_courant.get_num_tel());
        }
    Bibliotheque.Close_User();
    Bibliotheque.connCloseDoc();
    on_pushButton_2_clicked();
}

void AbonneDialog::on_pushButton_3_clicked()
{
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    Bibliotheque.Open_User();
    Bibliotheque.Open_requete();
    Document D = Bibliotheque.chercher_doc(ui->lineEdit_id->text());
    if (D.get_identifiant()!=" "){
        Empreint E(abonne_courant,D);
        Bibliotheque.ajout_requete(E);
        Bibliotheque.Close_requete();
        Bibliotheque.Close_User();
        Bibliotheque.Close_Doc();
        Bibliotheque.connCloseDoc();
    }
    else{
        //warning
    }
}

void AbonneDialog::on_pushButton_4_clicked()
{
    QDate a = QDate::currentDate();
    QTime b = QTime::currentTime();
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    Bibliotheque.Open_User();
    Bibliotheque.Open_Empreint();
    QString identifiant;
    bool t=true;
    identifiant = ui->lineEdit_id->text();
    for (int i=0;i<Bibliotheque.liste_emprunt.size();++i){
        if ((Bibliotheque.liste_emprunt[i].get_doc_empreinte().get_identifiant()==identifiant)&&(Bibliotheque.liste_emprunt[i].get_empreinteur().get_username()==abonne_courant.get_username())&&(Bibliotheque.liste_emprunt[i].get_date_retour()=="")){
            Bibliotheque.liste_emprunt[i].set_date_retour(a.toString()+" "+b.toString());
            t=false;
        }
    }
    if (t)
        qDebug() << "ERROOOOOOOOOOR";
    Bibliotheque.Close_Empreint();
    Bibliotheque.Close_User();
    Bibliotheque.Close_Doc();
    Bibliotheque.connCloseDoc();
}

void AbonneDialog::on_pushButton_24_clicked()
{
    QString type;
    if (ui->radioButton_livre_3->isChecked())
        type = "Livre";
    else if (ui->radioButton_CD_3->isChecked())
        type = "CD";
    else if (ui->radioButton_PDF_3->isChecked())
        type = "PDF";

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQueryModel *model2 = new QSqlQueryModel();
    Bibliotheque.connOpenDoc();
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    QSqlQuery *kry = new QSqlQuery(Bibliotheque.my_doc);
    if ((ui->checkBox_titre_3->isChecked())&&(!ui->checkBox_auteur_3->isChecked())){
        kry->prepare("select titre from Document where type='"+type+"'");
        kry->exec();
        model2->setQuery(*kry);
        ui->comboBox_titre_3->setModel(model2);
        ui->comboBox_auteur_3->clear();
    }
    else if ((!ui->checkBox_titre_3->isChecked())&&(ui->checkBox_auteur_3->isChecked())){
        qry->prepare("select auteur from Document where type='"+type+"'");
        qry->exec();
        model1->setQuery(*qry);
        ui->comboBox_auteur_3->setModel(model1);
    }
    Bibliotheque.connCloseDoc();
}

void AbonneDialog::on_pushButton_23_clicked()
{
    ui->lineEdit_poids_3->setVisible(false);
    ui->lineEdit_prix_3->setVisible(false);
    ui->lineEdit_taille_3->setVisible(false);
    ui->lineEdit_nb_pages_3->setVisible(false);
    ui->lineEdit_duree_3->setVisible(false);
    ui->label_006->setVisible(false);
    ui->label_007->setVisible(false);
    ui->label_008->setVisible(false);
    ui->label_009->setVisible(false);
    ui->label_010->setVisible(false);

    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    Document doc = Bibliotheque.chercher_doc(ui->lineEdit_id->text());
    if (doc.get_identifiant()!=" "){
    ui->lineEdit_Titre_3->setText(doc.get_titre());
    ui->lineEdit_Auteur_3->setText(doc.get_auteur());
    ui->lineEdit_date_sortie_3->setText(doc.get_date_sortie());
    ui->lineEdit_nb_empre_3->setText(doc.get_nb_empreint());
    ui->lineEdit_nb_exem_3->setText(doc.get_nb_exemplaire());
    ui->lineEdit_pos_3->setText(doc.get_pos_rayon());

    if (doc.get_type()=="Livre")
        ui->radioButton_livre_3->isChecked();
    else if (doc.get_type()=="CD")
        ui->radioButton_CD_3->isChecked();
    else if (doc.get_type()=="PDF")
        ui->radioButton_PDF_3->isChecked();
    }
    Bibliotheque.connCloseDoc();
    Bibliotheque.Close_Doc();
}

void AbonneDialog::on_comboBox_titre_3_currentIndexChanged(const QString &arg1)
{
    QString type;
    if (ui->radioButton_livre_3->isChecked())
        type = "Livre";
    else if (ui->radioButton_CD_3->isChecked())
        type = "CD";
    else if (ui->radioButton_PDF_3->isChecked())
        type = "PDF";


    QString titre = ui->comboBox_titre_3->currentText();
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    for (int i=0; i<Bibliotheque.liste_docs.size(); ++i) {
        if (Bibliotheque.liste_docs[i]->get_titre()==titre){
            ui->lineEdit_Titre_3->setText(Bibliotheque.liste_docs[i]->get_titre());
            ui->lineEdit_Auteur_3->setText(Bibliotheque.liste_docs[i]->get_auteur());
            ui->lineEdit_date_sortie_3->setText(Bibliotheque.liste_docs[i]->get_date_sortie());
            ui->lineEdit_id->setText(Bibliotheque.liste_docs[i]->get_identifiant());
            ui->lineEdit_nb_empre_3->setText(Bibliotheque.liste_docs[i]->get_nb_empreint());
            ui->lineEdit_nb_exem_3->setText(Bibliotheque.liste_docs[i]->get_nb_exemplaire());
            ui->lineEdit_pos_3->setText(Bibliotheque.liste_docs[i]->get_pos_rayon());
            if (type=="Livre"){
                ui->lineEdit_poids_3->setVisible(true);
                ui->lineEdit_prix_3->setVisible(true);
                ui->lineEdit_nb_pages_3->setVisible(true);
                ui->label_006->setVisible(false);
                ui->label_007->setVisible(false);
                ui->label_008->setVisible(true);
                ui->label_009->setVisible(true);
                ui->label_010->setVisible(true);
                ui->lineEdit_nb_pages_3->setText(Bibliotheque.liste_docs[i]->get_nb_pages());
                ui->lineEdit_poids_3->setText(Bibliotheque.liste_docs[i]->get_poids());
                ui->lineEdit_prix_3->setText(Bibliotheque.liste_docs[i]->get_prix());
                ui->lineEdit_taille_3->setVisible(false);
                ui->lineEdit_duree_3->setVisible(false);
            }
            else if (type=="CD"){
                ui->lineEdit_taille_3->setVisible(true);
                ui->lineEdit_duree_3->setVisible(true);
                ui->lineEdit_poids_3->setVisible(false);
                ui->lineEdit_prix_3->setVisible(false);
                ui->lineEdit_nb_pages_3->setVisible(false);
                ui->label_006->setVisible(true);
                ui->label_007->setVisible(true);
                ui->label_008->setVisible(false);
                ui->label_009->setVisible(false);
                ui->label_010->setVisible(false);
                ui->lineEdit_taille_3->setText(Bibliotheque.liste_docs[i]->get_taille());
                ui->lineEdit_duree_3->setText(Bibliotheque.liste_docs[i]->get_duree());
           }
           else if (type=="PDF"){
                ui->lineEdit_taille_3->setVisible(true);
                ui->lineEdit_duree_3->setVisible(false);
                ui->lineEdit_poids_3->setVisible(false);
                ui->lineEdit_prix_3->setVisible(false);
                ui->lineEdit_nb_pages_3->setVisible(true);
                ui->label_006->setVisible(false);
                ui->label_007->setVisible(false);
                ui->label_008->setVisible(true);
                ui->label_009->setVisible(true);
                ui->label_010->setVisible(false);
                ui->lineEdit_taille_3->setText(Bibliotheque.liste_docs[i]->get_taille());
                ui->lineEdit_nb_pages_3->setText(Bibliotheque.liste_docs[i]->get_nb_pages());
            }
        }
    }

    Bibliotheque.Close_Doc();
    Bibliotheque.connCloseDoc();

}

void AbonneDialog::on_comboBox_auteur_3_currentIndexChanged(const QString &arg1)
{
    QSqlQueryModel *model = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();

    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select titre from Document where auteur='"+ui->comboBox_auteur_3->currentText()+"'");
    qry->exec();

    model->setQuery(*qry);
    ui->comboBox_titre_3->setModel(model);

    Bibliotheque.connCloseDoc();
}

void AbonneDialog::on_pushButton_31_clicked()
{
    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQueryModel *model2 = new QSqlQueryModel();

    Bibliotheque.connOpenDoc();
    qDebug() << (abonne_courant.get_username());
    QSqlQuery *qry = new QSqlQuery(Bibliotheque.my_doc);
    QSqlQuery *kry = new QSqlQuery(Bibliotheque.my_doc);
    qry->prepare("select identifiant from Empreint where username='"+abonne_courant.get_username()+"' and date_remise_effective=''");
    qry->exec();
    kry->prepare("select identifiant from Empreint where username='"+abonne_courant.get_username()+"' and date_remise_effective<>''");
    kry->exec();

    model1->setQuery(*qry);
    model2->setQuery(*kry);
    ui->comboBox_non_re->setModel(model1);
    ui->comboBox_re->setModel(model2);

    Bibliotheque.connCloseDoc();
}

void AbonneDialog::on_comboBox_re_currentIndexChanged(const QString &arg1)
{
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    Bibliotheque.Open_User();
    Bibliotheque.Open_Empreint();
    QString identifiant;
    identifiant = ui->comboBox_re->currentText();
    for (int i=0;i<Bibliotheque.liste_emprunt.size();++i)
        if (Bibliotheque.liste_emprunt[i].get_doc_empreinte().get_identifiant()==identifiant){
            ui->lineEdit_d1->setText(Bibliotheque.liste_emprunt[i].get_date_empreint());
            ui->lineEdit_r1_3->setText(Bibliotheque.liste_emprunt[i].get_date_retour());
        }
    Bibliotheque.Close_Empreint();
    Bibliotheque.Close_User();
    Bibliotheque.Close_Doc();
    Bibliotheque.connCloseDoc();

}

void AbonneDialog::on_comboBox_non_re_currentIndexChanged(const QString &arg1)
{
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_Doc();
    Bibliotheque.Open_User();
    Bibliotheque.Open_Empreint();
    QString identifiant;
    identifiant = ui->comboBox_non_re->currentText();
    for (int i=0;i<Bibliotheque.liste_emprunt.size();++i)
        if (Bibliotheque.liste_emprunt[i].get_doc_empreinte().get_identifiant()==identifiant){
            ui->lineEdit_d2->setText(Bibliotheque.liste_emprunt[i].get_date_empreint());
            ui->lineEdit_r1_4->setText(Bibliotheque.liste_emprunt[i].get_date_remise());
        }
    Bibliotheque.Close_Empreint();
    Bibliotheque.Close_User();
    Bibliotheque.Close_Doc();
    Bibliotheque.connCloseDoc();
}
