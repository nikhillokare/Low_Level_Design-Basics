#include <iostream>
using namespace std;
class Car
{
    string name;
    int num;

public:
    Car(string a, int n)
    {
        cout << "Called Constructor" << endl;
        this->name = a;
        this->num = n;
    }
    void Enter()
    {
        cin >> name;
        cin >> num;
    }
    void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Number: " << num << endl;
    }
};
int main()
{
    Car *p = new Car("BMW", 1234);
    p->Display();
    return 0;
}