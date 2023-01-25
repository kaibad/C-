// kailash badu
// cpp program to understand concept of class and object
#include <iostream>
using namespace std;
class Shape
{
public:
    double length;
    double breadth;
    double area()
    {
        return (length * breadth);
    }
};
int main()
{
    Shape ob;
    cout << "\n\nEnter the length of the  box:-";
    cin >> ob.length;
    // ob.length = 10;
    // ob.breadth = 5;
    cout << "\n\nEnter the breadth of the box:";
    cin >> ob.breadth;
    cout << "\n\nLength=" << ob.length << endl;
    cout << "\n\nBreadth=" << ob.breadth << endl;
    cout << "\n\nArea=" << ob.area() << endl
         << endl;

    return 0;
}