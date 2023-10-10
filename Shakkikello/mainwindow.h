#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qtimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeOut();
private:
    Ui::MainWindow *ui;
    void setGameInfoText(QString, short);   //tulostaa ohjetekstejä käyttöliittymän Label olioon ja metodin short parametrilla voidaan valita tuon ohjetekstin fontin koko.
    short player1Time, player2Time; //muuttujat pelaajien peliaikoja varten
    short currentPlayer;    //muuttuja jolla nähdään kumpi pelaaja on vuorossa
    short gameTime;         //muuttuja johon tallennetaan valittu peliaika
    QTimer * pQTimer;

private slots:
    void handleSwitchPlayer();
    void handleStartAndStopGame();
    void handleTimeButtons();
    void updateProgressBar();       //päivittää kummankin progressbar olion tilanteen player1Time, player2Time ja gameTime muuttujien perusteella.
};
#endif // MAINWINDOW_H
