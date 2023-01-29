#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b:-";
    cin >> a >> b;
    // int a = 10, b = 0;

    try
    {
        if (b == 0)
            throw 505;
        else
            cout << a / b << endl;
    }
    catch (...)

    {
        cout << "Divide by zero error" << endl;
    }
    cout << "Hello World" << endl;

    return 0;
}