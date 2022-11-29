#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#define PI 3.14 // preprocessors
#define FOR(i, a, b) for (int i = (a); (i) < (b); ++(i))
#define rof(i, a, b) for (int i = (a); (i) > b; --(i))
#define coud(a, b) fixed << setprecision((b)) << (a)

using namespace std;

class Vector
{
private:
    double x;
    double y;
    double get_x() { return x; }
    double get_y() { return y; }

public:
    // constructor
    Vector() {}
    Vector(double _x, double _y);
    // methods definition
    double len();
    double grad();

    // operator overloading
    // this keyword
    Vector operator+(Vector v)
    {
        Vector out(x + v.get_x(), y + v.get_y());
        return out;
    }
    Vector operator*(double rate);

// protected:

};

// constructor implementation
Vector::Vector(double _x, double _y)
{
    x = _x;
    y = _y;
}
// implementation
double Vector::len()
{
    return sqrt(x * x + y * y);
}
double Vector::grad()
{
    return y / x;
}

Vector Vector::operator*(double rate)
{
    Vector new_vect(x * rate, y * rate);
    return new_vect;
}

int main()
{
    // Vector v(3, 4);
    // Vector v2 = v + v;
    // cout << v2.len() << endl;
    // Vector test = v * 3;
    // cout << test.len() << endl;
    // cout << "is it same grad: " << (test.grad() == v.grad()) << endl;
    // rof(i, 10, 0)
    // cout << i << endl;
    Vector v(3, 5);
    cout << "with 7 prec: " <<  coud(v.grad(), 7) << endl;
    return 0;
}