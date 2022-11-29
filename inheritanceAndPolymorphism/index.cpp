#include <bits/stdc++.h>
#include <cstring>

using namespace std;

class Hero
{
private:
    string name;

protected:
    double hitPerFrame;
    double hp;
    int cost;

public:
    Hero(string _name);
};

Hero::Hero(string _name)
{
    name = "___" + _name + "___";
}

class Rostam : public Hero
{
public:
    Rostam();
    void test();
};

Rostam::Rostam()
    : Hero("Rostam")
{
    hitPerFrame = 9.5;
    hp = 100;
    cost = 25;
}

int main()
{
}

// Hero {
//     name,
//     hitPerFrame,
//     hp,
//     cost,
// }