#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    currentPlayer=0;
    ui->setupUi(this);
    ui->p1progressBar->setFormat("%v sekuntia");
    ui->p2progressBar->setFormat("%v sekuntia");
    connect(ui->aika2,SIGNAL(clicked(bool)),this,SLOT(handleTimeButtons()));
    connect(ui->aika5,SIGNAL(clicked(bool)),this,SLOT(handleTimeButtons()));
    connect(ui->p1swichPlayerBtn,SIGNAL(clicked(bool)),this,SLOT(handleSwitchPlayer()));
    connect(ui->p2swichPlayerBtn,SIGNAL(clicked(bool)),this,SLOT(handleSwitchPlayer()));
    connect(ui->startGame,SIGNAL(clicked(bool)),this,SLOT(handleStartAndStopGame()));
    connect(ui->stopGame,SIGNAL(clicked(bool)),this,SLOT(handleStartAndStopGame()));

    pQTimer = new QTimer(this);    //tuhoutuu automaattisesti, kun mainwindow tuhoutuu
    pQTimer->setSingleShot(false);// antaa varmasti jatkuvasti timeoutteja
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(updateProgressBar()));
    setGameInfoText("TERVETULOA PELAAMAAN! Anna peliaika jatkaaksesi", 13);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeOut()
{
    pQTimer->stop();
    qDebug() << "Häviävä pelaaja on"<< currentPlayer;
    if (currentPlayer==1){
        currentPlayer++;
        qDebug() << "Voittava pelaaja on"<< currentPlayer;
    }
    else if (currentPlayer==2){
        currentPlayer--;
        qDebug() << "Voittava pelaaja on"<< currentPlayer;
    }
    setGameInfoText("Pelaaja "+ QString::number(currentPlayer)+ " VOITTI!!!", 25);
}

void MainWindow::updateProgressBar()    //päivittää kummankin progressbar olion tilanteen player1Time, player2Time ja gameTime muuttujien perusteella.
{
    if (currentPlayer==1){
        player1Time--;
    }
    else if (currentPlayer==2){
        player2Time--;
    }
    qDebug() << "player1Time: "<< player1Time;
    qDebug() << "player2Time: "<< player2Time;
    ui->p1progressBar->setValue(player1Time);
    ui->p2progressBar->setValue(player2Time);

    if (player1Time==0||player2Time==0){
        timeOut();
    }
}

void MainWindow::setGameInfoText(QString teksti, short f)    //tulostaa ohjetekstejä käyttöliittymän Label olioon ja metodin short parametrilla voidaan valita tuon ohjetekstin fontin koko.
{
    QFont font; // Luo QFont-objekti fontin asettamista varten
    font.setPointSize(f); // Aseta fontin koko annetun parametrin mukaan
    ui->info->setFont(font); // Aseta QLabelin fontiksi määritelty fontti
    ui->info->setText(teksti); // Aseta teksti QLabeliin
}

void MainWindow::handleSwitchPlayer()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;
    qDebug() << "CurrentPlayer: "<< currentPlayer;
    if (name=="p1swichPlayerBtn"&&currentPlayer==1){
        currentPlayer=2;
        setGameInfoText("Vuorossa pelaaja "+ QString::number(currentPlayer), 13);
        qDebug() << "CurrenPlayer vaihdettu: "<< currentPlayer;
    }
    else if (name=="p2swichPlayerBtn"&&currentPlayer==2){
        currentPlayer=1;
        setGameInfoText("Vuorossa pelaaja "+ QString::number(currentPlayer), 13);
        qDebug() << "CurrenPlayer vaihdettu: "<< currentPlayer;
    }
}

void MainWindow::handleStartAndStopGame()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;
    if (name=="stopGame"){
        currentPlayer=0;
        qDebug() << "Peli pysäytetty";
        setGameInfoText("Anna peliaika!", 13);

    }
    else if (name=="startGame"){
        currentPlayer=1;
        qDebug() << "Peli alkaa";
        setGameInfoText("Peli alkaa, vuorossa pelaaja 1!", 13);
        pQTimer->start(1000);   //käynnistetään Timeri juoksemaan 1000ms välein
//        pQTimer->start(100);    //jotta tarkistus on nopempaa, käynnistellään se 100ms välein
    }
}

void MainWindow::handleTimeButtons()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;
    if (name=="aika2"){
        gameTime=120;
        qDebug() << "GameTime "<< gameTime;
    }
    else if (name=="aika5"){
        gameTime=300;
        qDebug() << "GameTime "<< gameTime;
    }
    setGameInfoText("Paina START GAME aloittaaksesi", 13);
    //Päivitetään progressbarien alueet ja arvot sekä playerTimet
    ui->p1progressBar->setRange(0, gameTime);
    ui->p2progressBar->setRange(0, gameTime);
    ui->p1progressBar->setValue(gameTime);
    ui->p2progressBar->setValue(gameTime);
    player1Time=gameTime;
    player2Time=gameTime;
}
