/********************************************************************************
** Form generated from reading UI file 'newongle.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWONGLE_H
#define UI_NEWONGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Newongle
{
public:
    QLabel *label;

    void setupUi(QWidget *Newongle)
    {
        if (Newongle->objectName().isEmpty())
            Newongle->setObjectName(QStringLiteral("Newongle"));
        Newongle->resize(711, 468);
        label = new QLabel(Newongle);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 110, 601, 241));
        label->setStyleSheet(QLatin1String("color: rgb(255, 68, 35);\n"
"font: 75 20pt \"Papyrus\";\n"
"text-decoration: underline;"));

        retranslateUi(Newongle);

        QMetaObject::connectSlotsByName(Newongle);
    } // setupUi

    void retranslateUi(QWidget *Newongle)
    {
        Newongle->setWindowTitle(QApplication::translate("Newongle", "Form", 0));
        label->setText(QApplication::translate("Newongle", "MERCI POUR VOTRE Travail", 0));
    } // retranslateUi

};

namespace Ui {
    class Newongle: public Ui_Newongle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWONGLE_H
