#include "rectangle.h"

Rectangle::Rectangle(QObject *parent) : Shape(parent)
{

}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*)
{
    painter->drawRect(getFirstX(), getFirstY(), getSecondX(), getSecondY());
}
