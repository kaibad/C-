#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    char ch[100];
    file.open("exam.txt", ios::in);
    if (!file)
    {
        cout << "file cannot be opened" << endl;
    }
    else
    {
        while (!file.eof())
        {
            file.getline(ch, 50);
            cout << ch;
        }
        file.close();
        }
}