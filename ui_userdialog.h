/********************************************************************************
** Form generated from reading UI file 'userdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG_H
#define UI_USERDIALOG_H

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

class Ui_UserDialog
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
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *label_u;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_pa;
    QPushButton *pushButton;
    QLabel *label_penalite;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QWidget *tab_5;
    QLabel *label_007;
    QComboBox *comboBox_auteur_3;
    QLineEdit *lineEdit_poids_3;
    QLineEdit *lineEdit_nb_empre_3;
    QComboBox *comboBox_titre_3;
    QPushButton *pushButton_23;
    QLineEdit *lineEdit_Auteur_3;
    QLineEdit *lineEdit_nb_exem_3;
    QLabel *label_010;
    QLabel *label_001;
    QPushButton *pushButton_24;
    QLineEdit *lineEdit_taille_3;
    QCheckBox *checkBox_auteur_3;
    QLabel *label_006;
    QLineEdit *lineEdit_id;
    QLabel *label_008;
    QLabel *label_005;
    QLineEdit *lineEdit_nb_pages_3;
    QLabel *label_004;
    QCheckBox *checkBox_titre_3;
    QLineEdit *lineEdit_prix_3;
    QLineEdit *lineEdit_date_sortie_3;
    QLineEdit *lineEdit_pos_3;
    QLineEdit *lineEdit_duree_3;
    QLineEdit *lineEdit_Titre_3;
    QRadioButton *radioButton_CD_3;
    QLabel *label_000;
    QRadioButton *radioButton_PDF_3;
    QLabel *label_003;
    QRadioButton *radioButton_livre_3;
    QLabel *label_002;
    QLabel *label_009;

    void setupUi(QDialog *UserDialog)
    {
        if (UserDialog->objectName().isEmpty())
            UserDialog->setObjectName(QStringLiteral("UserDialog"));
        UserDialog->resize(859, 611);
        UserDialog->setStyleSheet(QStringLiteral("background-color: rgb(53, 53, 53);"));
        User = new QTabWidget(UserDialog);
        User->setObjectName(QStringLiteral("User"));
        User->setGeometry(QRect(90, 40, 651, 481));
        User->setStyleSheet(QLatin1String("background-color: rgb(22, 22, 22);\n"
"gridline-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 0, 255);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 50, 371, 351));
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
"font: 75 10pt \"MS Shell Dlg 2\";"));

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
        pushButton->setGeometry(QRect(480, 230, 131, 61));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        label_penalite = new QLabel(tab);
        label_penalite->setObjectName(QStringLiteral("label_penalite"));
        label_penalite->setGeometry(QRect(80, 420, 53, 16));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 420, 53, 16));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 120, 131, 61));
        pushButton_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        User->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_007 = new QLabel(tab_5);
        label_007->setObjectName(QStringLiteral("label_007"));
        label_007->setGeometry(QRect(10, 340, 61, 16));
        label_007->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        comboBox_auteur_3 = new QComboBox(tab_5);
        comboBox_auteur_3->setObjectName(QStringLiteral("comboBox_auteur_3"));
        comboBox_auteur_3->setGeometry(QRect(410, 170, 131, 31));
        comboBox_auteur_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        lineEdit_poids_3 = new QLineEdit(tab_5);
        lineEdit_poids_3->setObjectName(QStringLiteral("lineEdit_poids_3"));
        lineEdit_poids_3->setEnabled(true);
        lineEdit_poids_3->setGeometry(QRect(190, 310, 113, 22));
        lineEdit_poids_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_poids_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_poids_3->setMaxLength(5);
        lineEdit_poids_3->setEchoMode(QLineEdit::Normal);
        lineEdit_poids_3->setClearButtonEnabled(true);
        lineEdit_nb_empre_3 = new QLineEdit(tab_5);
        lineEdit_nb_empre_3->setObjectName(QStringLiteral("lineEdit_nb_empre_3"));
        lineEdit_nb_empre_3->setEnabled(true);
        lineEdit_nb_empre_3->setGeometry(QRect(190, 280, 113, 22));
        lineEdit_nb_empre_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nb_empre_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_empre_3->setMaxLength(5);
        lineEdit_nb_empre_3->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_empre_3->setClearButtonEnabled(true);
        comboBox_titre_3 = new QComboBox(tab_5);
        comboBox_titre_3->setObjectName(QStringLiteral("comboBox_titre_3"));
        comboBox_titre_3->setGeometry(QRect(410, 50, 131, 31));
        comboBox_titre_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        pushButton_23 = new QPushButton(tab_5);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(10, 100, 61, 21));
        pushButton_23->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(73, 128, 255, 255), stop:1 rgba(99, 255, 162, 255));\n"
"color: rgb(255, 255, 0)\n"
""));
        lineEdit_Auteur_3 = new QLineEdit(tab_5);
        lineEdit_Auteur_3->setObjectName(QStringLiteral("lineEdit_Auteur_3"));
        lineEdit_Auteur_3->setEnabled(true);
        lineEdit_Auteur_3->setGeometry(QRect(190, 160, 113, 22));
        lineEdit_Auteur_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_Auteur_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_Auteur_3->setMaxLength(5);
        lineEdit_Auteur_3->setEchoMode(QLineEdit::Normal);
        lineEdit_Auteur_3->setClearButtonEnabled(true);
        lineEdit_nb_exem_3 = new QLineEdit(tab_5);
        lineEdit_nb_exem_3->setObjectName(QStringLiteral("lineEdit_nb_exem_3"));
        lineEdit_nb_exem_3->setEnabled(true);
        lineEdit_nb_exem_3->setGeometry(QRect(190, 220, 113, 22));
        lineEdit_nb_exem_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nb_exem_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_exem_3->setMaxLength(5);
        lineEdit_nb_exem_3->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_exem_3->setClearButtonEnabled(true);
        label_010 = new QLabel(tab_5);
        label_010->setObjectName(QStringLiteral("label_010"));
        label_010->setGeometry(QRect(10, 310, 61, 16));
        label_010->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_001 = new QLabel(tab_5);
        label_001->setObjectName(QStringLiteral("label_001"));
        label_001->setGeometry(QRect(10, 160, 61, 16));
        label_001->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        pushButton_24 = new QPushButton(tab_5);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(130, 27, 111, 51));
        pushButton_24->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_taille_3 = new QLineEdit(tab_5);
        lineEdit_taille_3->setObjectName(QStringLiteral("lineEdit_taille_3"));
        lineEdit_taille_3->setEnabled(true);
        lineEdit_taille_3->setGeometry(QRect(190, 310, 113, 22));
        lineEdit_taille_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_taille_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_taille_3->setMaxLength(5);
        lineEdit_taille_3->setEchoMode(QLineEdit::Normal);
        lineEdit_taille_3->setClearButtonEnabled(true);
        checkBox_auteur_3 = new QCheckBox(tab_5);
        checkBox_auteur_3->setObjectName(QStringLiteral("checkBox_auteur_3"));
        checkBox_auteur_3->setGeometry(QRect(410, 210, 81, 20));
        checkBox_auteur_3->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";\n"
""));
        label_006 = new QLabel(tab_5);
        label_006->setObjectName(QStringLiteral("label_006"));
        label_006->setGeometry(QRect(10, 310, 61, 16));
        label_006->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        lineEdit_id = new QLineEdit(tab_5);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(190, 100, 113, 22));
        lineEdit_id->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_008 = new QLabel(tab_5);
        label_008->setObjectName(QStringLiteral("label_008"));
        label_008->setGeometry(QRect(10, 340, 171, 21));
        label_008->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_005 = new QLabel(tab_5);
        label_005->setObjectName(QStringLiteral("label_005"));
        label_005->setGeometry(QRect(10, 280, 161, 16));
        label_005->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        lineEdit_nb_pages_3 = new QLineEdit(tab_5);
        lineEdit_nb_pages_3->setObjectName(QStringLiteral("lineEdit_nb_pages_3"));
        lineEdit_nb_pages_3->setEnabled(true);
        lineEdit_nb_pages_3->setGeometry(QRect(190, 340, 113, 22));
        lineEdit_nb_pages_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nb_pages_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_nb_pages_3->setMaxLength(5);
        lineEdit_nb_pages_3->setEchoMode(QLineEdit::Normal);
        lineEdit_nb_pages_3->setClearButtonEnabled(true);
        label_004 = new QLabel(tab_5);
        label_004->setObjectName(QStringLiteral("label_004"));
        label_004->setGeometry(QRect(10, 250, 61, 16));
        label_004->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        checkBox_titre_3 = new QCheckBox(tab_5);
        checkBox_titre_3->setObjectName(QStringLiteral("checkBox_titre_3"));
        checkBox_titre_3->setGeometry(QRect(410, 90, 81, 20));
        checkBox_titre_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        lineEdit_prix_3 = new QLineEdit(tab_5);
        lineEdit_prix_3->setObjectName(QStringLiteral("lineEdit_prix_3"));
        lineEdit_prix_3->setEnabled(true);
        lineEdit_prix_3->setGeometry(QRect(190, 370, 113, 22));
        lineEdit_prix_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_prix_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_prix_3->setMaxLength(5);
        lineEdit_prix_3->setEchoMode(QLineEdit::Normal);
        lineEdit_prix_3->setClearButtonEnabled(true);
        lineEdit_date_sortie_3 = new QLineEdit(tab_5);
        lineEdit_date_sortie_3->setObjectName(QStringLiteral("lineEdit_date_sortie_3"));
        lineEdit_date_sortie_3->setEnabled(true);
        lineEdit_date_sortie_3->setGeometry(QRect(190, 190, 113, 22));
        lineEdit_date_sortie_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_date_sortie_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_date_sortie_3->setMaxLength(5);
        lineEdit_date_sortie_3->setEchoMode(QLineEdit::Normal);
        lineEdit_date_sortie_3->setClearButtonEnabled(true);
        lineEdit_pos_3 = new QLineEdit(tab_5);
        lineEdit_pos_3->setObjectName(QStringLiteral("lineEdit_pos_3"));
        lineEdit_pos_3->setEnabled(true);
        lineEdit_pos_3->setGeometry(QRect(190, 250, 113, 22));
        lineEdit_pos_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_pos_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_pos_3->setMaxLength(5);
        lineEdit_pos_3->setEchoMode(QLineEdit::Normal);
        lineEdit_pos_3->setClearButtonEnabled(true);
        lineEdit_duree_3 = new QLineEdit(tab_5);
        lineEdit_duree_3->setObjectName(QStringLiteral("lineEdit_duree_3"));
        lineEdit_duree_3->setEnabled(true);
        lineEdit_duree_3->setGeometry(QRect(190, 340, 113, 22));
        lineEdit_duree_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_duree_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_duree_3->setMaxLength(5);
        lineEdit_duree_3->setEchoMode(QLineEdit::Normal);
        lineEdit_duree_3->setClearButtonEnabled(true);
        lineEdit_Titre_3 = new QLineEdit(tab_5);
        lineEdit_Titre_3->setObjectName(QStringLiteral("lineEdit_Titre_3"));
        lineEdit_Titre_3->setEnabled(true);
        lineEdit_Titre_3->setGeometry(QRect(190, 130, 113, 22));
        lineEdit_Titre_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_Titre_3->setInputMethodHints(Qt::ImhNone);
        lineEdit_Titre_3->setMaxLength(5);
        lineEdit_Titre_3->setEchoMode(QLineEdit::Normal);
        lineEdit_Titre_3->setClearButtonEnabled(true);
        radioButton_CD_3 = new QRadioButton(tab_5);
        radioButton_CD_3->setObjectName(QStringLiteral("radioButton_CD_3"));
        radioButton_CD_3->setGeometry(QRect(420, 370, 95, 20));
        radioButton_CD_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        label_000 = new QLabel(tab_5);
        label_000->setObjectName(QStringLiteral("label_000"));
        label_000->setGeometry(QRect(10, 130, 61, 16));
        label_000->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        radioButton_PDF_3 = new QRadioButton(tab_5);
        radioButton_PDF_3->setObjectName(QStringLiteral("radioButton_PDF_3"));
        radioButton_PDF_3->setGeometry(QRect(420, 410, 95, 20));
        radioButton_PDF_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        label_003 = new QLabel(tab_5);
        label_003->setObjectName(QStringLiteral("label_003"));
        label_003->setGeometry(QRect(10, 220, 171, 21));
        label_003->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        radioButton_livre_3 = new QRadioButton(tab_5);
        radioButton_livre_3->setObjectName(QStringLiteral("radioButton_livre_3"));
        radioButton_livre_3->setGeometry(QRect(420, 330, 95, 20));
        radioButton_livre_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));
        label_002 = new QLabel(tab_5);
        label_002->setObjectName(QStringLiteral("label_002"));
        label_002->setGeometry(QRect(10, 190, 101, 16));
        label_002->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_009 = new QLabel(tab_5);
        label_009->setObjectName(QStringLiteral("label_009"));
        label_009->setGeometry(QRect(10, 370, 61, 16));
        label_009->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        User->addTab(tab_5, QString());

        retranslateUi(UserDialog);

        User->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserDialog);
    } // setupUi

    void retranslateUi(QDialog *UserDialog)
    {
        UserDialog->setWindowTitle(QApplication::translate("UserDialog", "Dialog", 0));
        label->setText(QApplication::translate("UserDialog", "Nom         ", 0));
        label_2->setText(QApplication::translate("UserDialog", "Prenom    ", 0));
        label_4->setText(QApplication::translate("UserDialog", "Age         ", 0));
        label_3->setText(QApplication::translate("UserDialog", "Usename ", 0));
        label_5->setText(QApplication::translate("UserDialog", "Password", 0));
        pushButton->setText(QApplication::translate("UserDialog", "UPDATE", 0));
        label_penalite->setText(QString());
        label_8->setText(QApplication::translate("UserDialog", "Penalit\303\251", 0));
        pushButton_2->setText(QApplication::translate("UserDialog", "CHARGER", 0));
        User->setTabText(User->indexOf(tab), QApplication::translate("UserDialog", "User", 0));
        label_007->setText(QApplication::translate("UserDialog", "Dur\303\251e", 0));
        pushButton_23->setText(QApplication::translate("UserDialog", "Identifiant", 0));
        label_010->setText(QApplication::translate("UserDialog", "Poids", 0));
        label_001->setText(QApplication::translate("UserDialog", "Auteur", 0));
        pushButton_24->setText(QApplication::translate("UserDialog", "Charger", 0));
        checkBox_auteur_3->setText(QApplication::translate("UserDialog", "Auteur", 0));
        label_006->setText(QApplication::translate("UserDialog", "Taille", 0));
        label_008->setText(QApplication::translate("UserDialog", "Nombre de pages", 0));
        label_005->setText(QApplication::translate("UserDialog", "Nombre d'empreints", 0));
        label_004->setText(QApplication::translate("UserDialog", "Position", 0));
        checkBox_titre_3->setText(QApplication::translate("UserDialog", "Titre", 0));
        radioButton_CD_3->setText(QApplication::translate("UserDialog", "CD", 0));
        label_000->setText(QApplication::translate("UserDialog", "Titre", 0));
        radioButton_PDF_3->setText(QApplication::translate("UserDialog", "PDF", 0));
        label_003->setText(QApplication::translate("UserDialog", "Nombre d'exemplaire", 0));
        radioButton_livre_3->setText(QApplication::translate("UserDialog", "Livre", 0));
        label_002->setText(QApplication::translate("UserDialog", "Date sortie", 0));
        label_009->setText(QApplication::translate("UserDialog", "Prix", 0));
        User->setTabText(User->indexOf(tab_5), QApplication::translate("UserDialog", "Chercher", 0));
    } // retranslateUi

};

namespace Ui {
    class UserDialog: public Ui_UserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG_H
