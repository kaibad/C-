// parametrized constructor
// a constructor that have parameters
#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    string name;
    double salary;

public:
    Employee(string n, double s); // parametrized constructor
    string getName();
    double getSalary();
};
Employee::Employee(string n, double s)
{
    cout << "object is created." << endl;
    name = n;
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
    Employee e("Kailash", 100000);
    cout << "Name of the Employee:" << e.getName() << endl
         << "Salary of " << e.getName() << " is:-" << e.getSalary() << endl;
}