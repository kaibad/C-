// pass by refrence

/* when actual values are passed as arguments
to a function,it is called as pass by value.
however,there is another way of passing
arguments to a function ,where the actual values of arguments
are noy passed intead ,the refrence to values is passed.*/

// cpp program to swap two numbers using pass by refrence

#include <iostream>
using namespace std;

void swap(int &a, int &b) // pasing refrence of the a and b
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "before swap:-" << endl;
    cout << "x=" << x << "\ty=" << y << endl;

    swap(x, y);

    cout << "after swap:-" << endl;
    cout << "x=" << x << "\ty=" << y << endl;

    return 0;
}