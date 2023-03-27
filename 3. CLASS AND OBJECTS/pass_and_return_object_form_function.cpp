// pass and return object from funtion
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    string name;
    double marks;

public:
    Student(string n, double m);
    Student compare(Student s1, Student s2);
    string getName();
};
Student::Student(string n, double m) : name(n), marks(m)
{
    cout << "student object is created...." << endl;
}
Student Student::compare(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
        return s1;
    else
        return s2;
}
string Student::getName()
{
    return name;
}
int main()
{
    Student a("kailsh", 480);
    Student b("badu", 479);
    Student s = a.compare(a, b);
    // When the compare() method is called from the main() function using the statement Student s = a.compare(a, b);
    // , it returns a Student object which is then assigned to the s variable.This is an example of returning an object from a function.
    cout << s.getName() << " has got the higest number" << endl;
    return 0;
}