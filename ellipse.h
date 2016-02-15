#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

class Ellipse : public Shape
{
public:
    Ellipse(QObject *parent = 0);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*);
};

#endif // ELLIPSE_H
