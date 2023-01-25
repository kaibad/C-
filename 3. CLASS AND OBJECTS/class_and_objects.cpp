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
    ob.length = 10;
    ob.breadth = 5;
    cout << "Length=" << ob.length << endl;
    cout << "Breadth=" << ob.breadth << endl;
    cout << "Area=" << ob.area() << endl;

    return 0;
}