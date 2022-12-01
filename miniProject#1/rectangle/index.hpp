#ifndef _RECT_
#define _RECT_

#include "../shape/index.hpp"

class Rectangle : public Shape
{
private:
    double w;
    double h;

public:
    Rectangle(double _w, double _h);
    double getArea();
    double getEnv();
};

#endif