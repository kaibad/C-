#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    char ch;
    file.open("kailash.txt", ios::in);
    if (!file)
    {
        cout << "Error opening file......!!!\t\tfile do not exists....!!" << endl;
    }
    else
    {
        while (!file.eof())
        {
            file >> ch;
            cout << ch;
        }
        file.close();
    }

    return 0;
}