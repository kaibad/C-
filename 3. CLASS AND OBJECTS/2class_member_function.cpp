// using set method to initialize member-variables and get method to retrive the valus of member variables

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    // member variables
    string name;
    int age;
    double total_marks;

    // member functions
    void setNmae(string n);
    void setAge(int a);
    void setMarks(double m);
    void display();

    string getName();
    int getAge();
    double getMarks();
};

void Student::setNmae(string n)
{
    name = n;
}

int main()
{

    return 0;
}