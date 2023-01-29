// class template
#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>
class Student
{
    T1 name;
    T2 age;

public:
    Student(T1 name, T2 age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name:-" << this->name << "\nAge:-" << this->age << endl;
    }
};

int main()
{
    string name;
    int age;
    cout << "Enter name and age: ";
    cin >> name >> age;

    Student<string, int> obj(name, age);
    obj.display();

    return 0;
}