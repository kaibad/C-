// concept of function overloading
// function overloading using different data type

/*In C++, function overloading is a feature that allows multiple
functions with the same name to be defined in the same scope.
The functions differ from each other by the number or type of their parameters.
When a function with a matching name is called, the compiler selects the correct
function to call based on the number and type of the arguments passed to the function.
This allows for the creation of more readable and maintainable code, as a single
function name can be used for multiple actions that perform similar tasks with different inputs.*/

#include <iostream>
using namespace std;
void display(int a)
{
    cout << "a=" << a << endl;
}
void display(double a)
{
    cout << "a=" << a << endl;
}

int main()

{
    display(10);
    display(20.5);

    return 0;
}