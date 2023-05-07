#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    int mul(int a, int b)
    {
        return a * b;
    }
    int div(int a, int b)
    {
        return a / b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }
};
int main()
{
    Calculator cals;
    cout << cals.add(1, 2) << endl;
    cout << cals.add(1, 2, 3) << endl;
    cout << cals.mul(1, 2) << endl;
    cout << cals.div(1, 2) << endl;
    cout << cals.sub(1, 2) << endl;
    return 0;
}