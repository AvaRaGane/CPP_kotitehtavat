#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , kurssi(0.084)
{
    ui->setupUi(this);

    //lähettäjän osoite, lähettäjän signaali, vastaanottajan osoite, vastaanottajan slot funktio
    connect(ui->Euro2kruunu,SIGNAL(clicked()),
            this,SLOT(handleEuro2Kruunu()));

    connect(ui->kruunu2euro,SIGNAL(clicked()),
            this,SLOT(handleKruunu2Euro()));
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::handleKruunu2Euro()
{
    QString luku = ui->lineEdit->text();
    qDebug()<<"Luettiin laatikosta teksti ="<<luku;
    float tulos = luku.toFloat();
    tulos = tulos * kurssi;
    ui->lineEdit_2->setText(QString::number(tulos));
}

void MainWindow::handleEuro2Kruunu()
{
    QString luku = ui->lineEdit->text();
    qDebug()<<"Luettiin laatikosta teksti ="<<luku;
    float tulos = luku.toFloat();
    tulos = tulos / kurssi;
    ui->lineEdit_2->setText(QString::number(tulos));
}

