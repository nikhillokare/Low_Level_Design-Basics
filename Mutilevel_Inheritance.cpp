#include <iostream>
using namespace std;

class Car
{
public:
    string carType;
    void display1()
    {
        cout << "this is Car" << endl;
    }
};
class Toyota : public Car
{
public:
    string country;
    void display2()
    {
        cout << "this is Toyota" << endl;
    }
};
class Innova : public Toyota
{
public:
    double price;
    void display3()
    {
        cout << "this is innova" << endl;
    }
};
int main()
{
    Innova i;
    i.carType = "Suv";
    i.country = "India";
    i.price = 890000;
    cout << i.carType << " " << i.country << " " << i.price << endl;
    i.display1();
    i.display2();
    i.display3();
    return 0;
}