#ifndef _TRI_
#define _TRI_

#include "../shape/index.hpp"
#include <cmath>

class Triangle : public Shape
{
    private:
        double s1, s2, s3;
    
    public:
        Triangle(double _s1, double _s2, double _s3);
        double getArea();
        double getEnv();
};

#endif