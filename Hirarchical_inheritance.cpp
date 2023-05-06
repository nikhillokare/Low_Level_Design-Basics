#include <iostream>
using namespace std;
class Employee
{
public:
    string Profile;
};
class Inter : public Employee
{
public:
    int salary;
};
class FullTime : public Employee
{
public:
    int salary;
};
class Exp : public Employee
{
public:
    int salary;
};
int main()
{
    FullTime f;
    f.salary = 100000;
    f.Profile = "SDE";
    Inter i;
    i.salary = 50000;
    i.Profile = "IT";
    Exp e;
    e.salary = 788880;
    e.Profile = "HR";
    cout << f.Profile << " " << f.salary << endl;
    cout << i.Profile << " " << i.salary << endl;
    cout << e.Profile << " " << e.salary << endl;
    return 0;
}