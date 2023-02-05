#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outf;
    outf.open("kailash.txt", ios::out);
    outf.seekp(20, ios::beg);
    outf << "hello my name is kailash" << endl;
    outf.close();
    return 0;
}