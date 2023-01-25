// accessing data membes
#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void setid(int i)
    {
        id = i;
    }

    void displayinfo()

    {
        cout << "Roll no.:-" << id << endl;
        cout << "Name:-" << name << endl;
    }
};

int main()
{

    Student s1;

    string n;
    int i;
    // cout << "Enter the name of the student:-";
    s1.setName("kailash");
    // cout<<"enter the roll no. of student:-";
    s1.setid(9);

    s1.displayinfo(); // here member function is accessed using object

    return 0;
}