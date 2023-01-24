/*conversion_using_cast_operator:-
                   a cast operator is an unary operator
which forces one data type to be converted into another data type.

c++ supports four types of casting
     1.static cast
     2.dynamic cast
     3.const cast
     4.Reinterrupt cast*/

// program
#include <iostream>
using namespace std;

int main()
{
    float f = 3.5;
    int b = static_cast<int>(f);
    cout << b;
    return 0;
}
