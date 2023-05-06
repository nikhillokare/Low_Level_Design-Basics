#include <iostream>
using namespace std;

class Mom
{
public:
    void display()
    {
        cout << "I am mom." << endl;
    }
};
class Dad
{
public:
    void display()
    {
        cout << "I am dad." << endl;
    }
};
class Child : public Mom, public Dad
{
public:
    void display()
    {
        cout << "I am child." << endl;
    }
};
int main()
{
    Child ch;
    ch.display();
    ch.Mom::display();
    ch.Dad::display();
    return 0;
}