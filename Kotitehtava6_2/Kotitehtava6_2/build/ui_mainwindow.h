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
    QLineEdit *Number1;
    QLineEdit *Number2;
    QLineEdit *Result;
    QPushButton *N0;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N4;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N7;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *N1;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *div;
    QPushButton *clear;
    QPushButton *enter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(426, 259);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Number1 = new QLineEdit(centralwidget);
        Number1->setObjectName("Number1");
        Number1->setGeometry(QRect(20, 40, 113, 24));
        Number2 = new QLineEdit(centralwidget);
        Number2->setObjectName("Number2");
        Number2->setGeometry(QRect(140, 40, 113, 24));
        Result = new QLineEdit(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(290, 40, 113, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(130, 190, 31, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(130, 90, 31, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(170, 90, 31, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(90, 130, 31, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(130, 130, 31, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(170, 130, 31, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(90, 160, 31, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(130, 160, 31, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(170, 160, 31, 24));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(90, 90, 31, 24));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(220, 90, 31, 24));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(220, 120, 31, 24));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(220, 150, 31, 24));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(220, 180, 31, 24));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(80, 190, 41, 24));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(170, 190, 41, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 61, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 10, 61, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 10, 41, 16));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setEnabled(true);
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 426, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
