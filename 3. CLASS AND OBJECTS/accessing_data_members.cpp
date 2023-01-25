// accessing the data members of class
/*the public data members of objects of a class
can be accessed using the different member access
operator*/
#include <iostream>
using namespace std;
// define a class called a box
class Box
{

public:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box b1; // b1 is an object of type box
    double volume;
    cout << "\n\nEnter the length of the box in cm:-";
    cin >> b1.length;

    cout << "\n\nEnter the breadth of the box in cm:-";
    cin >> b1.breadth;
    cout << "\n\nEnter the height of the box in cm:-";
    cin >> b1.height;

    volume = (b1.length) * (b1.breadth) * (b1.height);

    cout << "\n\nVolume of thr box is:-" << volume << " cm" << endl
         << endl;

    return 0;
}