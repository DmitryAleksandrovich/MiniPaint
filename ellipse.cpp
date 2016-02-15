#include "ellipse.h"

Ellipse::Ellipse(QObject *parent) : Shape(parent)
{

}

void Ellipse::paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*)
{
    QRectF rectangle(getFirstX(), getFirstY(), getSecondX(), getSecondY());
    painter->drawEllipse(rectangle);
}
