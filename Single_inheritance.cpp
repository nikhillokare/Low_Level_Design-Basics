#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int weight;
};
class Male : public Human
{
public:
    void display()
    {
        cout << "Male age " << age << " and weight " << weight << endl;
    }
};
int main()
{
    Male m;
    m.age = 35;
    m.weight = 80;
    m.display();
    return 0;
}