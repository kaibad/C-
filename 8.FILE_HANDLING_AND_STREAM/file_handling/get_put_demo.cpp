#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ofstream outf;
    char a[] = "thanks";
    outf.open("kailash.txt", ios::out);
    for (int i = 0; i < strlen(a); i++)
    {
        outf.put(a[i]);
    }
    cout << "file write completed" << endl;
    outf.close();
    return 0;
}