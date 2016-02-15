#include "rectangle.h"

Rectangle::Rectangle(QObject *parent) : Shape(parent)
{

}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*)
{
    painter->drawRoundedRect(getFirstX(), getFirstY(), getSecondX(), getSecondY(), 0, 0);
}

