#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    state=0;
    //resetLineEdits();
    ui->setupUi(this);

    //Click handlerit numeronapeille:
    connect(ui->N0,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N1,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N2,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N3,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N4,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N5,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N6,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N7,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N8,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->N9,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));

    //..operaattoreille:
    connect(ui->add,SIGNAL(clicked()),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->mul,SIGNAL(clicked()),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->div,SIGNAL(clicked()),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->sub,SIGNAL(clicked()),this,SLOT(addSubMulDivClickHandler()));

    //..enter ja clear:
    connect(ui->enter,SIGNAL(clicked()),this,SLOT(clearAndEnterClickHandler()));
    connect(ui->clear,SIGNAL(clicked()),this,SLOT(clearAndEnterClickHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
    ui= nullptr;

}

void MainWindow::numberClickedHandler()
{
    while (state==0){
        QString luettuluku = ui->Number1->text();
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name = button->objectName(), numero=number1 + name.last(1);
        qDebug() << "Syöttölaatikko number1 luettu: "<< luettuluku;
        qDebug() << "Button name: "<< name;
        qDebug() << "Pressed Number : "<< numero;
        qDebug() << "New Number : "<< luettuluku+numero;
        ui->Number1->setText(luettuluku+numero);
        break;
    }

    while (state>0){
        QString luettuluku = ui->Number2->text();
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name = button->objectName(), numero=number2 + name.last(1);
        qDebug() << "Syöttölaatikko number2 luettu: "<< luettuluku;
        qDebug() << "Button name: "<< name;
        qDebug() << "Pressed number : "<< numero;
        qDebug() << "New Number : "<< luettuluku+numero;
        ui->Number2->setText(luettuluku+numero);
        break;
    }

    }

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;

    if (name=="clear"){
        resetLineEdits();
    }

    if (name=="enter"){
        QString luettuluku1 = ui->Number1->text();
        qDebug() << "luettuluku1: "<< luettuluku1;
        QString luettuluku2 = ui->Number2->text();
        qDebug() << "luettuluku2: "<< luettuluku2;
        float luku1=luettuluku1.toFloat();
        float luku2=luettuluku2.toFloat();

        if (operand==1){
            result=luku1+luku2;
        }
        if (operand==2){
            result=luku1-luku2;
        }
        if (operand==3){
            result=luku1*luku2;
        }
        if (operand==4){
            result=luku1/luku2;
        }
        ui->Result->setText(QString::number(result));
    }
}
void MainWindow::addSubMulDivClickHandler()
{

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;
    if (name=="add"){
        operand=1;
        qDebug() << "Operand: "<< operand;
    }
    if (name=="sub"){
        operand=2;
        qDebug() << "Operand: "<< operand;
    }
    if (name=="mul"){
        operand=3;
        qDebug() << "Operand: "<< operand;
    }
    if (name=="div"){
        operand=4;
        qDebug() << "Operand: "<< operand;
    }
    state++;
}

void MainWindow::resetLineEdits()
{
    state=0;
    operand=0;
    number1="";
    number2="";
    result=0;
    ui->Number1->setText("");
    ui->Number2->setText("");
    ui->Result->setText("");
}
