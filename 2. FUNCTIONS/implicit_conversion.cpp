/*type conversion refers to changing an entity of one
datatype into another.There are two types of conversion
i.e implicit and explicit.
it is a process in which variable in one data type
is converted to another data type

implicit conversion:
             -->automatic ype conversion
             -->done by then compiler on its own
             -->all te datatypes of the variables are
             upgraded to the data type of variable with largest data type

             bool>char>short int>int>unsigned int >long > unsigned > long long >float >double > long double -

*/

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    char y = 'a';
    // y implicitly converted into int ASCII
    // value of 'a' is 97

    x = x + y;
    float z = x + 1.0;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;

    return 0;
}