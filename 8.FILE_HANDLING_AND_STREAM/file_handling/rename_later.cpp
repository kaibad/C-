#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ifstream ifile;
    char a;
    ifile.open("kailash.txt", ios::in);
    while (!ifile.eof())
    {
        ifile.get(a);
        cout << a;
    }
    cout << endl;
    ifile.close();

    return 0;
}