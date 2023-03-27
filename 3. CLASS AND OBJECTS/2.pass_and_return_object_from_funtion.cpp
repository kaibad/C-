/*In object-oriented programming, passing and returning objects from functions is a way to manipulate and use objects in different parts of a program.

When an object is passed as an argument to a function, the function receives a copy of the object's data members, which can be accessed and modified within the function. This allows the function to operate on the object's data without affecting the original object in the calling code.

Similarly, when an object is returned from a function, a copy of the object is created and returned to the calling code. The returned object can be assigned to a variable or used in other parts of the program. This allows functions to return complex data structures, such as objects, which can be used to build more complex functionality.

Passing and returning objects from functions is a powerful technique that allows programs to be more modular and maintainable, as it enables different parts of the program to work with the same data structures in a consistent way.*/

// program
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
    double getMarks();
};
Student::Student(string n, double m)
{
    name = n;
    marks = m;
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
double Student::getMarks()
{
    return marks;
}
int main()
{
    string name1, name2;
    double marks1, marks2;
    cout << "Enter the Name and Marks for the first student:" << endl;
    cin >> name1 >> marks1;
    cout << "Enter the Name and Marks for the second student:" << endl;
    cin >> name2 >> marks2;

    Student a(name1, marks1);
    Student b(name2, marks2);

    Student s = a.compare(a, b);
    cout << "\n\n"
         << s.getName() << " got the highest marks." << s.getMarks() << " is the marls obtained by " << s.getName() << endl;
    return 0;
}