#include <iostream>
#include <fstream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 10;
        breadth = 20;
    }
    void show()
    {
        cout << "length=" << length << "breadth=" << breadth << endl;
    }
};

int main()
{
    Rectangle robj;
    ofstream outf;
    outf.open("kailash.dat", ios::out);
    outf.write((char *)&robj, sizeof(robj));
    outf.close();

    return 0;
}