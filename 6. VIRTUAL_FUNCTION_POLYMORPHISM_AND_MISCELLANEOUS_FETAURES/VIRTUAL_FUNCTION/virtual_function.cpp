// example program of virtual function
#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "display() method of class A";
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "display() method of class B";
    }
};
int main()

{
    B b;
    A *obj = &b;
    obj->display();
    return 0;
}