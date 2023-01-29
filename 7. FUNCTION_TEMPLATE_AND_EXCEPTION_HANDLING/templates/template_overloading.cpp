#include <iostream>
using namespace std;
template <class A, class B>
void display(A a, B b)
{
    cout << "a= " << a << " b=" << b << endl;
}
template <class A>
void display(A a)
{
    cout << "a=" << a << endl;
}

int main()
{
    display(10.67, 18);
    display('c');
    return 0;
}