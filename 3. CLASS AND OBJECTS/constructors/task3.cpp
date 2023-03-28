/*(Q.)
              Student
-------------------------------------------------
- name(string)
-age(int)
-marks_double
------------------------
+ student()
+ getname()(string)
+ getage()(int)
+ getmarks()(double)
+ getpercentage()(double)
print name ,age,marks,percentage of the student and after complteting the program use destructor also
*/
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    string name;
    int age;
    double marks;

public:
    Student();  // constructor
    ~Student(); // destructor
    string getName();
    int getAge();
    double getMarks();
    double getPercentage();
};
Student::Student()
{
    name = "kailash";
    age = 20;
    marks = 495;
    cout << "object is created." << endl;
}
Student::~Student()
{
    cout << "object is destroyed" << endl;
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
    return marks;
}
double Student::getPercentage()
{
    return ((marks / 500) * 100);
}
int main()
{
    Student s;
    cout << "Name of the Student:-" << s.getName() << endl;
    cout << "Age of the Student:-" << s.getAge() << endl;
    cout << "Marks obtained by the Student:-" << s.getMarks() << endl;
    cout << "Percentage of the Student:-" << s.getPercentage() << endl;
    return 0;
}