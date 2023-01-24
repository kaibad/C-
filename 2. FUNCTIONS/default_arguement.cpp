// default arguements
/*in c++ programing ,we can provide default values
for function paramenter.If a function with default arguements
is called without passing arguements ,then the default parameter are used.

howwver,if arguements are passed while calling the function,thr default arguements are ignored.*/

#include <iostream>
using namespace std;
int sum(int a = 1, int b = 2) // default arguments
{
    return (a + b);
}

int main()
{
    cout << sum() << endl;
    cout << sum(10, 20) << endl; // arguements are passed while calling the functioen so defaukt arguemnets are ignored
    return 0;
}