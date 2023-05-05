#include <iostream>
using namespace std;
class Human
{
public:
    // properties
    int age;
    int weight;

    // default constructor
    Human()
    {
        cout << "this is Default constructor" << endl;
    }

    // Parameterized constructor
    Human(int age, int weight)
    {
        this->age = age;
        this->weight = weight;

        cout << "this is parameterized constructor by passing both  age and weight " << age << " & " << weight << endl;
    }

    // Parameterized constructor
    // constrctor Overloading
    Human(int age)
    {
        this->age = age;
        cout << "this is parameterized constructor with overloading by passing just only one age " << age << endl;
    }

    // copy constructor
    Human(const Human &h)
    {
        age = h.age;
        weight = h.weight;
        cout << "this is copy of Human constructor " << age << " & " << weight << endl;
    }

    // Behaviour
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    void eat()
    {
        cout << "eating" << endl;
    }
};
int main()
{
    Human h;
    cout << "i cam outside the constructor class" << endl;
    h.age = 25;
    h.weight = 45;
    cout << h.age << endl;
    cout << h.weight << endl;
    Human(27, 70);
    Human(45);
    Human nik = h;
    h.sleep();
    h.eat();
    return 0;
}