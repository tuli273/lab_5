#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMediaPlayer>
#include <iostream>
#include <fstream>
#include <QMainWindow>
#include <QPainter>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QDesktopWidget>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QWidget>
#include <QTimer>
#include "pacman.h"
#include "moneda.h"
#include "pared.h"

using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public: //objetos que van aparecer en la pantalla
    MainWindow(QWidget *parent = nullptr); //Parametros de las monedas y las paredes
    ~MainWindow();
    QList<moneda *> monedas;
    QList<pared *> paredes;
private slots:
       void timer_timeout();

private: //Se va a crear el personaje, con que se mueve el personaje y se van a crear las monedas
    Ui::MainWindow *ui;

    QGraphicsScene *scene;
    pacman *personaje;
    void keyPressEvent(QKeyEvent * evento);
    QList<moneda *> eliminarMoneda(QList<moneda *> monedas,int pos);
    int tiempo(int x);
    void nuevojuego();

    float x,y,ancho,alto;
};
#endif // MAINWINDOW_H
