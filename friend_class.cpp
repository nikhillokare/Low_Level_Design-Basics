#include <iostream>
using namespace std;

class Animal
{
    int age;
    int weight;

public:
    Animal()
    {
        age = 25;
        weight = 70;
    }
    friend class Dog;
};
class Dog
{
public:
    void Display(Animal &t)
    {
        cout << endl
             << "Age " << t.age;
        cout << endl
             << "Weight " << t.weight;
    }
};
int main()
{
    Animal A;
    Dog D;
    D.Display(A);
    return 0;
}