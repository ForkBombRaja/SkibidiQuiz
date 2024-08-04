/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startButton;
    QPushButton *exitButton;
    QLabel *display;
    QPushButton *answerOption1;
    QPushButton *answerOption2;
    QPushButton *answerOption3;
    QToolButton *pauseButton;
    QPushButton *exitGameButton;
    QMenuBar *menubar;
    QMenu *menuSkibidi_Quiz;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(350, 310, 83, 29));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(350, 370, 83, 29));
        display = new QLabel(centralwidget);
        display->setObjectName("display");
        display->setGeometry(QRect(100, 90, 581, 81));
        display->setAlignment(Qt::AlignCenter);
        answerOption1 = new QPushButton(centralwidget);
        answerOption1->setObjectName("answerOption1");
        answerOption1->setGeometry(QRect(300, 260, 171, 41));
        answerOption2 = new QPushButton(centralwidget);
        answerOption2->setObjectName("answerOption2");
        answerOption2->setGeometry(QRect(300, 340, 171, 41));
        answerOption3 = new QPushButton(centralwidget);
        answerOption3->setObjectName("answerOption3");
        answerOption3->setGeometry(QRect(300, 420, 171, 41));
        pauseButton = new QToolButton(centralwidget);
        pauseButton->setObjectName("pauseButton");
        pauseButton->setGeometry(QRect(760, 0, 41, 41));
        exitGameButton = new QPushButton(centralwidget);
        exitGameButton->setObjectName("exitGameButton");
        exitGameButton->setGeometry(QRect(340, 310, 101, 91));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuSkibidi_Quiz = new QMenu(menubar);
        menuSkibidi_Quiz->setObjectName("menuSkibidi_Quiz");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSkibidi_Quiz->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        display->setText(QString());
        answerOption1->setText(QString());
        answerOption2->setText(QString());
        answerOption3->setText(QString());
        pauseButton->setText(QCoreApplication::translate("MainWindow", "| |", nullptr));
        exitGameButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menuSkibidi_Quiz->setTitle(QCoreApplication::translate("MainWindow", "Skibidi Quiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
