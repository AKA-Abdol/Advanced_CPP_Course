#ifndef _CIRCLE_
#define _CIRCLE_

#include "../shape/index.hpp"

class Circle : public Shape
{
public:
    Circle(double _r);
    double getArea();
    double getEnv();

private:
    double r;
};

#endif