// a simple program to my my name and  say hello world using the concept of constructor(default) and copy constructor
#include <iostream>
#include <string.h>
using namespace std;
class Name
{
public:
    string name;

    Name();               // constructor
    Name(const Name &obj) // copy sonstructor
    {
        name = obj.name;
    }

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
    Name n; // constructor called
    n.setName("KailashBadu");
    Name n2 = n; // copy constructor called

    cout << "My Name is " << n.getName() << endl;
    cout << "Hello world (this is by copy constructor): I'm " << n2.getName() << endl;
}