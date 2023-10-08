/********************************************************************************
** Form generated from reading UI file 'abonnedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABONNEDIALOG_H
#define UI_ABONNEDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AbonneDialog
{
public:
    QTabWidget *User;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_n;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_p;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_a;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLineEdit *lineEdit_nt;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLineEdit *lineEdit_ad;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QLineEdit *lineEdit_adm;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLineEdit *label_ab;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QLineEdit *label_ex;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *label_u;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_pa;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_poids_3;
    QLabel *label_000;
    QLabel *label_009;
    QCheckBox *checkBox_titre_3;
    QLineEdit *lineEdit_prix_3;
    QLineEdit *lineEdit_pos_3;
    QLabel *label_008;
    QLabel *label_003;
    QLabel *label_006;
    QComboBox *comboBox_auteur_3;
    QLineEdit *lineEdit_Titre_3;
    QLabel *label_007;
    QLabel *label_005;
    QPushButton *pushButton_23;
    QLineEdit *lineEdit_Auteur_3;
    QLineEdit *lineEdit_date_sortie_3;
    QPushButton *pushButton_24;
    QLabel *label_010;
    QLineEdit *lineEdit_taille_3;
    QCheckBox *checkBox_auteur_3;
    QLineEdit *lineEdit_nb_pages_3;
    QLineEdit *lineEdit_nb_empre_3;
    QLineEdit *lineEdit_nb_exem_3;
    QComboBox *comboBox_titre_3;
    QLabel *label_002;
    QLabel *label_004;
    QLineEdit *lineEdit_duree_3;
    QLabel *label_001;
    QLineEdit *lineEdit_id;
    QRadioButton *radioButton_livre_3;
    QRadioButton *radioButton_CD_3;
    QRadioButton *radioButton_PDF_3;
    QWidget *tab_2;
    QComboBox *comboBox_non_re;
    QComboBox *comboBox_re;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_21;
    QLabel *label_25;
    QPushButton *pushButton_31;
    QLineEdit *lineEdit_d1;
    QLineEdit *lineEdit_r1_3;
    QLineEdit *lineEdit_d2;
    QLineEdit *lineEdit_r1_4;
    QLabel *label_pen;
    QLabel *label_8;

    void setupUi(QDialog *AbonneDialog)
    {
        if (AbonneDialog->objectName().isEmpty())
            AbonneDialog->setObjectName(QStringLiteral("AbonneDialog"));
        AbonneDialog->resize(807, 671);
        AbonneDialog->setStyleSheet(QStringLiteral("background-color: rgb(53, 53, 53);"));
        User = new QTabWidget(AbonneDialog);
        User->setObjectName(QStringLiteral("User"));
        User->setGeometry(QRect(60, 30, 621, 531));
        User->setStyleSheet(QStringLiteral("background-color: rgb(22, 22, 22);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 491, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label);

        lineEdit_n = new QLineEdit(layoutWidget);
        lineEdit_n->setObjectName(QStringLiteral("lineEdit_n"));
        lineEdit_n->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_n->setMaxLength(10);

        horizontalLayout->addWidget(lineEdit_n);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_p = new QLineEdit(layoutWidget);
        lineEdit_p->setObjectName(QStringLiteral("lineEdit_p"));
        lineEdit_p->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_p->setMaxLength(10);

        horizontalLayout_2->addWidget(lineEdit_p);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_a = new QLineEdit(layoutWidget);
        lineEdit_a->setObjectName(QStringLiteral("lineEdit_a"));
        lineEdit_a->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_a->setMaxLength(2);

        horizontalLayout_3->addWidget(lineEdit_a);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_6->addWidget(label_11);

        lineEdit_nt = new QLineEdit(layoutWidget);
        lineEdit_nt->setObjectName(QStringLiteral("lineEdit_nt"));
        lineEdit_nt->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nt->setMaxLength(8);

        horizontalLayout_6->addWidget(lineEdit_nt);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_7->addWidget(label_12);

        lineEdit_ad = new QLineEdit(layoutWidget);
        lineEdit_ad->setObjectName(QStringLiteral("lineEdit_ad"));
        lineEdit_ad->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_ad->setMaxLength(20);

        horizontalLayout_7->addWidget(lineEdit_ad);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_8->addWidget(label_14);

        lineEdit_adm = new QLineEdit(layoutWidget);
        lineEdit_adm->setObjectName(QStringLiteral("lineEdit_adm"));
        lineEdit_adm->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_adm->setMaxLength(20);

        horizontalLayout_8->addWidget(lineEdit_adm);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_9->addWidget(label_13);

        label_ab = new QLineEdit(layoutWidget);
        label_ab->setObjectName(QStringLiteral("label_ab"));
        label_ab->setEnabled(false);
        label_ab->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(label_ab);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_10->addWidget(label_17);

        label_ex = new QLineEdit(layoutWidget);
        label_ex->setObjectName(QStringLiteral("label_ex"));
        label_ex->setEnabled(false);
        label_ex->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_10->addWidget(label_ex);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(label_3);

        label_u = new QLineEdit(layoutWidget);
        label_u->setObjectName(QStringLiteral("label_u"));
        label_u->setEnabled(false);
        label_u->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_u);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_pa = new QLineEdit(layoutWidget);
        lineEdit_pa->setObjectName(QStringLiteral("lineEdit_pa"));
        lineEdit_pa->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_pa->setMaxLength(20);

        horizontalLayout_5->addWidget(lineEdit_pa);


        verticalLayout->addLayout(horizontalLayout_5);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 280, 91, 71));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 120, 91, 71));
        pushButton_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        User->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 350, 121, 41));
        pushButton_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(tab_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 350, 121, 41));
        pushButton_4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_poids_3 = new QLineEdit(tab_5);
        lineEdit_poids_3->setObjectName(QStringLiteral("lineEdit_poids_3"));
        lineEdit_poids_3->setEnabled(true);
        lineEdit_poids_3->setGeometry(QRect(180, 300, 113, 22));
        lineEdit_poids_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_poids_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_poids_3->setMaxLength(5);
        lineEdit_poids_3->setEchoMode(QLineEdit::Normal);
        lineEdit_poids_3->setClearButtonEnabled(true);
        label_000 = new QLabel(tab_5);
        label_000->setObjectName(QStringLiteral("label_000"));
        label_000->setGeometry(QRect(20, 120, 61, 16));
        label_000->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_009 = new QLabel(tab_5);
        label_009->setObjectName(QStringLiteral("label_009"));
        label_009->setGeometry(QRect(20, 360, 61, 16));
        label_009->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        checkBox_titre_3 = new QCheckBox(tab_5);
        checkBox_titre_3->setObjectName(QStringLiteral("checkBox_titre_3"));
        checkBox_titre_3->setGeometry(QRect(320, 80, 81, 20));
        checkBox_titre_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        lineEdit_prix_3 = new QLineEdit(tab_5);
        lineEdit_prix_3->setObjectName(QStringLiteral("lineEdit_prix_3"));
        lineEdit_prix_3->setEnabled(true);
        lineEdit_prix_3->setGeometry(QRect(180, 360, 113, 22));
        lineEdit_prix_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_prix_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_prix_3->setMaxLength(5);
        lineEdit_prix_3->setEchoMode(QLineEdit::Normal);
        lineEdit_prix_3->setClearButtonEnabled(true);
        lineEdit_pos_3 = new QLineEdit(tab_5);
        lineEdit_pos_3->setObjectName(QStringLiteral("lineEdit_pos_3"));
        lineEdit_pos_3->setEnabled(true);
        lineEdit_pos_3->setGeometry(QRect(180, 240, 113, 22));
        lineEdit_pos_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_pos_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_pos_3->setMaxLength(5);
        lineEdit_pos_3->setEchoMode(QLineEdit::Normal);
        lineEdit_pos_3->setClearButtonEnabled(true);
        label_008 = new QLabel(tab_5);
        label_008->setObjectName(QStringLiteral("label_008"));
        label_008->setGeometry(QRect(20, 330, 61, 16));
        label_003 = new QLabel(tab_5);
        label_003->setObjectName(QStringLiteral("label_003"));
        label_003->setGeometry(QRect(20, 210, 171, 21));
        label_003->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_006 = new QLabel(tab_5);
        label_006->setObjectName(QStringLiteral("label_006"));
        label_006->setGeometry(QRect(20, 300, 61, 16));
        comboBox_auteur_3 = new QComboBox(tab_5);
        comboBox_auteur_3->setObjectName(QStringLiteral("comboBox_auteur_3"));
        comboBox_auteur_3->setGeometry(QRect(470, 40, 131, 31));
        comboBox_auteur_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);\n"
""));
        lineEdit_Titre_3 = new QLineEdit(tab_5);
        lineEdit_Titre_3->setObjectName(QStringLiteral("lineEdit_Titre_3"));
        lineEdit_Titre_3->setEnabled(true);
        lineEdit_Titre_3->setGeometry(QRect(180, 120, 113, 22));
        lineEdit_Titre_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_Titre_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_Titre_3->setMaxLength(5);
        lineEdit_Titre_3->setEchoMode(QLineEdit::Normal);
        lineEdit_Titre_3->setClearButtonEnabled(true);
        label_007 = new QLabel(tab_5);
        label_007->setObjectName(QStringLiteral("label_007"));
        label_007->setGeometry(QRect(20, 330, 61, 16));
        label_007->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_005 = new QLabel(tab_5);
        label_005->setObjectName(QStringLiteral("label_005"));
        label_005->setGeometry(QRect(20, 270, 171, 16));
        label_005->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        pushButton_23 = new QPushButton(tab_5);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(20, 90, 61, 20));
        pushButton_23->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(73, 128, 255, 255), stop:1 rgba(99, 255, 162, 255));\n"
"color: rgb(255, 255, 0)\n"
""));
        lineEdit_Auteur_3 = new QLineEdit(tab_5);
        lineEdit_Auteur_3->setObjectName(QStringLiteral("lineEdit_Auteur_3"));
        lineEdit_Auteur_3->setEnabled(true);
        lineEdit_Auteur_3->setGeometry(QRect(180, 150, 113, 22));
        lineEdit_Auteur_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_Auteur_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_Auteur_3->setMaxLength(5);
        lineEdit_Auteur_3->setEchoMode(QLineEdit::Normal);
        lineEdit_Auteur_3->setClearButtonEnabled(true);
        lineEdit_date_sortie_3 = new QLineEdit(tab_5);
        lineEdit_date_sortie_3->setObjectName(QStringLiteral("lineEdit_date_sortie_3"));
        lineEdit_date_sortie_3->setEnabled(true);
        lineEdit_date_sortie_3->setGeometry(QRect(180, 180, 113, 22));
        lineEdit_date_sortie_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_date_sortie_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_date_sortie_3->setMaxLength(5);
        lineEdit_date_sortie_3->setEchoMode(QLineEdit::Normal);
        lineEdit_date_sortie_3->setClearButtonEnabled(true);
        pushButton_24 = new QPushButton(tab_5);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(80, 40, 93, 28));
        pushButton_24->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        label_010 = new QLabel(tab_5);
        label_010->setObjectName(QStringLiteral("label_010"));
        label_010->setGeometry(QRect(20, 300, 61, 16));
        label_010->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        lineEdit_taille_3 = new QLineEdit(tab_5);
        lineEdit_taille_3->setObjectName(QStringLiteral("lineEdit_taille_3"));
        lineEdit_taille_3->setEnabled(true);
        lineEdit_taille_3->setGeometry(QRect(180, 300, 113, 22));
        lineEdit_taille_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_taille_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_taille_3->setMaxLength(5);
        lineEdit_taille_3->setEchoMode(QLineEdit::Normal);
        lineEdit_taille_3->setClearButtonEnabled(true);
        checkBox_auteur_3 = new QCheckBox(tab_5);
        checkBox_auteur_3->setObjectName(QStringLiteral("checkBox_auteur_3"));
        checkBox_auteur_3->setGeometry(QRect(470, 80, 81, 20));
        checkBox_auteur_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        lineEdit_nb_pages_3 = new QLineEdit(tab_5);
        lineEdit_nb_pages_3->setObjectName(QStringLiteral("lineEdit_nb_pages_3"));
        lineEdit_nb_pages_3->setEnabled(true);
        lineEdit_nb_pages_3->setGeometry(QRect(180, 330, 113, 22));
        lineEdit_nb_pages_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        lineEdit_nb_pages_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_pages_3->setMaxLength(5);
        lineEdit_nb_pages_3->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_pages_3->setClearButtonEnabled(true);
        lineEdit_nb_empre_3 = new QLineEdit(tab_5);
        lineEdit_nb_empre_3->setObjectName(QStringLiteral("lineEdit_nb_empre_3"));
        lineEdit_nb_empre_3->setEnabled(true);
        lineEdit_nb_empre_3->setGeometry(QRect(180, 270, 113, 22));
        lineEdit_nb_empre_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nb_empre_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_empre_3->setMaxLength(5);
        lineEdit_nb_empre_3->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_empre_3->setClearButtonEnabled(true);
        lineEdit_nb_exem_3 = new QLineEdit(tab_5);
        lineEdit_nb_exem_3->setObjectName(QStringLiteral("lineEdit_nb_exem_3"));
        lineEdit_nb_exem_3->setEnabled(true);
        lineEdit_nb_exem_3->setGeometry(QRect(180, 210, 113, 22));
        lineEdit_nb_exem_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nb_exem_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_exem_3->setMaxLength(5);
        lineEdit_nb_exem_3->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_exem_3->setClearButtonEnabled(true);
        comboBox_titre_3 = new QComboBox(tab_5);
        comboBox_titre_3->setObjectName(QStringLiteral("comboBox_titre_3"));
        comboBox_titre_3->setGeometry(QRect(320, 40, 131, 31));
        comboBox_titre_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        label_002 = new QLabel(tab_5);
        label_002->setObjectName(QStringLiteral("label_002"));
        label_002->setGeometry(QRect(20, 180, 121, 16));
        label_002->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_004 = new QLabel(tab_5);
        label_004->setObjectName(QStringLiteral("label_004"));
        label_004->setGeometry(QRect(20, 240, 121, 21));
        label_004->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        lineEdit_duree_3 = new QLineEdit(tab_5);
        lineEdit_duree_3->setObjectName(QStringLiteral("lineEdit_duree_3"));
        lineEdit_duree_3->setEnabled(true);
        lineEdit_duree_3->setGeometry(QRect(180, 330, 113, 22));
        lineEdit_duree_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_duree_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_duree_3->setMaxLength(5);
        lineEdit_duree_3->setEchoMode(QLineEdit::Normal);
        lineEdit_duree_3->setClearButtonEnabled(true);
        label_001 = new QLabel(tab_5);
        label_001->setObjectName(QStringLiteral("label_001"));
        label_001->setGeometry(QRect(20, 150, 61, 16));
        label_001->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        lineEdit_id = new QLineEdit(tab_5);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(180, 90, 113, 22));
        lineEdit_id->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        radioButton_livre_3 = new QRadioButton(tab_5);
        radioButton_livre_3->setObjectName(QStringLiteral("radioButton_livre_3"));
        radioButton_livre_3->setGeometry(QRect(30, 420, 95, 20));
        radioButton_livre_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        radioButton_CD_3 = new QRadioButton(tab_5);
        radioButton_CD_3->setObjectName(QStringLiteral("radioButton_CD_3"));
        radioButton_CD_3->setGeometry(QRect(110, 420, 95, 20));
        radioButton_CD_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        radioButton_PDF_3 = new QRadioButton(tab_5);
        radioButton_PDF_3->setObjectName(QStringLiteral("radioButton_PDF_3"));
        radioButton_PDF_3->setGeometry(QRect(180, 420, 95, 20));
        radioButton_PDF_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        User->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        comboBox_non_re = new QComboBox(tab_2);
        comboBox_non_re->setObjectName(QStringLiteral("comboBox_non_re"));
        comboBox_non_re->setGeometry(QRect(310, 60, 131, 41));
        comboBox_non_re->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        comboBox_re = new QComboBox(tab_2);
        comboBox_re->setObjectName(QStringLiteral("comboBox_re"));
        comboBox_re->setGeometry(QRect(20, 60, 131, 41));
        comboBox_re->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 30, 71, 21));
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(320, 30, 121, 16));
        label_7->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 180, 171, 21));
        label_9->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 110, 161, 21));
        label_10->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(310, 110, 131, 21));
        label_21->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(320, 180, 151, 16));
        label_25->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        pushButton_31 = new QPushButton(tab_2);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setGeometry(QRect(170, 390, 151, 71));
        pushButton_31->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_d1 = new QLineEdit(tab_2);
        lineEdit_d1->setObjectName(QStringLiteral("lineEdit_d1"));
        lineEdit_d1->setEnabled(false);
        lineEdit_d1->setGeometry(QRect(30, 140, 113, 22));
        lineEdit_d1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_d1->setClearButtonEnabled(false);
        lineEdit_r1_3 = new QLineEdit(tab_2);
        lineEdit_r1_3->setObjectName(QStringLiteral("lineEdit_r1_3"));
        lineEdit_r1_3->setEnabled(false);
        lineEdit_r1_3->setGeometry(QRect(30, 210, 113, 22));
        lineEdit_r1_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_d2 = new QLineEdit(tab_2);
        lineEdit_d2->setObjectName(QStringLiteral("lineEdit_d2"));
        lineEdit_d2->setEnabled(false);
        lineEdit_d2->setGeometry(QRect(320, 140, 113, 22));
        lineEdit_d2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_r1_4 = new QLineEdit(tab_2);
        lineEdit_r1_4->setObjectName(QStringLiteral("lineEdit_r1_4"));
        lineEdit_r1_4->setEnabled(false);
        lineEdit_r1_4->setGeometry(QRect(320, 210, 113, 22));
        lineEdit_r1_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        User->addTab(tab_2, QString());
        label_pen = new QLabel(AbonneDialog);
        label_pen->setObjectName(QStringLiteral("label_pen"));
        label_pen->setGeometry(QRect(150, 580, 51, 34));
        label_8 = new QLabel(AbonneDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(73, 580, 71, 34));

        retranslateUi(AbonneDialog);

        User->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AbonneDialog);
    } // setupUi

    void retranslateUi(QDialog *AbonneDialog)
    {
        AbonneDialog->setWindowTitle(QApplication::translate("AbonneDialog", "Dialog", 0));
        label->setText(QApplication::translate("AbonneDialog", "nom                      ", 0));
        label_2->setText(QApplication::translate("AbonneDialog", "prenom                 ", 0));
        label_4->setText(QApplication::translate("AbonneDialog", "age                       ", 0));
        label_11->setText(QApplication::translate("AbonneDialog", "Num_Tel               ", 0));
        label_12->setText(QApplication::translate("AbonneDialog", "Adresse                ", 0));
        label_14->setText(QApplication::translate("AbonneDialog", "Adresse_Mail        ", 0));
        label_13->setText(QApplication::translate("AbonneDialog", "Date_Abonnement", 0));
        label_17->setText(QApplication::translate("AbonneDialog", "Date_Expiration    ", 0));
        label_3->setText(QApplication::translate("AbonneDialog", "usename              ", 0));
        label_5->setText(QApplication::translate("AbonneDialog", "password             ", 0));
        pushButton->setText(QApplication::translate("AbonneDialog", "Update", 0));
        pushButton_2->setText(QApplication::translate("AbonneDialog", "charger", 0));
        User->setTabText(User->indexOf(tab), QApplication::translate("AbonneDialog", "User", 0));
        pushButton_3->setText(QApplication::translate("AbonneDialog", "Empreinter", 0));
        pushButton_4->setText(QApplication::translate("AbonneDialog", "Retourner", 0));
        label_000->setText(QApplication::translate("AbonneDialog", "Titre", 0));
        label_009->setText(QApplication::translate("AbonneDialog", "Prix", 0));
        checkBox_titre_3->setText(QApplication::translate("AbonneDialog", "Titre", 0));
        label_008->setText(QApplication::translate("AbonneDialog", "Nombre de pages", 0));
        label_003->setText(QApplication::translate("AbonneDialog", "Nombre d'exemplaire", 0));
        label_006->setText(QApplication::translate("AbonneDialog", "Taille", 0));
        label_007->setText(QApplication::translate("AbonneDialog", "Dur\303\251e", 0));
        label_005->setText(QApplication::translate("AbonneDialog", "Nombre d'empreints", 0));
        pushButton_23->setText(QApplication::translate("AbonneDialog", "Identifiant", 0));
        pushButton_24->setText(QApplication::translate("AbonneDialog", "Charger", 0));
        label_010->setText(QApplication::translate("AbonneDialog", "Poids", 0));
        checkBox_auteur_3->setText(QApplication::translate("AbonneDialog", "Auteur", 0));
        label_002->setText(QApplication::translate("AbonneDialog", "Date sortie", 0));
        label_004->setText(QApplication::translate("AbonneDialog", "Position", 0));
        label_001->setText(QApplication::translate("AbonneDialog", "Auteur", 0));
        radioButton_livre_3->setText(QApplication::translate("AbonneDialog", "Livre", 0));
        radioButton_CD_3->setText(QApplication::translate("AbonneDialog", "CD", 0));
        radioButton_PDF_3->setText(QApplication::translate("AbonneDialog", "PDF", 0));
        User->setTabText(User->indexOf(tab_5), QApplication::translate("AbonneDialog", "Chercher", 0));
        label_6->setText(QApplication::translate("AbonneDialog", "Retourn\303\251", 0));
        label_7->setText(QApplication::translate("AbonneDialog", "Non Retourn\303\251", 0));
        label_9->setText(QApplication::translate("AbonneDialog", "Date de retour", 0));
        label_10->setText(QApplication::translate("AbonneDialog", "Date d'empreinte", 0));
        label_21->setText(QApplication::translate("AbonneDialog", "Date d'empreinte", 0));
        label_25->setText(QApplication::translate("AbonneDialog", "Date de remise", 0));
        pushButton_31->setText(QApplication::translate("AbonneDialog", "Charger", 0));
        User->setTabText(User->indexOf(tab_2), QApplication::translate("AbonneDialog", "Empreint", 0));
        label_pen->setText(QString());
        label_8->setText(QApplication::translate("AbonneDialog", "P\303\251nalit\303\251 :", 0));
    } // retranslateUi

};

namespace Ui {
    class AbonneDialog: public Ui_AbonneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABONNEDIALOG_H
