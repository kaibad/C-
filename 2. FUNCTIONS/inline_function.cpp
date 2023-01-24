// concept of inline function
/*inline function:-
            In C++, an inline function is a function that
is defined with the "inline" keyword. The inline keyword is
a request to the compiler to insert the code of the function
into the code of the calling function, instead of making a function call.
The main advantage of using inline function is that it reduces function
call overhead, which improves the performance of the program.
However, the use of too many inline functions can lead to
an increase in the size of the final executable, so it's important to use them judiciously.
Also, to be eligible for inline-expansion, the function must
be defined in the same translation unit where it's called,
 otherwise the compiler will ignore the inline keyword and perform a regular function call.*/

#include <iostream>
using namespace std;
inline int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    cout << max(10, 20) << endl;

    return 0;
}
