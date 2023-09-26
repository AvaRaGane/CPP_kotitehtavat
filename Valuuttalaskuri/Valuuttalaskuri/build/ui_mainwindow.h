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
#include <QtWidgets/QLineEdit>
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
    QPushButton *Euro2kruunu;
    QLineEdit *lineEdit;
    QPushButton *kruunu2euro;
    QLineEdit *lineEdit_2;
    QLabel *Muunnettava;
    QLabel *muunnettu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Euro2kruunu = new QPushButton(centralwidget);
        Euro2kruunu->setObjectName("Euro2kruunu");
        Euro2kruunu->setGeometry(QRect(130, 200, 101, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(240, 220, 113, 24));
        kruunu2euro = new QPushButton(centralwidget);
        kruunu2euro->setObjectName("kruunu2euro");
        kruunu2euro->setGeometry(QRect(130, 240, 101, 24));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(410, 220, 113, 24));
        Muunnettava = new QLabel(centralwidget);
        Muunnettava->setObjectName("Muunnettava");
        Muunnettava->setGeometry(QRect(260, 190, 71, 21));
        muunnettu = new QLabel(centralwidget);
        muunnettu->setObjectName("muunnettu");
        muunnettu->setGeometry(QRect(410, 190, 71, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        Euro2kruunu->setText(QCoreApplication::translate("MainWindow", "Eurosta kruunuksi", nullptr));
        kruunu2euro->setText(QCoreApplication::translate("MainWindow", "Kruunusta euroksi", nullptr));
        Muunnettava->setText(QCoreApplication::translate("MainWindow", "Muunnettava", nullptr));
        muunnettu->setText(QCoreApplication::translate("MainWindow", "Tulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
