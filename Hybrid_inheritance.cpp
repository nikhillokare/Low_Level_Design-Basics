#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "this is vehicle" << endl;
    }
};
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "this is car" << endl;
    }
};

class Racing
{
public:
    Racing()
    {
        cout << "this is racing" << endl;
    }
};
class Ferrari : public Car, public Racing
{
public:
    Ferrari()
    {
        cout << "this is ferrari" << endl;
    }
};
int main()
{
    Ferrari f;
    return 0;
}