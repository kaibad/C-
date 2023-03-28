// program to compare the area and return the greater area
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();                   // default constructor
    Rectangle(int l, int b);       // parametrized constructor
    Rectangle(const Rectangle &ob) // copy constructor
    {
        length = ob.length;
        breadth = ob.breadth;
    }
    int area();
    Rectangle compare(Rectangle r1, Rectangle r2)
    {
        if (r1.area() > r2.area())
        {
            cout << "area of the first rectangle is greater." << endl;
            return r1;
        }
        else
        {
            cout << "the area of the second rectangle is greater." << endl;
            return r2;
        }
    }
};
int Rectangle::area() // define area funtion
{
    return (length * breadth);
}
Rectangle::Rectangle() // define default constructor

{
    length = 10;
    breadth = 20;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int main()
{
    Rectangle ob1, ob2(2, 10), ob4(10, 30);
    cout << "area using default constructor:-" << ob1.area() << endl;
    cout << "area using parametrized constructor:-" << ob2.area() << endl;
    Rectangle ob3 = ob2;
    cout << "area using copy constructor:-" << ob3.area() << endl;
    Rectangle temp = ob3.compare(ob3, ob4);
    cout << "The greater area is:-" << temp.area() << endl;

    return 0;
}