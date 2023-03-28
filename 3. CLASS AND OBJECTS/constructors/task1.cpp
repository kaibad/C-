// cpp program that has all the conctructors at once
#include <iostream>
using namespace std;
class Rectangle
{
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
};
int Rectangle::area()
{
    return (length * breadth);
}
Rectangle::Rectangle()
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
    Rectangle ob1, ob2(2, 10);
    cout << "area :-" << ob1.area() << endl;
    cout << "area :-" << ob2.area() << endl;
    Rectangle ob3 = ob1;
    cout << "area :-" << ob3.area() << endl;

    return 0;
}