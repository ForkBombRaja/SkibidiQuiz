/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *exitWarning;
    QPushButton *resumeGameButton;
    QPushButton *confirmButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        exitWarning = new QLabel(Dialog);
        exitWarning->setObjectName("exitWarning");
        exitWarning->setGeometry(QRect(30, 30, 341, 61));
        exitWarning->setAlignment(Qt::AlignCenter);
        resumeGameButton = new QPushButton(Dialog);
        resumeGameButton->setObjectName("resumeGameButton");
        resumeGameButton->setGeometry(QRect(150, 120, 83, 29));
        confirmButton = new QPushButton(Dialog);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(150, 180, 83, 29));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        exitWarning->setText(QCoreApplication::translate("Dialog", "Are you sure you want to quit?", nullptr));
        resumeGameButton->setText(QCoreApplication::translate("Dialog", "Resume", nullptr));
        confirmButton->setText(QCoreApplication::translate("Dialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
