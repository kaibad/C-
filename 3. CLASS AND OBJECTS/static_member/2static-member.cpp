// counting the  number of objects created using static funtion
#include <iostream>
using namespace std;
class Myclass
{
public:
    static int count;
    Myclass()
    {
        count++;
    }
};
int Myclass::count = 0;

int main()
{
    Myclass obj1;
    Myclass obj2;
    Myclass obj3;
    cout << "total number of object created are:-" << Myclass::count << endl;
    return 0;
}