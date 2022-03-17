#ifndef MONEDA_H
#define MONEDA_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class moneda : public QObject,public QGraphicsItem
{
    Q_OBJECT
    int posx,posy;
    int velocidad=3; //Velocidad no se usa
public:
    moneda(int posx_,int pos_y); //parametro de las monedas, valor a las variables privadas
//    explicit pacman(QObject *parent = nullptr);


    QPixmap * pixmap;

    float filas, columnas;
    float ancho, alto;
    int getPosx() const; //Devuelve el valor de la posicion
    void setPosx(int px); //Le da el valor a la variable privada
    int getPosy() const;
    void setPosy(int py);

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget=nullptr); //verificacion que no se cree encima de una pared


signals:

public slots:



};


#endif // MONEDA_H
