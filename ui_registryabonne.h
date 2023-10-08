/********************************************************************************
** Form generated from reading UI file 'registryabonne.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRYABONNE_H
#define UI_REGISTRYABONNE_H

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

class Ui_RegistryAbonne
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_id;
    QLineEdit *lineEdit_num_tel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_ad;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_adm;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_date_ab;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *label_date_exp;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_ch;
    QPushButton *pushButton_pay;
    QLabel *label;

    void setupUi(QDialog *RegistryAbonne)
    {
        if (RegistryAbonne->objectName().isEmpty())
            RegistryAbonne->setObjectName(QStringLiteral("RegistryAbonne"));
        RegistryAbonne->resize(551, 433);
        RegistryAbonne->setStyleSheet(QStringLiteral("background-color: rgb(53, 53, 53);"));
        groupBox = new QGroupBox(RegistryAbonne);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 40, 371, 351));
        groupBox->setStyleSheet(QLatin1String("background-color: rgb(22, 22, 22);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_id = new QLabel(groupBox);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(label_id);

        lineEdit_num_tel = new QLineEdit(groupBox);
        lineEdit_num_tel->setObjectName(QStringLiteral("lineEdit_num_tel"));
        lineEdit_num_tel->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_num_tel->setMaxLength(8);

        horizontalLayout_4->addWidget(lineEdit_num_tel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_ad = new QLineEdit(groupBox);
        lineEdit_ad->setObjectName(QStringLiteral("lineEdit_ad"));
        lineEdit_ad->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_ad->setMaxLength(20);

        horizontalLayout_5->addWidget(lineEdit_ad);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label_4);

        lineEdit_adm = new QLineEdit(groupBox);
        lineEdit_adm->setObjectName(QStringLiteral("lineEdit_adm"));
        lineEdit_adm->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_adm->setMaxLength(20);

        horizontalLayout->addWidget(lineEdit_adm);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_date_ab = new QLineEdit(groupBox);
        lineEdit_date_ab->setObjectName(QStringLiteral("lineEdit_date_ab"));
        lineEdit_date_ab->setEnabled(false);
        lineEdit_date_ab->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_date_ab->setMaxLength(10);

        horizontalLayout_3->addWidget(lineEdit_date_ab);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_3);

        label_date_exp = new QLineEdit(groupBox);
        label_date_exp->setObjectName(QStringLiteral("label_date_exp"));
        label_date_exp->setEnabled(false);
        label_date_exp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_date_exp);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout_6->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout_6->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        horizontalLayout_6->addWidget(radioButton_3);


        verticalLayout->addLayout(horizontalLayout_6);

        pushButton_ch = new QPushButton(groupBox);
        pushButton_ch->setObjectName(QStringLiteral("pushButton_ch"));
        pushButton_ch->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_ch);

        pushButton_pay = new QPushButton(groupBox);
        pushButton_pay->setObjectName(QStringLiteral("pushButton_pay"));
        pushButton_pay->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_pay);

        label = new QLabel(RegistryAbonne);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 400, 171, 16));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 italic 14pt \"Nirmala UI\";"));

        retranslateUi(RegistryAbonne);

        QMetaObject::connectSlotsByName(RegistryAbonne);
    } // setupUi

    void retranslateUi(QDialog *RegistryAbonne)
    {
        RegistryAbonne->setWindowTitle(QApplication::translate("RegistryAbonne", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("RegistryAbonne", "Abonnement", 0));
        label_id->setText(QApplication::translate("RegistryAbonne", "Num_tel                ", 0));
        label_5->setText(QApplication::translate("RegistryAbonne", "Adresse                ", 0));
        label_4->setText(QApplication::translate("RegistryAbonne", "Adresse_mail        ", 0));
        label_2->setText(QApplication::translate("RegistryAbonne", "Date_abonnement", 0));
        label_3->setText(QApplication::translate("RegistryAbonne", "Date_expiration    ", 0));
        radioButton->setText(QApplication::translate("RegistryAbonne", "1 Mois", 0));
        radioButton_2->setText(QApplication::translate("RegistryAbonne", "6 Mois", 0));
        radioButton_3->setText(QApplication::translate("RegistryAbonne", "1 ans", 0));
        pushButton_ch->setText(QApplication::translate("RegistryAbonne", "Charger", 0));
        pushButton_pay->setText(QApplication::translate("RegistryAbonne", "Payer", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegistryAbonne: public Ui_RegistryAbonne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRYABONNE_H
