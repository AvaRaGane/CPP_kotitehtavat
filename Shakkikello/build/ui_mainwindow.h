/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *p1progressBar;
    QProgressBar *p2progressBar;
    QLabel *info;
    QPushButton *p1swichPlayerBtn;
    QPushButton *p2swichPlayerBtn;
    QPushButton *aika2;
    QPushButton *aika5;
    QPushButton *startGame;
    QPushButton *stopGame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(427, 305);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        p1progressBar = new QProgressBar(centralwidget);
        p1progressBar->setObjectName("p1progressBar");
        p1progressBar->setGeometry(QRect(40, 40, 118, 23));
        p1progressBar->setValue(24);
        p2progressBar = new QProgressBar(centralwidget);
        p2progressBar->setObjectName("p2progressBar");
        p2progressBar->setGeometry(QRect(270, 40, 118, 23));
        p2progressBar->setValue(24);
        info = new QLabel(centralwidget);
        info->setObjectName("info");
        info->setGeometry(QRect(8, 110, 411, 51));
        info->setAlignment(Qt::AlignCenter);
        p1swichPlayerBtn = new QPushButton(centralwidget);
        p1swichPlayerBtn->setObjectName("p1swichPlayerBtn");
        p1swichPlayerBtn->setGeometry(QRect(60, 80, 80, 24));
        p2swichPlayerBtn = new QPushButton(centralwidget);
        p2swichPlayerBtn->setObjectName("p2swichPlayerBtn");
        p2swichPlayerBtn->setGeometry(QRect(290, 80, 80, 24));
        aika2 = new QPushButton(centralwidget);
        aika2->setObjectName("aika2");
        aika2->setGeometry(QRect(120, 170, 80, 24));
        aika5 = new QPushButton(centralwidget);
        aika5->setObjectName("aika5");
        aika5->setGeometry(QRect(240, 170, 80, 24));
        startGame = new QPushButton(centralwidget);
        startGame->setObjectName("startGame");
        startGame->setGeometry(QRect(50, 230, 80, 24));
        stopGame = new QPushButton(centralwidget);
        stopGame->setObjectName("stopGame");
        stopGame->setGeometry(QRect(300, 230, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 427, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        p1progressBar->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        info->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        p1swichPlayerBtn->setText(QCoreApplication::translate("MainWindow", "Swich player", nullptr));
        p2swichPlayerBtn->setText(QCoreApplication::translate("MainWindow", "Swich player", nullptr));
        aika2->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        aika5->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startGame->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopGame->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
