#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(QObject *parent = 0);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*);
};

#endif // RECTANGLE_H
