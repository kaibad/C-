/*A member function of a class is a function that has its
definitionmor its prototype within the class definition
like any other variable.It operates an any object of the class
of which it is a member of a class for that object*/

#include <iostream>
using namespace std;
// define  a class called as box
class Box
{
public:
    double length;
    double breadth;
    double height;

    // member function getArea() defined within class definition
    double getArea()
    {
        return length * breadth;
    }
    double getVolume();
};
// function getVolume() defined outside class using scope reslution operator

double Box::getVolume()
{
    return (length * breadth * height);
}
int main()

{
    Box b1; // b1 is an object of type class
    // b1.length = 10; // object access member variable using dot. .
    // b1.breadth = 15;
    // b1.height = 20;
    cout << "\n\nEnter the length of the box:-";
    cin >> b1.length;
    cout << "\n\nEnter the breadth of the box:-";
    cin >> b1.breadth;
    cout << "\n\nEnter the height of the box:-";
    cin >> b1.height;
    cout << "\n\nVolume of box:-->" << b1.getVolume() << " meter cube" << endl
         << endl;

    cout << "Area of box:----->" << b1.getArea() << " meter square" << endl
         << endl;

    return 0;
}