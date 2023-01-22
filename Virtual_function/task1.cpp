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
public:
    Student(string nm, int ag, int mrks[5])
    {
        name = nm;
        age = ag;
        float marks_obtained = 0;
        for (int i = 0; i < 5; i++)
        {
            marks_obtained += mrks[i];
        }
        int total_marks = 5 * 100;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Percentage: " << percentage << endl;
    }

    void calculate_percentage()
    {
        if (total_marks != 0)
            percentage = (marks_obtained / total_marks) * 100;
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
