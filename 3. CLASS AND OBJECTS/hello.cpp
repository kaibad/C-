#include <iostream>
#include <string.h>
using namespace std;
class Name
{
public:
    string name;

    Name();
    void setName(string s);
    string getName();
};
Name::Name()
{
    cout << "object is created." << endl;
}
void Name::setName(string s)
{
    name = s;
}
string Name::getName()
{
    return name;
}
int main()
{
    Name n;
    n.setName("KailashBadu");
    cout << "My Name is " << n.getName() << endl;
}