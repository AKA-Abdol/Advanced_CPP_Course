#ifndef _SHAPE_
#define _SHAPE_

#include <string>
#include <vector>

class Shape
{
public:
    virtual double getArea() = 0;
    virtual double getEnv() = 0;
};

#endif