#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream fread;
    char txt[100];
    fread.open("kailash.txt", ios::in);
    if (!fread)
    {
        cout << "file doesnot exists!!" << endl;
    }
    else
    {
        while (!fread.eof())
        {
            fread.getline(txt, 100);
            cout << txt << endl;
        }
    }

    fread.close();

    return 0;
}