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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *A1;
    QPushButton *B1;
    QPushButton *C1;
    QPushButton *B2;
    QPushButton *A2;
    QPushButton *C2;
    QPushButton *B3;
    QPushButton *A3;
    QPushButton *C3;
    QPushButton *Reset;
    QLabel *Teksti;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(501, 384);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        A1 = new QPushButton(centralwidget);
        A1->setObjectName("A1");
        A1->setGeometry(QRect(60, 80, 80, 71));
        B1 = new QPushButton(centralwidget);
        B1->setObjectName("B1");
        B1->setGeometry(QRect(160, 80, 80, 71));
        C1 = new QPushButton(centralwidget);
        C1->setObjectName("C1");
        C1->setGeometry(QRect(260, 80, 80, 71));
        B2 = new QPushButton(centralwidget);
        B2->setObjectName("B2");
        B2->setGeometry(QRect(160, 170, 80, 71));
        A2 = new QPushButton(centralwidget);
        A2->setObjectName("A2");
        A2->setGeometry(QRect(60, 170, 80, 71));
        C2 = new QPushButton(centralwidget);
        C2->setObjectName("C2");
        C2->setGeometry(QRect(260, 170, 80, 71));
        B3 = new QPushButton(centralwidget);
        B3->setObjectName("B3");
        B3->setGeometry(QRect(160, 260, 80, 71));
        A3 = new QPushButton(centralwidget);
        A3->setObjectName("A3");
        A3->setGeometry(QRect(60, 260, 80, 71));
        C3 = new QPushButton(centralwidget);
        C3->setObjectName("C3");
        C3->setGeometry(QRect(260, 260, 80, 71));
        Reset = new QPushButton(centralwidget);
        Reset->setObjectName("Reset");
        Reset->setGeometry(QRect(400, 170, 80, 71));
        Teksti = new QLabel(centralwidget);
        Teksti->setObjectName("Teksti");
        Teksti->setGeometry(QRect(70, 20, 261, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 501, 21));
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
        A1->setText(QString());
        B1->setText(QCoreApplication::translate("MainWindow", "trsgfd", nullptr));
        C1->setText(QString());
        B2->setText(QString());
        A2->setText(QString());
        C2->setText(QString());
        B3->setText(QString());
        A3->setText(QString());
        C3->setText(QString());
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        Teksti->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
