/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *imageeeee;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *text_nom;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *text_prenom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *text_username;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *text_pw;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *text_age;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioadmin;
    QRadioButton *radioabonne;
    QRadioButton *radioinvite;
    QComboBox *comboBox;
    QPushButton *buttonPayer;
    QPushButton *buttonUpdate;
    QPushButton *buttonDelete;
    QPushButton *pushButton_Inv;
    QPushButton *pushButton_chargeab;
    QPushButton *pushButton_chargead;
    QLabel *label_out;
    QWidget *tab_4;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QTableView *tableView_2;
    QPushButton *pushButton_4;
    QWidget *tab_6;
    QPushButton *pushButton_ajout;
    QPushButton *pushButton_modif;
    QPushButton *pushButton_supp;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_Titre;
    QLineEdit *lineEdit_Auteur;
    QLineEdit *lineEdit_date_sortie;
    QLineEdit *lineEdit_nb_exem;
    QLineEdit *lineEdit_pos;
    QLineEdit *lineEdit_nb_empre;
    QLineEdit *lineEdit_poids;
    QLineEdit *lineEdit_prix;
    QLineEdit *lineEdit_nb_pages;
    QLineEdit *lineEdit_taille;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_duree;
    QLabel *label_20;
    QRadioButton *radioButton_livre;
    QRadioButton *radioButton_CD;
    QPushButton *pushButton;
    QComboBox *comboBox_titre;
    QComboBox *comboBox_auteur;
    QCheckBox *checkBox_titre;
    QCheckBox *checkBox_auteur;
    QPushButton *pushButton_2;
    QRadioButton *radioButton_PDF;
    QRadioButton *radioButton_Ant;
    QLineEdit *lineEdit_origine;
    QLineEdit *lineEdit_valeur;
    QLineEdit *lineEdit_age;
    QLineEdit *lineEdit_matiere;
    QLabel *label_origine;
    QLabel *label_valeur;
    QLabel *label_age;
    QLabel *label_matiere;
    QWidget *tab_5;
    QTableView *tableView_3;
    QPushButton *pushbutton_loadreq;
    QLineEdit *lineEdit_r1;
    QLineEdit *lineEdit_r2;
    QLabel *label_r1;
    QLabel *label_r2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *tab_7;
    QTableView *tableView_4;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_recherche;
    QPushButton *pushButton_8;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label_conn;
    QLabel *label;
    QPushButton *ajout;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName(QStringLiteral("AdminDialog"));
        AdminDialog->resize(856, 774);
        AdminDialog->setStyleSheet(QStringLiteral("background-color: rgb(53, 53, 53);"));
        layoutWidget = new QWidget(AdminDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 761, 711));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(22, 22, 22);\n"
"gridline-color: rgb(255, 255, 255);	\n"
"color: rgb(255, 255, 255);"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        imageeeee = new QLabel(tab);
        imageeeee->setObjectName(QStringLiteral("imageeeee"));
        imageeeee->setGeometry(QRect(110, 60, 491, 431));
        imageeeee->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
""));

        horizontalLayout_5->addWidget(label_6);

        text_nom = new QLineEdit(tab_2);
        text_nom->setObjectName(QStringLiteral("text_nom"));
        text_nom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        text_nom->setMaxLength(10);

        horizontalLayout_5->addWidget(text_nom);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_7->addWidget(label_7);

        text_prenom = new QLineEdit(tab_2);
        text_prenom->setObjectName(QStringLiteral("text_prenom"));
        text_prenom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        text_prenom->setMaxLength(10);

        horizontalLayout_7->addWidget(text_prenom);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_3);

        text_username = new QLineEdit(tab_2);
        text_username->setObjectName(QStringLiteral("text_username"));
        text_username->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        text_username->setMaxLength(20);

        horizontalLayout_2->addWidget(text_username);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_2);

        text_pw = new QLineEdit(tab_2);
        text_pw->setObjectName(QStringLiteral("text_pw"));
        text_pw->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        text_pw->setMaxLength(20);

        horizontalLayout_3->addWidget(text_pw);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_6->addWidget(label_5);

        text_age = new QLineEdit(tab_2);
        text_age->setObjectName(QStringLiteral("text_age"));
        text_age->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        text_age->setMaxLength(2);

        horizontalLayout_6->addWidget(text_age);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioadmin = new QRadioButton(tab_2);
        radioadmin->setObjectName(QStringLiteral("radioadmin"));
        radioadmin->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout->addWidget(radioadmin);

        radioabonne = new QRadioButton(tab_2);
        radioabonne->setObjectName(QStringLiteral("radioabonne"));
        radioabonne->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout->addWidget(radioabonne);

        radioinvite = new QRadioButton(tab_2);
        radioinvite->setObjectName(QStringLiteral("radioinvite"));
        radioinvite->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout->addWidget(radioinvite);


        verticalLayout_2->addLayout(horizontalLayout);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));

        verticalLayout_2->addWidget(comboBox);

        buttonPayer = new QPushButton(tab_2);
        buttonPayer->setObjectName(QStringLiteral("buttonPayer"));
        buttonPayer->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(buttonPayer);

        buttonUpdate = new QPushButton(tab_2);
        buttonUpdate->setObjectName(QStringLiteral("buttonUpdate"));
        buttonUpdate->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(buttonUpdate);

        buttonDelete = new QPushButton(tab_2);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));
        buttonDelete->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(buttonDelete);

        pushButton_Inv = new QPushButton(tab_2);
        pushButton_Inv->setObjectName(QStringLiteral("pushButton_Inv"));
        pushButton_Inv->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_Inv);

        pushButton_chargeab = new QPushButton(tab_2);
        pushButton_chargeab->setObjectName(QStringLiteral("pushButton_chargeab"));
        pushButton_chargeab->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_chargeab);

        pushButton_chargead = new QPushButton(tab_2);
        pushButton_chargead->setObjectName(QStringLiteral("pushButton_chargead"));
        pushButton_chargead->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_chargead);

        label_out = new QLabel(tab_2);
        label_out->setObjectName(QStringLiteral("label_out"));
        label_out->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 italic 14pt \"Nirmala UI\";"));

        verticalLayout_2->addWidget(label_out);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 30, 681, 211));
        tableView->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 250, 111, 41));
        pushButton_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        tableView_2 = new QTableView(tab_4);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 310, 681, 211));
        tableView_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 530, 111, 41));
        pushButton_4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton_ajout = new QPushButton(tab_6);
        pushButton_ajout->setObjectName(QStringLiteral("pushButton_ajout"));
        pushButton_ajout->setGeometry(QRect(520, 170, 211, 91));
        pushButton_ajout->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_modif = new QPushButton(tab_6);
        pushButton_modif->setObjectName(QStringLiteral("pushButton_modif"));
        pushButton_modif->setGeometry(QRect(520, 270, 211, 91));
        pushButton_modif->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_supp = new QPushButton(tab_6);
        pushButton_supp->setObjectName(QStringLiteral("pushButton_supp"));
        pushButton_supp->setEnabled(true);
        pushButton_supp->setGeometry(QRect(520, 370, 211, 91));
        pushButton_supp->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_id = new QLineEdit(tab_6);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setEnabled(true);
        lineEdit_id->setGeometry(QRect(200, 140, 113, 22));
        lineEdit_id->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_id->setInputMethodHints(Qt::ImhNone);
        lineEdit_id->setMaxLength(5);
        lineEdit_id->setEchoMode(QLineEdit::Normal);
        lineEdit_id->setClearButtonEnabled(true);
        lineEdit_Titre = new QLineEdit(tab_6);
        lineEdit_Titre->setObjectName(QStringLiteral("lineEdit_Titre"));
        lineEdit_Titre->setEnabled(true);
        lineEdit_Titre->setGeometry(QRect(200, 170, 113, 22));
        lineEdit_Titre->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_Titre->setInputMethodHints(Qt::ImhNone);
        lineEdit_Titre->setMaxLength(5);
        lineEdit_Titre->setEchoMode(QLineEdit::Normal);
        lineEdit_Titre->setClearButtonEnabled(true);
        lineEdit_Auteur = new QLineEdit(tab_6);
        lineEdit_Auteur->setObjectName(QStringLiteral("lineEdit_Auteur"));
        lineEdit_Auteur->setEnabled(true);
        lineEdit_Auteur->setGeometry(QRect(200, 200, 113, 22));
        lineEdit_Auteur->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_Auteur->setInputMethodHints(Qt::ImhNone);
        lineEdit_Auteur->setMaxLength(5);
        lineEdit_Auteur->setEchoMode(QLineEdit::Normal);
        lineEdit_Auteur->setClearButtonEnabled(true);
        lineEdit_date_sortie = new QLineEdit(tab_6);
        lineEdit_date_sortie->setObjectName(QStringLiteral("lineEdit_date_sortie"));
        lineEdit_date_sortie->setEnabled(true);
        lineEdit_date_sortie->setGeometry(QRect(200, 230, 113, 22));
        lineEdit_date_sortie->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_date_sortie->setInputMethodHints(Qt::ImhNone);
        lineEdit_date_sortie->setMaxLength(5);
        lineEdit_date_sortie->setEchoMode(QLineEdit::Normal);
        lineEdit_date_sortie->setClearButtonEnabled(true);
        lineEdit_nb_exem = new QLineEdit(tab_6);
        lineEdit_nb_exem->setObjectName(QStringLiteral("lineEdit_nb_exem"));
        lineEdit_nb_exem->setEnabled(true);
        lineEdit_nb_exem->setGeometry(QRect(200, 260, 113, 22));
        lineEdit_nb_exem->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nb_exem->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_exem->setMaxLength(5);
        lineEdit_nb_exem->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_exem->setClearButtonEnabled(true);
        lineEdit_pos = new QLineEdit(tab_6);
        lineEdit_pos->setObjectName(QStringLiteral("lineEdit_pos"));
        lineEdit_pos->setEnabled(true);
        lineEdit_pos->setGeometry(QRect(200, 290, 113, 22));
        lineEdit_pos->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_pos->setInputMethodHints(Qt::ImhNone);
        lineEdit_pos->setMaxLength(5);
        lineEdit_pos->setEchoMode(QLineEdit::Normal);
        lineEdit_pos->setClearButtonEnabled(true);
        lineEdit_nb_empre = new QLineEdit(tab_6);
        lineEdit_nb_empre->setObjectName(QStringLiteral("lineEdit_nb_empre"));
        lineEdit_nb_empre->setEnabled(true);
        lineEdit_nb_empre->setGeometry(QRect(200, 320, 113, 22));
        lineEdit_nb_empre->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nb_empre->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_empre->setMaxLength(5);
        lineEdit_nb_empre->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_empre->setClearButtonEnabled(true);
        lineEdit_poids = new QLineEdit(tab_6);
        lineEdit_poids->setObjectName(QStringLiteral("lineEdit_poids"));
        lineEdit_poids->setEnabled(true);
        lineEdit_poids->setGeometry(QRect(200, 350, 113, 22));
        lineEdit_poids->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_poids->setInputMethodHints(Qt::ImhNone);
        lineEdit_poids->setMaxLength(5);
        lineEdit_poids->setEchoMode(QLineEdit::Normal);
        lineEdit_poids->setClearButtonEnabled(true);
        lineEdit_prix = new QLineEdit(tab_6);
        lineEdit_prix->setObjectName(QStringLiteral("lineEdit_prix"));
        lineEdit_prix->setEnabled(true);
        lineEdit_prix->setGeometry(QRect(200, 410, 113, 22));
        lineEdit_prix->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_prix->setInputMethodHints(Qt::ImhNone);
        lineEdit_prix->setMaxLength(5);
        lineEdit_prix->setEchoMode(QLineEdit::Normal);
        lineEdit_prix->setClearButtonEnabled(true);
        lineEdit_nb_pages = new QLineEdit(tab_6);
        lineEdit_nb_pages->setObjectName(QStringLiteral("lineEdit_nb_pages"));
        lineEdit_nb_pages->setEnabled(true);
        lineEdit_nb_pages->setGeometry(QRect(200, 380, 113, 22));
        lineEdit_nb_pages->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        lineEdit_nb_pages->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_pages->setMaxLength(5);
        lineEdit_nb_pages->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_pages->setClearButtonEnabled(true);
        lineEdit_taille = new QLineEdit(tab_6);
        lineEdit_taille->setObjectName(QStringLiteral("lineEdit_taille"));
        lineEdit_taille->setEnabled(true);
        lineEdit_taille->setGeometry(QRect(200, 350, 113, 22));
        lineEdit_taille->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_taille->setInputMethodHints(Qt::ImhNone);
        lineEdit_taille->setMaxLength(5);
        lineEdit_taille->setEchoMode(QLineEdit::Normal);
        lineEdit_taille->setClearButtonEnabled(true);
        label_9 = new QLabel(tab_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 170, 61, 16));
        label_9->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_10 = new QLabel(tab_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 200, 61, 16));
        label_10->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 230, 141, 16));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 260, 171, 16));
        label_12->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 290, 61, 16));
        label_13->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_14 = new QLabel(tab_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 320, 161, 16));
        label_14->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_15 = new QLabel(tab_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 350, 61, 16));
        label_16 = new QLabel(tab_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 410, 61, 16));
        label_18 = new QLabel(tab_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 380, 61, 16));
        label_19 = new QLabel(tab_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(20, 350, 61, 16));
        lineEdit_duree = new QLineEdit(tab_6);
        lineEdit_duree->setObjectName(QStringLiteral("lineEdit_duree"));
        lineEdit_duree->setEnabled(true);
        lineEdit_duree->setGeometry(QRect(200, 380, 113, 22));
        lineEdit_duree->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_duree->setInputMethodHints(Qt::ImhNone);
        lineEdit_duree->setMaxLength(5);
        lineEdit_duree->setEchoMode(QLineEdit::Normal);
        lineEdit_duree->setClearButtonEnabled(true);
        label_20 = new QLabel(tab_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 380, 61, 16));
        label_20->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        radioButton_livre = new QRadioButton(tab_6);
        radioButton_livre->setObjectName(QStringLiteral("radioButton_livre"));
        radioButton_livre->setGeometry(QRect(20, 490, 95, 20));
        radioButton_livre->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        radioButton_CD = new QRadioButton(tab_6);
        radioButton_CD->setObjectName(QStringLiteral("radioButton_CD"));
        radioButton_CD->setGeometry(QRect(20, 530, 95, 20));
        radioButton_CD->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 30, 131, 71));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        comboBox_titre = new QComboBox(tab_6);
        comboBox_titre->setObjectName(QStringLiteral("comboBox_titre"));
        comboBox_titre->setGeometry(QRect(360, 50, 131, 31));
        comboBox_titre->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        comboBox_auteur = new QComboBox(tab_6);
        comboBox_auteur->setObjectName(QStringLiteral("comboBox_auteur"));
        comboBox_auteur->setGeometry(QRect(530, 50, 131, 31));
        comboBox_auteur->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        checkBox_titre = new QCheckBox(tab_6);
        checkBox_titre->setObjectName(QStringLiteral("checkBox_titre"));
        checkBox_titre->setGeometry(QRect(360, 90, 81, 20));
        checkBox_titre->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        checkBox_auteur = new QCheckBox(tab_6);
        checkBox_auteur->setObjectName(QStringLiteral("checkBox_auteur"));
        checkBox_auteur->setGeometry(QRect(530, 90, 81, 20));
        checkBox_auteur->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        pushButton_2 = new QPushButton(tab_6);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 140, 61, 20));
        pushButton_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(73, 128, 255, 255), stop:1 rgba(99, 255, 162, 255));\n"
"color: rgb(255, 255, 0)\n"
""));
        radioButton_PDF = new QRadioButton(tab_6);
        radioButton_PDF->setObjectName(QStringLiteral("radioButton_PDF"));
        radioButton_PDF->setGeometry(QRect(140, 490, 95, 20));
        radioButton_PDF->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        radioButton_Ant = new QRadioButton(tab_6);
        radioButton_Ant->setObjectName(QStringLiteral("radioButton_Ant"));
        radioButton_Ant->setGeometry(QRect(140, 530, 95, 20));
        radioButton_Ant->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        lineEdit_origine = new QLineEdit(tab_6);
        lineEdit_origine->setObjectName(QStringLiteral("lineEdit_origine"));
        lineEdit_origine->setGeometry(QRect(200, 350, 113, 22));
        lineEdit_origine->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_valeur = new QLineEdit(tab_6);
        lineEdit_valeur->setObjectName(QStringLiteral("lineEdit_valeur"));
        lineEdit_valeur->setGeometry(QRect(200, 380, 113, 22));
        lineEdit_valeur->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_age = new QLineEdit(tab_6);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(200, 410, 113, 22));
        lineEdit_age->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_matiere = new QLineEdit(tab_6);
        lineEdit_matiere->setObjectName(QStringLiteral("lineEdit_matiere"));
        lineEdit_matiere->setGeometry(QRect(200, 440, 113, 22));
        lineEdit_matiere->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_origine = new QLabel(tab_6);
        label_origine->setObjectName(QStringLiteral("label_origine"));
        label_origine->setGeometry(QRect(20, 350, 53, 16));
        label_origine->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_valeur = new QLabel(tab_6);
        label_valeur->setObjectName(QStringLiteral("label_valeur"));
        label_valeur->setGeometry(QRect(20, 380, 53, 16));
        label_valeur->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_age = new QLabel(tab_6);
        label_age->setObjectName(QStringLiteral("label_age"));
        label_age->setGeometry(QRect(20, 410, 81, 21));
        label_age->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_matiere = new QLabel(tab_6);
        label_matiere->setObjectName(QStringLiteral("label_matiere"));
        label_matiere->setGeometry(QRect(20, 440, 81, 21));
        label_matiere->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        tabWidget->addTab(tab_6, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView_3 = new QTableView(tab_5);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(10, 60, 731, 261));
        tableView_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        pushbutton_loadreq = new QPushButton(tab_5);
        pushbutton_loadreq->setObjectName(QStringLiteral("pushbutton_loadreq"));
        pushbutton_loadreq->setGeometry(QRect(290, 330, 141, 61));
        pushbutton_loadreq->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_r1 = new QLineEdit(tab_5);
        lineEdit_r1->setObjectName(QStringLiteral("lineEdit_r1"));
        lineEdit_r1->setGeometry(QRect(160, 460, 113, 22));
        lineEdit_r1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_r2 = new QLineEdit(tab_5);
        lineEdit_r2->setObjectName(QStringLiteral("lineEdit_r2"));
        lineEdit_r2->setGeometry(QRect(160, 530, 113, 22));
        lineEdit_r2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_r1 = new QLabel(tab_5);
        label_r1->setObjectName(QStringLiteral("label_r1"));
        label_r1->setGeometry(QRect(180, 425, 91, 31));
        label_r1->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_r2 = new QLabel(tab_5);
        label_r2->setObjectName(QStringLiteral("label_r2"));
        label_r2->setGeometry(QRect(180, 495, 111, 31));
        label_r2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(480, 450, 111, 41));
        pushButton_5->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(480, 520, 111, 41));
        pushButton_6->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tableView_4 = new QTableView(tab_7);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(20, 140, 711, 321));
        tableView_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        pushButton_7 = new QPushButton(tab_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(300, 490, 131, 71));
        pushButton_7->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_recherche = new QLineEdit(tab_7);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(170, 80, 171, 41));
        lineEdit_recherche->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_8 = new QPushButton(tab_7);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(50, 87, 111, 31));
        pushButton_8->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(73, 128, 255, 255), stop:1 rgba(99, 255, 162, 255));\n"
"color: rgb(255, 255, 0)\n"
""));
        tabWidget->addTab(tab_7, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_4 = new QHBoxLayout(tab_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_4);

        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));

        verticalLayout_3->addWidget(textEdit);


        horizontalLayout_4->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        label_conn = new QLabel(layoutWidget);
        label_conn->setObjectName(QStringLiteral("label_conn"));
        label_conn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 italic 14pt \"Nirmala UI\";"));

        verticalLayout->addWidget(label_conn);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        ajout = new QPushButton(layoutWidget);
        ajout->setObjectName(QStringLiteral("ajout"));

        verticalLayout->addWidget(ajout);


        retranslateUi(AdminDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QApplication::translate("AdminDialog", "Dialog", 0));
        imageeeee->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminDialog", "Home", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QApplication::translate("AdminDialog", "l'ongle \"home\"", 0));
        label_6->setText(QApplication::translate("AdminDialog", "Nom              ", 0));
        label_7->setText(QApplication::translate("AdminDialog", "Prenom          ", 0));
        label_3->setText(QApplication::translate("AdminDialog", "Username      ", 0));
        label_2->setText(QApplication::translate("AdminDialog", "Password       ", 0));
        label_5->setText(QApplication::translate("AdminDialog", "Age               ", 0));
        radioadmin->setText(QApplication::translate("AdminDialog", "Admin", 0));
        radioabonne->setText(QApplication::translate("AdminDialog", "Abonn\303\251", 0));
        radioinvite->setText(QApplication::translate("AdminDialog", "Invit\303\251", 0));
        buttonPayer->setText(QApplication::translate("AdminDialog", "Abonner", 0));
        buttonUpdate->setText(QApplication::translate("AdminDialog", "Update", 0));
        buttonDelete->setText(QApplication::translate("AdminDialog", "Delete", 0));
        pushButton_Inv->setText(QApplication::translate("AdminDialog", "Charger Invit\303\251", 0));
        pushButton_chargeab->setText(QApplication::translate("AdminDialog", "Charger Abonn\303\251", 0));
        pushButton_chargead->setText(QApplication::translate("AdminDialog", "Charger Admin", 0));
        label_out->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminDialog", "Ajouter", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_2), QApplication::translate("AdminDialog", "c'est l'ongle option", 0));
        pushButton_3->setText(QApplication::translate("AdminDialog", "Utilisateur", 0));
        pushButton_4->setText(QApplication::translate("AdminDialog", "Document", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AdminDialog", "Donn\303\251es", 0));
        pushButton_ajout->setText(QApplication::translate("AdminDialog", "Ajouter un document", 0));
        pushButton_modif->setText(QApplication::translate("AdminDialog", "Modifier un document", 0));
        pushButton_supp->setText(QApplication::translate("AdminDialog", "Supprimer un document", 0));
        label_9->setText(QApplication::translate("AdminDialog", "Titre", 0));
        label_10->setText(QApplication::translate("AdminDialog", "Auteur", 0));
        label_11->setText(QApplication::translate("AdminDialog", "Date sortie", 0));
        label_12->setText(QApplication::translate("AdminDialog", "Nombre d'exemplaire", 0));
        label_13->setText(QApplication::translate("AdminDialog", "Position", 0));
        label_14->setText(QApplication::translate("AdminDialog", "Nombre d'empreints", 0));
        label_15->setText(QApplication::translate("AdminDialog", "Poids", 0));
        label_16->setText(QApplication::translate("AdminDialog", "Prix", 0));
        label_18->setText(QApplication::translate("AdminDialog", "Nombre de pages", 0));
        label_19->setText(QApplication::translate("AdminDialog", "Taille", 0));
        label_20->setText(QApplication::translate("AdminDialog", "Dur\303\251e", 0));
        radioButton_livre->setText(QApplication::translate("AdminDialog", "Livre", 0));
        radioButton_CD->setText(QApplication::translate("AdminDialog", "CD", 0));
        pushButton->setText(QApplication::translate("AdminDialog", "Charger", 0));
        checkBox_titre->setText(QApplication::translate("AdminDialog", "Titre", 0));
        checkBox_auteur->setText(QApplication::translate("AdminDialog", "Auteur", 0));
        pushButton_2->setText(QApplication::translate("AdminDialog", "Identifiant", 0));
        radioButton_PDF->setText(QApplication::translate("AdminDialog", "PDF", 0));
        radioButton_Ant->setText(QApplication::translate("AdminDialog", "Antiquit\303\251", 0));
        label_origine->setText(QApplication::translate("AdminDialog", "Origine", 0));
        label_valeur->setText(QApplication::translate("AdminDialog", "Valeur", 0));
        label_age->setText(QApplication::translate("AdminDialog", "Age", 0));
        label_matiere->setText(QApplication::translate("AdminDialog", "Matiere", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("AdminDialog", "Document", 0));
        pushbutton_loadreq->setText(QApplication::translate("AdminDialog", "Load", 0));
        label_r1->setText(QApplication::translate("AdminDialog", "username", 0));
        label_r2->setText(QApplication::translate("AdminDialog", "identifiant", 0));
        pushButton_5->setText(QApplication::translate("AdminDialog", "Accepter", 0));
        pushButton_6->setText(QApplication::translate("AdminDialog", "Rejeter", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("AdminDialog", "Requetes", 0));
        pushButton_7->setText(QApplication::translate("AdminDialog", "Load", 0));
        pushButton_8->setText(QApplication::translate("AdminDialog", "Recherche", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("AdminDialog", "empreint", 0));
        label_4->setText(QApplication::translate("AdminDialog", "Ecrire votre feedback", 0));
        textEdit->setHtml(QApplication::translate("AdminDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Il s'agit d'un projet de gestion de biblioth\303\250que dont le but est  d'automatiser et faciliter les t\303\242ches quotidiennes d'un administrateur.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:20pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'a"
                        "rial,sans-serif'; font-size:16pt; font-weight:600; color:#202124; background-color:#ffffff;\">\303\211labor\303\251 par </span><span style=\" font-family:'arial,sans-serif'; font-size:16pt; font-weight:600; text-decoration: underline; color:#ff0000; background-color:#ffffff;\">Ghouma Melek &amp;&amp; Jaziri Med Aziz</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminDialog", "A propos", 0));
        label_conn->setText(QString());
        label->setText(QApplication::translate("AdminDialog", "                                                                           Welcome to Admin Dialog", 0));
        ajout->setText(QApplication::translate("AdminDialog", "Ajouter Ongle", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
