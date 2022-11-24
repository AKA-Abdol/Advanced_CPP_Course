#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Vector
{
private:
    double x;
    double y;
    double get_x(){return x;}
    double get_y(){return y;}

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

int main()
{
    Vector v(3, 4);
    Vector v2 = v + v;
    cout << v2.len() << endl;
    return 0;
}