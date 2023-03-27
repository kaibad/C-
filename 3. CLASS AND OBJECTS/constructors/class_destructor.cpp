// a class destructor
// a class destructor is a special member function of a class that is executed whenever an objectof the class goes out of scope
#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    string name;
    double salary;

public:
    // constructor
    Employee(string n, double s) : name(n), salary(s)
    {
        cout << "object is being created........" << endl;
    }
    // destructor
    ~Employee()
    {
        cout << "object is being destroyed........" << endl;
    }
    string getName()
    {
        return name;
    }
    double getSalary()
    {
        return salary;
    }
};
// i have here defined the  constructor and other funtion where they are delared we can defined them below as belo
//  Employee::~Employee()
//  {
//      cout << "object is being destroyed........";
//  }
int main()
{
    Employee e("KAILASH", 100000);
    cout << "name of the employee is " << e.getName() << " and the the salary that Mr./Mrs." << e.getName() << " is " << e.getSalary() << endl;
}
