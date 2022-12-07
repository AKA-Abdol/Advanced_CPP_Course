#include "index.hpp"
#include <bits/stdc++.h>

double Triangle::getEnv()
{
    return s1 + s2 + s3;
}

double Triangle::getArea()
{
    double p = getEnv() / 2;
    return sqrt(p * (p - s1) * (p - s2) * (p - s3));
}

Triangle::Triangle(double _s1, double _s2, double _s3)
{
    s1 = _s1;
    s2 = _s2;
    s3 = _s3;
}