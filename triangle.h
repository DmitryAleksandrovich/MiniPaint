#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape
{
public:
    Triangle(QObject *parent = 0);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*);
private:
    enum{countPoints = 3};
};

#endif // TRIANGLE_H
