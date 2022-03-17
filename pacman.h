#ifndef PACMAN_H
#define PACMAN_H
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>


class pacman : public QObject,public QGraphicsItem
{
    Q_OBJECT
    int posx,posy;
    int velocidad=3;
public:
    pacman(int posx_,int pos_y); //Crea el pac man
//    explicit pacman(QObject *parent = nullptr);

    QTimer * timer; //Moviminto de los sprite
    //Varias imagenes que al unirlas generan un movimiento

    QPixmap * pixmap; // Leer los sprite, movimiento

    float filas, columnas;
    float ancho, alto;
    int getPosx() const;
    void setPosx(int px);
    int getPosy() const;
    void setPosy(int py);

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget=nullptr);
    //Movimiento del Pac-man
    void up();
    void down();
    void left();
    void right();



signals:

public slots:
    void Actualizacion(); //Al undir la tecla se actualiza la imagen


};

#endif // PACMAN_H
