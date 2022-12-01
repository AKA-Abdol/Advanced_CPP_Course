#include<bits/stdc++.h>
#include "index.hpp"

using namespace std;

Rectangle::Rectangle(double _w, double _h)
{
    w = _w;
    h = _h;
}

double Rectangle::getArea() 
{
    return w * h;
}

double Rectangle::getEnv()
{
    return 2 * (w + h);
}