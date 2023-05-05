#include <iostream>
using namespace std;
class Animal
{
protected:
    int age;
    int weight;

public:
    Animal()
    {
        age = 25;
        weight = 60;
    }
};

class Dog : public Animal
{

public:
    void display()
    {
        cout << "Age " << age << " "
             << "Weight " << weight << endl;
    }
};
int main()
{
    Dog d;
    d.display();
    return 0;
}