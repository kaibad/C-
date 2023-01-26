// printing the dimensions of the box

#include <iostream>

using namespace std;
class box
{
    double length;
    double breadth;
    double height;

public:
    void setDimensions(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    void displaydimension()
    {
        cout << "length:----->" << length << endl;
        cout << "breadth:----->" << breadth << endl;
        cout << "heigth:------>" << height << endl;
    }
};
int main()
{
    box b;
    b.setDimensions(10, 5, 2);
    b.displaydimension();
    return 0;
}