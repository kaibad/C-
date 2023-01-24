/*In C++, function overloading is a feature that allows multiple
functions with the same name to be defined in the same scope.
The functions differ from each other by the number or type of their parameters.
When a function with a matching name is called, the compiler selects the correct
function to call based on the number and type of the arguments passed to the function.
This allows for the creation of more readable and maintainable code, as a single
function name can be used for multiple actions that perform similar tasks with different inputs.*/

// function overloading using different number of parameter.

#include <iostream>
using namespace std;
int sum(int a)
{
    int res = 10;
    res = res + a;
    return res;
}
int sum(int a, int b)
{
    int res = a + b;
    return res;
}
double sum(double a, double b)
{
    double res = a + b;
    return res;
}
int sum(int a, int b, int c)
{
    int res = a + b + c;
    return res;
}

int main()
{
    cout << sum(10) << endl;
    cout << sum(10, 20) << endl;
    cout << sum(20.50, 30.5) << endl;
    cout << sum(10, 20, 30) << endl;

    return 0;
}
