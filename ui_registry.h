/********************************************************************************
** Form generated from reading UI file 'registry.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRY_H
#define UI_REGISTRY_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Registry
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_id;
    QLineEdit *lineEdit_nom;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_prenom;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_age;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_u;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_pw;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *Registry)
    {
        if (Registry->objectName().isEmpty())
            Registry->setObjectName(QStringLiteral("Registry"));
        Registry->resize(432, 333);
        Registry->setStyleSheet(QStringLiteral("background-color: rgb(53, 53, 53);"));
        groupBox = new QGroupBox(Registry);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 20, 331, 291));
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

        lineEdit_nom = new QLineEdit(groupBox);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_nom->setMaxLength(10);

        horizontalLayout_4->addWidget(lineEdit_nom);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_prenom = new QLineEdit(groupBox);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_prenom->setMaxLength(10);

        horizontalLayout_5->addWidget(lineEdit_prenom);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label_4);

        lineEdit_age = new QLineEdit(groupBox);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_age->setMaxLength(2);

        horizontalLayout->addWidget(lineEdit_age);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_u = new QLineEdit(groupBox);
        lineEdit_u->setObjectName(QStringLiteral("lineEdit_u"));
        lineEdit_u->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_u->setMaxLength(20);

        horizontalLayout_3->addWidget(lineEdit_u);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Open Sans\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_pw = new QLineEdit(groupBox);
        lineEdit_pw->setObjectName(QStringLiteral("lineEdit_pw"));
        lineEdit_pw->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_pw->setMaxLength(20);
        lineEdit_pw->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_pw);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton);

        label = new QLabel(Registry);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 310, 171, 16));

        retranslateUi(Registry);

        QMetaObject::connectSlotsByName(Registry);
    } // setupUi

    void retranslateUi(QDialog *Registry)
    {
        Registry->setWindowTitle(QApplication::translate("Registry", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Registry", "SignUp", 0));
        label_id->setText(QApplication::translate("Registry", "Nom           ", 0));
        label_5->setText(QApplication::translate("Registry", "Prenom       ", 0));
        label_4->setText(QApplication::translate("Registry", "Age            ", 0));
        label_2->setText(QApplication::translate("Registry", "Username   ", 0));
        label_3->setText(QApplication::translate("Registry", "Password    ", 0));
        pushButton->setText(QApplication::translate("Registry", "Register", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Registry: public Ui_Registry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRY_H
