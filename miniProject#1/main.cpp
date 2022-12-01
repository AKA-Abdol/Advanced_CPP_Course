#include<bits/stdc++.h>
#include "shape/index.hpp"
#include "circle/index.hpp"
#include "rectangle/index.hpp"

using namespace std;

#define pb push_back

int main()
{
    vector<Shape *> shapes;
    shapes.pb(new Rectangle(5, 10));
    shapes.pb(new Rectangle(2, 5));
    shapes.pb(new Circle(3));
    shapes.pb(new Circle(14));
    for(Shape *s : shapes)
        cout << s->getArea() << ' ' << s->getEnv() << endl;
}