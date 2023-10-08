/********************************************************************************
** Form generated from reading UI file 'abonnee.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABONNEE_H
#define UI_ABONNEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Abonnee
{
public:

    void setupUi(QDialog *Abonnee)
    {
        if (Abonnee->objectName().isEmpty())
            Abonnee->setObjectName(QStringLiteral("Abonnee"));
        Abonnee->resize(400, 300);

        retranslateUi(Abonnee);

        QMetaObject::connectSlotsByName(Abonnee);
    } // setupUi

    void retranslateUi(QDialog *Abonnee)
    {
        Abonnee->setWindowTitle(QApplication::translate("Abonnee", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Abonnee: public Ui_Abonnee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABONNEE_H
