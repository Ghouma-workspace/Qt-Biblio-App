/********************************************************************************
** Form generated from reading UI file 'ajoutdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTDOC_H
#define UI_AJOUTDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AjoutDoc
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_id;
    QLineEdit *lineEdit_id;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEdit_tit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLineEdit *lineEdit_auteur;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QLineEdit *lineEdit_date_sortie;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QLineEdit *lineEdit_exemp;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_12;
    QLineEdit *lineEdit_pos;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QLineEdit *lineEdit_page;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_14;
    QLineEdit *lineEdit_poids;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_15;
    QLineEdit *lineEdit_prix;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_16;
    QLineEdit *lineEdit_duree;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_17;
    QLineEdit *lineEdit_taille;
    QHBoxLayout *horizontalLayout_19;
    QRadioButton *radioButton_livre;
    QRadioButton *radioButton_cd;
    QRadioButton *radioButton;
    QPushButton *pushButton;

    void setupUi(QDialog *AjoutDoc)
    {
        if (AjoutDoc->objectName().isEmpty())
            AjoutDoc->setObjectName(QStringLiteral("AjoutDoc"));
        AjoutDoc->resize(782, 609);
        AjoutDoc->setStyleSheet(QStringLiteral("background-color: rgb(53, 53, 53);"));
        groupBox = new QGroupBox(AjoutDoc);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 30, 561, 541));
        groupBox->setStyleSheet(QLatin1String("background-color: rgb(22, 22, 22);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_id = new QLabel(groupBox);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_8->addWidget(label_id);

        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        lineEdit_id->setMaxLength(5);

        horizontalLayout_8->addWidget(lineEdit_id);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_tit = new QLineEdit(groupBox);
        lineEdit_tit->setObjectName(QStringLiteral("lineEdit_tit"));
        lineEdit_tit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_tit->setMaxLength(20);

        horizontalLayout_9->addWidget(lineEdit_tit);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_10->addWidget(label_9);

        lineEdit_auteur = new QLineEdit(groupBox);
        lineEdit_auteur->setObjectName(QStringLiteral("lineEdit_auteur"));
        lineEdit_auteur->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_auteur->setMaxLength(20);

        horizontalLayout_10->addWidget(lineEdit_auteur);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));

        horizontalLayout_11->addWidget(label_10);

        lineEdit_date_sortie = new QLineEdit(groupBox);
        lineEdit_date_sortie->setObjectName(QStringLiteral("lineEdit_date_sortie"));
        lineEdit_date_sortie->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_date_sortie->setMaxLength(20);

        horizontalLayout_11->addWidget(lineEdit_date_sortie);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_12->addWidget(label_11);

        lineEdit_exemp = new QLineEdit(groupBox);
        lineEdit_exemp->setObjectName(QStringLiteral("lineEdit_exemp"));
        lineEdit_exemp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_exemp->setMaxLength(3);
        lineEdit_exemp->setEchoMode(QLineEdit::Normal);

        horizontalLayout_12->addWidget(lineEdit_exemp);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_13->addWidget(label_12);

        lineEdit_pos = new QLineEdit(groupBox);
        lineEdit_pos->setObjectName(QStringLiteral("lineEdit_pos"));
        lineEdit_pos->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_pos->setMaxLength(10);

        horizontalLayout_13->addWidget(lineEdit_pos);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_14->addWidget(label_13);

        lineEdit_page = new QLineEdit(groupBox);
        lineEdit_page->setObjectName(QStringLiteral("lineEdit_page"));
        lineEdit_page->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_page->setMaxLength(4);

        horizontalLayout_14->addWidget(lineEdit_page);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_15->addWidget(label_14);

        lineEdit_poids = new QLineEdit(groupBox);
        lineEdit_poids->setObjectName(QStringLiteral("lineEdit_poids"));
        lineEdit_poids->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_poids->setMaxLength(5);

        horizontalLayout_15->addWidget(lineEdit_poids);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_16->addWidget(label_15);

        lineEdit_prix = new QLineEdit(groupBox);
        lineEdit_prix->setObjectName(QStringLiteral("lineEdit_prix"));
        lineEdit_prix->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_prix->setMaxLength(10);

        horizontalLayout_16->addWidget(lineEdit_prix);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_17->addWidget(label_16);

        lineEdit_duree = new QLineEdit(groupBox);
        lineEdit_duree->setObjectName(QStringLiteral("lineEdit_duree"));
        lineEdit_duree->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_duree->setMaxLength(10);

        horizontalLayout_17->addWidget(lineEdit_duree);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_18->addWidget(label_17);

        lineEdit_taille = new QLineEdit(groupBox);
        lineEdit_taille->setObjectName(QStringLiteral("lineEdit_taille"));
        lineEdit_taille->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_taille->setMaxLength(10);

        horizontalLayout_18->addWidget(lineEdit_taille);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        radioButton_livre = new QRadioButton(groupBox);
        radioButton_livre->setObjectName(QStringLiteral("radioButton_livre"));
        radioButton_livre->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout_19->addWidget(radioButton_livre);

        radioButton_cd = new QRadioButton(groupBox);
        radioButton_cd->setObjectName(QStringLiteral("radioButton_cd"));
        radioButton_cd->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout_19->addWidget(radioButton_cd);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout_19->addWidget(radioButton);


        verticalLayout_4->addLayout(horizontalLayout_19);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(pushButton);


        retranslateUi(AjoutDoc);

        QMetaObject::connectSlotsByName(AjoutDoc);
    } // setupUi

    void retranslateUi(QDialog *AjoutDoc)
    {
        AjoutDoc->setWindowTitle(QApplication::translate("AjoutDoc", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("AjoutDoc", "Ajout Document", 0));
        label_id->setText(QApplication::translate("AjoutDoc", "Identifiant                      ", 0));
        label_8->setText(QApplication::translate("AjoutDoc", "Titre                              ", 0));
        label_9->setText(QApplication::translate("AjoutDoc", "Auteur                           ", 0));
        label_10->setText(QApplication::translate("AjoutDoc", "Date de Sortie               ", 0));
        label_11->setText(QApplication::translate("AjoutDoc", "Nombre des exemplaires", 0));
        label_12->setText(QApplication::translate("AjoutDoc", "Position                         ", 0));
        label_13->setText(QApplication::translate("AjoutDoc", "Nombre de pages           ", 0));
        label_14->setText(QApplication::translate("AjoutDoc", "Poids                             ", 0));
        label_15->setText(QApplication::translate("AjoutDoc", "Prix                               ", 0));
        label_16->setText(QApplication::translate("AjoutDoc", "Duree                            ", 0));
        label_17->setText(QApplication::translate("AjoutDoc", "Taille                             ", 0));
        radioButton_livre->setText(QApplication::translate("AjoutDoc", "Livre", 0));
        radioButton_cd->setText(QApplication::translate("AjoutDoc", "CD", 0));
        radioButton->setText(QApplication::translate("AjoutDoc", "PDF", 0));
        pushButton->setText(QApplication::translate("AjoutDoc", "Ajouter", 0));
    } // retranslateUi

};

namespace Ui {
    class AjoutDoc: public Ui_AjoutDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTDOC_H
