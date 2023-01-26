// cpp program to find the area and volune of a box using class and object

#include <iostream>
using namespace std;
class Box
{
public:
    double length;
    double breadth;
    double height;
    double getArea()
    {
        return (length * breadth * height);
    }
    double getVolume()
    {
        return ((length * breadth) + (breadth * height) + (length * height));
    }

    void setDimensions()
    {
        cout << "( " << length << " * ";
        cout << breadth << " * ";
        cout << height << " )" << endl;
    }
};
int main()
{
    Box ob;
    cout << "\n\nEnter the length of the box in m:-";
    cin >> ob.length;
    cout << "\n\nEnter the breadth of thr box in m:-";
    cin >> ob.breadth;
    cout << "\n\nEnter the heigth of the box in m:-";
    cin >> ob.height;

    cout << "\n\nlength:-" << ob.length << " m";
    cout << "\t\tbreadth:-" << ob.breadth << " m";
    cout << "\t\theight:-" << ob.height << " m";

    cout << "\n\nArea:-" << ob.getArea() << " meter square" << endl
         << endl;
    cout << "Volume:-" << ob.getVolume() << " meter cube" << endl
         << endl;

    cout << "Dimensions:-     ";
    ob.setDimensions();
}