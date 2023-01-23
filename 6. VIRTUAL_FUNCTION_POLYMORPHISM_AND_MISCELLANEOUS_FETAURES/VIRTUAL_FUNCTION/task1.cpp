#include <iostream>
using namespace std;

class Person
{
protected:
    int age;
    string name;

public:
    virtual void display() = 0;              // pure virtual function
    virtual void calculate_percentage() = 0; // pure virtual function
};

class Student : public Person
{
    // int total_marks;

public:
    Student(string nm, int ag, int mrks[5])
    {
        total_marks = 500;
        name = nm;
        age = ag;
        // float marks_obtained = 0;
        for (int i = 0; i < 5; i++)
        {
            marks_obtained += mrks[i];
        }
        cout << marks_obtained << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void calculate_percentage()
    {
        cout << total_marks << marks_obtained << endl;
        if (total_marks != 0)
        {
            percentage = (marks_obtained / total_marks) * 100;
            cout << "Percentage: " << percentage << endl;
        }

        else
            cout << "total marks is not initialized" << endl;
    }

private:
    double marks_obtained;
    double total_marks;
    double percentage;
};

int main()
{
    int marks[5] = {90, 98, 99, 93, 96};
    Student s("Kailah", 19, marks);
    Person *p = &s;

    p->display();
    p->calculate_percentage();
    return 0;
}
