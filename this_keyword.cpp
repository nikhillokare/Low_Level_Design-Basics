#include <iostream>
using namespace std;
class Employee
{

public:
    int id;
    string name;
    float salary;
    Employee()
    {
    }
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << " " << endl;
    }
};
int main()
{
    Employee e1 = Employee(1, "Nikhil", 80000.00);
    Employee e2 = Employee(2, "Aniket", 90000.00);
    Employee e3 = Employee(3, "Akhil", 60000.00);
    Employee e4 = Employee(4, "Sanket", 40000.00);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    // Employee E;
    // E.id = 1;
    // E.name = "Nikhil";
    // E.salary = 40000.00;
    // cout << E.id << " " << E.name << " " << E.salary << endl;
    return 0;
}