// exception handling
// in this way we can handle runtime error in c++
#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40};
    int size = sizeof(a) / sizeof(int);
    int pos;
    cout << size << endl;
    cout << "\n\nEnter index of array:-" << endl;
    cin >> pos;
    try
    {
        if (pos < size)
        {
            cout << a[pos] << endl;
        }
        else
            throw 404;
    }
    catch (int err)
    {
        cout << "Out of the index  \t\t\t Error 404!!" << endl
             << endl;
    }

    return 0;
}