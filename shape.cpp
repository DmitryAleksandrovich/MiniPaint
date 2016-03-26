#include "shape.h"

Shape::Shape(QObject *parent) : firstX(firstCoord), firstY(firstCoord),
    secondX(secondCoord), secondY(secondCoord), QObject(parent), QGraphicsItem()
{

}

QRectF Shape::boundingRect() const
{
    return QRectF(getFirstX(), getFirstY(), getSecondX(), getSecondY());
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
