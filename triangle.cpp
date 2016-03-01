#include "triangle.h"

Triangle::Triangle(QObject *parent) : Shape(parent)
{

}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*)
{
    QPointF points[3] = {
        QPointF(getFirstX(), getFirstY()),
        QPointF(getFirstX() - (getSecondX() - getFirstX()), getSecondY()),
        QPointF(getSecondX(), getSecondY())
    };
    painter->drawPolygon(points, countPoints);
}
