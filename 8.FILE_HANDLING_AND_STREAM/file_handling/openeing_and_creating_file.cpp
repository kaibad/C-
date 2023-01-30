#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("kailash.txt", ios::out);
    if (!file)
    {
        cout << "file canoot be opened...!!!" << endl;
    }
    else
    {
        cout << "file created...!!!" << endl;
        file.close();
    }

    return 0;
}