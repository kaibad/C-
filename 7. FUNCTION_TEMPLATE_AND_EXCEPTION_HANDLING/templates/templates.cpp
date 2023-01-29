// concept of general programming
#include <iostream>
using namespace std;
template <class T>
T sum(T a, T b)
{
    return (a + b);
}

int main()
{
    char ch = 65, ch1 = 2;

    cout << "Sum=" << sum(10.75, 2.25) << endl;
    cout << "Sum=" << sum(10, 2) << endl;
    cout << ch;
    cout << "Sum=" << sum(ch, ch1) << endl;

    return 0;
}