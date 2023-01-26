// using set method to initialize member-variables and get method to retrive the valus of member variables

#include <iostream>
// #include <string>
using namespace std;
class Student
{
public:
    // member variables
    string name;
    int age;
    double total_marks;

    // member functions
    void setName(string n);
    void setAge(int a);
    void setMarks(double m);
    void display();

    string getName();
    int getAge();
    double getMarks();
};

void Student::setName(string n)
{
    name = n;
}
void Student::setAge(int a)
{
    age = a;
}
void Student::setMarks(double m)
{
    total_marks = m;
}
string Student::getName()
{
    return name;
}
int Student::getAge()
{
    return age;
}
double Student::getMarks()
{
    return total_marks;
}
void Student::display()
{
    cout << "\n\nFollowing are student info.:-" << endl;
    cout << "Name:-" << getName() << endl;
    cout << "Name:-" << getAge() << endl;
    cout << "Name:-" << getMarks() << endl;
}
int main()
{
    Student s;
    s.setName("kailash badu");
    s.setAge(20);
    s.setMarks(99.99);
    s.display();

    // return 0;
}
/*In the given code, there is no output because
the return statement in the main function is returning
control back to the operating system before the
display function is called.
The return statement in the main function is typically
used to indicate the status of the program's execution to
the operating system. In C++, the main function is expected
to return an integer value, and a return value of 0 typically
indicates that the program has executed successfully.
You can remove the "return 0" statement from the main
function, so that the program will continue to execute
after the display function is called and you will be able
to see the student information.*/