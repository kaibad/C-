/*this process is also called type-casting
an dit is user defined.here the user can type cast thr result
to make it of a particular data type.

converting by assignment:-
              this is done by explicit;y defining the required
              type infront of the expression in parenthesis.
              This can be considered as forceful casting
                  syntax:-
                     (type)expression*/

// program

#include <iostream>
using namespace std;

int main()
{
    double x = 1.2;
    int sum = (int)x + 1;
    cout << "sum=" << sum;

    return 0;
}