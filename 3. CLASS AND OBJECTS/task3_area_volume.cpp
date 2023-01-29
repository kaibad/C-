// calculating the area and volume of a box
#include <iostream>
using namespace std;

class box
{
    double length;
    double breadth;
    double height;

public:
    void setLength(double l);
    void setBreadth(double b);
    void setHeight(double h);

    double getlength();
    double getbreadth();
    double getheight();
    double getvolume();
    double getarea();
};
double box::getvolume()
{
    return (length * breadth * height);
}
double box::getarea()
{
    return (2 * ((length * breadth) + (breadth * height) + (height * length)));
}
void box::setLength(double l)
{
    length = l;
}
double box::getlength()
{
    return length;
}
void box::setBreadth(double b)
{
    breadth = b;
}
double box::getbreadth()
{
    return breadth;
}
void box::setHeight(double h)
{
    height = h;
}
double box::getheight()
{
    return height;
}
int main()
{
    box b;
    int n1, n2, n3;
    cout << "\n\nEnter the length of the box:-";
    cin >> n1;
    cout << "\n\nEnter the breadth of the box:-";
    cin >> n2;
    cout << "\n\nEnter the height of the box:-";
    cin >> n3;

    b.setLength(n1);
    b.setBreadth(n2);
    b.setHeight(n3);
    cout << "\n\nlength:--->" << b.getlength() << endl
         << "breadth:---->" << b.getbreadth() << endl
         << "height:--->" << b.getheight() << endl
         << endl;

    cout << "\n\narea:--->" << b.getarea() << endl;
    cout << "\n\nvolume:--->" << b.getvolume() << endl
         << endl;
    return 0;
}