#include <iostream>
#include <math.h>
using namespace std;
class Sum
{
private:
    int x, y, z;

public:
    void add()
    {
        cout << "Enter the numbers: " << endl;
        ;
        cin >> x >> y;
        z = x + y;
        cout << "Sum is: " << z << endl;
    }
};
int main()
{
    Sum s;
    s.add();
    // int n = 4;
    // int power = 3;
    // int result = pow(n, power);
    // cout << "Cube of n is: " << result << endl;
    return 0;
}