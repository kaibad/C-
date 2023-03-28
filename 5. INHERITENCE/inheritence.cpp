#include <iostream>
#include <string.h>
using namespace std;
class kailash
{
private:
    int length;
    int breadth;
    int height = length;

public:
    kailash(int l, int b);
    ~kailash();
    double getArea();
    // double getArea();
};

kailash::kailash(int l, int b)
{
    length = l;
    breadth = b;
    cout << "object is being created" << endl;
}

kailash::~kailash()
{
    cout << "object is being destroyed" << endl;
}
double kailash::getArea()
{
    return length * breadth;
}

int main()

{
    kailash k(10, 20);
    cout << "the area of the kailsh badu is:" << k.getArea() << endl;
    return 0;
}