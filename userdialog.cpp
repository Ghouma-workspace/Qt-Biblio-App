#include "userdialog.h"
#include "ui_userdialog.h"
#include <QPixmap>
#include "mainwindow.h"
//#include "mainwindow.cpp"
#include "utilisateur.h"

extern Utilisateur user_courant;
extern Abonne abonne_courant;
extern Biblio Bibliotheque;

UserDialog::UserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDialog)
{
    ui->setupUi(this);
}

UserDialog::~UserDialog()
{
    delete ui;
}


void UserDialog::on_pushButton_2_clicked()
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

    ui->lineEdit_n->setText(user_courant.get_nom());
    ui->lineEdit_p->setText(user_courant.get_prenom());
    ui->lineEdit_a->setText(user_courant.get_age());
    ui->label_u->setText(user_courant.get_username());
    ui->lineEdit_pa->setText(user_courant.get_password());
}

void UserDialog::on_pushButton_clicked()
{
    Bibliotheque.connOpenDoc();
    Bibliotheque.Open_User();
    user_courant.set_nom(ui->lineEdit_n->text());
    user_courant.set_prenom(ui->lineEdit_p->text());
    user_courant.set_age(ui->lineEdit_a->text());
    user_courant.set_password(ui->lineEdit_pa->text());
    for (int i=0;i<Bibliotheque.liste_users.size();++i)
        if (Bibliotheque.liste_users[i]->get_username()==user_courant.get_username())
            Bibliotheque.liste_users[i]->update_utilisateur(user_courant.get_nom(),user_courant.get_prenom(),user_courant.get_age(),user_courant.get_password());
    Bibliotheque.Close_User();
    Bibliotheque.connCloseDoc();
}

void UserDialog::on_pushButton_24_clicked()
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

void UserDialog::on_pushButton_23_clicked()
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



void UserDialog::on_comboBox_titre_3_currentIndexChanged(const QString &arg1)
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

void UserDialog::on_comboBox_auteur_3_currentIndexChanged(const QString &arg1)
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
