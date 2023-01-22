// pure virtual function
#include <iostream>
using namespace std;
// shape is abstract class here ,you cannot instantiate shape class
class Shape
{
public:
    virtual void area() = 0; // pure virtual function
};
class Rectangle : public Shape
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    void area()
    {
        cout << "AREA:-" << length * breadth << endl;
    }
};
int main()
{
    Rectangle rob(2, 3);
    Shape *obj = &rob;
    obj->area();
    return 0;
}