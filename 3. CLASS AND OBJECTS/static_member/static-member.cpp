/*We can define class memberd static using static keyword.When we Declare a member of a class as static it means no matter how many objcts
of that class are created ,there is only one copy of the static member.
A static member is shared by all objects of the class .All ststic data is initialised to zero when the first object is created
,if no other initialization is present

static dunction members;
    by declaring a function member  as atatic ,you can make it independent any particular object of the class.As tatic member funtion can be called even if no objects of the class exits
    and the statix funtions are accessed using only the class name and the scope resolution operator(::)  */

#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    static int objCount;
    Rectangle(int l, int b);
    static int getCount()
    {
        return objCount;
    }
};
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
    objCount++;
}
int Rectangle::objCount = 0;
int main()
{
    Rectangle r(10, 20);
    Rectangle s(5, 10);
    cout << "number of object created " << Rectangle::objCount << endl;
    cout << "number of object created " << Rectangle::getCount() << endl;
    return 0;
}