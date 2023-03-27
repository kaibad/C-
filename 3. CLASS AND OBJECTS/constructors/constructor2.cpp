// constructor
#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
public:
    string name;
    double salary;
    Employee(); // constructor get called when object is created
    void setName(string n);
    void setSalary(double s);
    string getName();
    double getSalary();
};
Employee::Employee()
{
    cout << "object is being created:" << endl;
}
void Employee::setName(string n)
{
    name = n;
}
void Employee::setSalary(double s)
{
    salary = s;
}
string Employee::getName()
{
    return name;
}
double Employee::getSalary()
{
    return salary;
}
int main()
{
    Employee e;
    e.setName("kailash");
    e.setSalary(100000);
    cout << "Name Of the Employee:-" << e.getName() << endl
         << "Salary of the Employee:-" << e.getSalary() << endl;
}