#include <iostream>
using namespace std;

class Addition
{
public:
    Addition(int t = 0)
    {
        total = t;
    }

    void addNum(int number)
    {
        total += number;
    }

    int getTotal()
    {
        return total;
    }

private:
    int total;
};
int main()
{
    Addition a;
    a.addNum(1);
    a.addNum(2);
    a.addNum(3);

    cout << "Total" << a.getTotal() << endl;
    return 0;
}