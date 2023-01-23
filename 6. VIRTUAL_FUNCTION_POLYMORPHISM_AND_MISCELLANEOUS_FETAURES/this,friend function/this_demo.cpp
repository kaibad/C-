#include <iostream>
using namespace std;
class Shape
{
    int length;
    int breadth;

public:
    Shape(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    void show()
    {
        cout << "breadth:-" << this->breadth << "\tlength:-" << this->length << endl;
    }
};

int main()
{
    Shape s(10, 20);
    s.show();
    return 0;
}