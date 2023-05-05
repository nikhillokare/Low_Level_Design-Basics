#include <iostream>
using namespace std;
class Rectangle
{

    // properties
    int length;
    int breadth;

public:
    void Area(int l, int b)
    {
        length = l;
        breadth = b;
        int area = l * b;
        cout << "Area of rectangle is: " << area << endl;
    }
};
int main()
{
    Rectangle r;
    r.Area(10, 20);
    return 0;
}