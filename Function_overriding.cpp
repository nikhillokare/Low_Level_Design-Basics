#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speak()
    {
        cout << "Hi" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Woof" << endl;
    }
};
int main()
{
    Dog d;
    d.speak();
    return 0;
}