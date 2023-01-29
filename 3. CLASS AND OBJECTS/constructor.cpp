// concept of constructor
// default constructor
#include <iostream>
using namespace std;
class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box()
    {
        cout << "Constructor get called........!!!" << endl;
    }
};
int main()
{
    Box b;
    return 0;
}