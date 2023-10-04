#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
/* luodaan muuttujat rivipisteiden laskemista varten.
 * y:t pystyrivit
 * x:t vaakarivit
 * ya=a1-c3, ay=a3-c1
*/
    int y1, y2, y3, x1, x2, x3, ya,ay;

    QString pelaaja;       //X ja O

private slots:
    void gameButtonHandler();
    void resetHandler();
};
#endif // MAINWINDOW_H
