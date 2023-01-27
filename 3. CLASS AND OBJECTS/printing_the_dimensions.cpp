#include <iostream>
using namespace std;
class Box
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
};

void Box::setLength(double l)
{
    length = l;
}
void Box::setBreadth(double b)
{
    breadth = b;
}
void Box::setHeight(double h)
{
    height = h;
}

double Box::getlength()
{
    return length;
}

double Box::getbreadth()
{
    return breadth;
}

double Box::getheight()
{
    return height;
}

int main()
{
    int n1, n2, n3;
    Box b;
    cout << "\n\nEnter the length of the box:-";
    cin >> n1;
    b.setLength(n1);
    cout << "\n\nEnter the breadth of the box:-";
    cin >> n2;
    b.setBreadth(n2);

    cout << "\n\nEnter the height of the box:-";
    cin >> n3;
    b.setHeight(n3);

    cout << "length:----------->" << b.getlength() << endl;
    cout << "Breatdh:----------->" << b.getbreadth() << endl;
    cout << "Height:----------->" << b.getheight() << endl;

    return 0;
}