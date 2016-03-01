#include "shape.h"

Shape::Shape(QObject *parent) : firstX(1), firstY(1), secondX(2), secondY(2),
    QObject(parent), QGraphicsItem()
{

}

QRectF Shape::boundingRect() const
{
    return QRectF(-10, -20, 20, 40);
}

void Shape::setFirstX(float fX)
{
    firstX = fX;
}

void Shape::setFirstY(float fY)
{
    firstY = fY;
}

void Shape::setSecondX(float sX)
{
    secondX = sX;
}

void Shape::setSecondY(float sY)
{
    secondY = sY;
}

float Shape::getFirstX() const
{
    return firstX;
}

float Shape::getFirstY() const
{
    return firstY;
}

float Shape::getSecondX() const
{
    return secondX;
}

float Shape::getSecondY() const
{
    return secondY;
}
