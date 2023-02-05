#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream fread;
    int a;
    char s[40];
    double b;
    fread.open("kailash.txt", ios::in);
    if (!fread)
    {
        cout << "file does not exists!!!";
    }
    else
    {
        fread >> a >> s >> b;
        cout << a << "  " << s << "  " << b << endl;
    }
    fread.close();

    return 0;
}