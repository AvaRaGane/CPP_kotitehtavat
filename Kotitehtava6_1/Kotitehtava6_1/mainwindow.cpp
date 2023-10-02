#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Count,SIGNAL(clicked()),
            this,SLOT(handleClicked()));

    connect(ui->Reset,SIGNAL(clicked()),
            this,SLOT(handleReset()));
}


MainWindow::~MainWindow()
{
    delete ui;
    ui= nullptr;
}

void MainWindow::handleClicked()
{
    QString luku = ui->lineEdit->text();
    qDebug()<<"Luettiin laatikosta = "<<luku;
    int tulos = luku.toInt();
    tulos = tulos +1;
    ui->lineEdit->setText(QString::number(tulos));
}


void MainWindow::handleReset()
{
    QString luku = ui->lineEdit->text();
    qDebug()<<"Luettiin laatikosta = "<<luku;
    ui->lineEdit->setText(0);
}
