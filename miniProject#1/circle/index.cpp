#include<bits/stdc++.h>
#include "index.hpp"
#include "../common/index.hpp"

using namespace std;


Circle::Circle(double _r)
{
    r = _r;
}

double Circle::getArea()
{
    return PI * r * r;
}

double Circle::getEnv()
{
    return 2 * PI * r;
}