#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Peli käynnistetty";
    resetHandler();

    //Click handlerit pelinapeille:
    connect(ui->A1,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    connect(ui->A2,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    connect(ui->A3,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    connect(ui->B1,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    connect(ui->B2,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    connect(ui->B3,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    connect(ui->C1,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    connect(ui->C2,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    connect(ui->C3,SIGNAL(clicked(bool)),this,SLOT(gameButtonHandler()));
    //ja restart
    connect(ui->Reset,SIGNAL(clicked(bool)),this,SLOT(resetHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
    ui= nullptr;
}

void MainWindow::gameButtonHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    QString sisalto = button->text();
    qDebug() << "Button name: "<< name;
    qDebug() << "Sen sisältö: "<< sisalto;
    if (sisalto==""){
        qDebug() << "sisältö tyhjä, joten silmukkaan sisään";
        if (name=="A1"){
            qDebug() << "name oli A1, joten silmukkaan sisään";
            ui->A1->setText(pelaaja);
            if (pelaaja=="X"){
                qDebug()<< "pelaaja oli X, joten silmukkaan sisään";
                y1++;
                x1++;
                ya++;
                pelaaja="O";
                qDebug()<<"Uusi pelaaja on"<< pelaaja;
            }
            else if (pelaaja=="O"){
                y1--;
                x1--;
                ya--;
                pelaaja="X";
            }

        }
        if (name=="A2"){
            ui->A2->setText(pelaaja);
            if (pelaaja=="X"){
                y1++;
                x2++;
                pelaaja="O";
            }
            else if (pelaaja=="O"){
                y1--;
                x2--;
                pelaaja="X";
            }
        }
        if (name=="A3"){
            ui->A3->setText(pelaaja);
            if (pelaaja=="X"){
                y1++;
                x3++;
                ay++;
                pelaaja="O";
            }
            else if (pelaaja=="O"){
                y1--;
                x3--;
                ay--;
                pelaaja="X";
            }
        }
        if (name=="B1"){
            ui->B1->setText(pelaaja);
            if (pelaaja=="X"){
                y2++;
                x1++;
                pelaaja="O";
            }
            else if (pelaaja=="O"){
                y2--;
                x1--;
                pelaaja="X";
            }
        }
        if (name=="B2"){
            ui->B2->setText(pelaaja);
            if (pelaaja=="X"){
                y2++;
                x2++;
                ya++;
                ay++;
                pelaaja="O";
            }
            else if (pelaaja=="O"){
                y2--;
                x2--;
                ya--;
                ay--;
                pelaaja="X";
            }
        }
        if (name=="B3"){
            ui->B3->setText(pelaaja);
            if (pelaaja=="X"){
                y2++;
                x3++;
                pelaaja="O";
            }
            else if (pelaaja=="O"){
                y2--;
                x3--;
                pelaaja="X";
            }
        }
        if (name=="C1"){
            ui->C1->setText(pelaaja);
            if (pelaaja=="X"){
                y3++;
                x1++;
                ay++;
                pelaaja="O";
            }
            else if (pelaaja=="O"){
                y3--;
                x1--;
                ay--;
                pelaaja="X";
            }
        }
        if (name=="C2"){
            ui->C2->setText(pelaaja);
            if (pelaaja=="X"){
                y3++;
                x2++;
                pelaaja="O";
            }
            else if (pelaaja=="O"){
                y3--;
                x2--;
                pelaaja="X";
            }
        }
        if (name=="C3"){
            ui->C3->setText(pelaaja);
            if (pelaaja=="X"){
                y3++;
                x3++;
                ya++;
                pelaaja="O";
            }
            else if (pelaaja=="O"){
                y3--;
                x3--;
                ya--;
                pelaaja="X";
            }
        }
        qDebug()<<"if lauseet käyty läpi, pelaaja on "<< pelaaja;
        ui->Teksti->setText("Vuorossa pelaaja "+ pelaaja);
        qDebug() <<"y1="<<y1;
        qDebug() <<"y2="<<y2;
        qDebug() <<"y3="<<y3;
        qDebug() <<"x1="<<x1;
        qDebug() <<"x2="<<x2;
        qDebug() <<"x3="<<x3;
        qDebug() <<"ya="<<ya;
        qDebug() <<"ay="<<ay;
        if (y1==3||y2==3||y3==3||x1==3||x2==3||x3==3||ya==3||ay==3){
            ui->Teksti->setText("Pelaaja X voitti!");
            ui->A1->setText("X");
            ui->A2->setText("X");
            ui->A3->setText("X");
            ui->B1->setText("X");
            ui->B2->setText("X");
            ui->B3->setText("X");
            ui->C1->setText("X");
            ui->C2->setText("X");
            ui->C3->setText("X");
        }
        else if (y1==-3||y2==-3||y3==-3||x1==-3||x2==-3||x3==-3||ya==-3||ay==-3){
            ui->Teksti->setText("Pelaaja O voitti!");
            ui->A1->setText("O");
            ui->A2->setText("O");
            ui->A3->setText("O");
            ui->B1->setText("O");
            ui->B2->setText("O");
            ui->B3->setText("O");
            ui->C1->setText("O");
            ui->C2->setText("O");
            ui->C3->setText("O");
        }

    }
}

void MainWindow::resetHandler()
{
    y1=0;
    y2=0;
    y3=0;
    x1=0;
    x2=0;
    x3=0;
    ya=0;
    ay=0;
    pelaaja="X";
    ui->Teksti->setText("Vuorossa pelaaja "+ pelaaja);
    ui->A1->setText("");
    ui->A2->setText("");
    ui->A3->setText("");
    ui->B1->setText("");
    ui->B2->setText("");
    ui->B3->setText("");
    ui->C1->setText("");
    ui->C2->setText("");
    ui->C3->setText("");
    qDebug() << "Peli nollattu";
}
