/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2_password;
    QRadioButton *radioadmin;
    QRadioButton *radiouser;
    QRadioButton *radioButton_invite;
    QPushButton *pushButton_login;
    QPushButton *pushButton_Registry;
    QLabel *label_picture;
    QLabel *label_db;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(753, 539);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(53, 53, 53);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(270, 40, 461, 381));
        groupBox->setStyleSheet(QLatin1String("background-color: rgb(22, 22, 22);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 italic 14pt \"Nirmala UI\";"));

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_username->setMaxLength(20);

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 italic 14pt \"Nirmala UI\";"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2_password = new QLineEdit(groupBox);
        lineEdit_2_password->setObjectName(QStringLiteral("lineEdit_2_password"));
        lineEdit_2_password->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2_password->setMaxLength(20);
        lineEdit_2_password->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_2->addWidget(lineEdit_2_password);


        verticalLayout->addLayout(horizontalLayout_2);

        radioadmin = new QRadioButton(groupBox);
        radioadmin->setObjectName(QStringLiteral("radioadmin"));
        radioadmin->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        verticalLayout->addWidget(radioadmin);

        radiouser = new QRadioButton(groupBox);
        radiouser->setObjectName(QStringLiteral("radiouser"));
        radiouser->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        verticalLayout->addWidget(radiouser);

        radioButton_invite = new QRadioButton(groupBox);
        radioButton_invite->setObjectName(QStringLiteral("radioButton_invite"));
        radioButton_invite->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS PGothic\";"));

        verticalLayout->addWidget(radioButton_invite);

        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_login);

        pushButton_Registry = new QPushButton(groupBox);
        pushButton_Registry->setObjectName(QStringLiteral("pushButton_Registry"));
        pushButton_Registry->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 56, 236, 255), stop:1 rgba(124, 131, 255, 255));\n"
"font: 75 10pt \"Algerian\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Registry);

        label_picture = new QLabel(centralWidget);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(10, 80, 231, 311));
        label_db = new QLabel(centralWidget);
        label_db->setObjectName(QStringLiteral("label_db"));
        label_db->setGeometry(QRect(30, 440, 251, 61));
        label_db->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 italic 14pt \"Nirmala UI\";"));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "LogIn", 0));
        label->setText(QApplication::translate("MainWindow", "Username        ", 0));
        label_2->setText(QApplication::translate("MainWindow", "Password         ", 0));
        radioadmin->setText(QApplication::translate("MainWindow", "Admin", 0));
        radiouser->setText(QApplication::translate("MainWindow", "Abonn\303\251", 0));
        radioButton_invite->setText(QApplication::translate("MainWindow", "Invit\303\251", 0));
        pushButton_login->setText(QApplication::translate("MainWindow", "Login", 0));
        pushButton_Registry->setText(QApplication::translate("MainWindow", "Registery", 0));
        label_picture->setText(QString());
        label_db->setText(QApplication::translate("MainWindow", "[+] Status", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
