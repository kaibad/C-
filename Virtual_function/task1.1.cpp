#include <iostream>

class Person
{
protected:
    int age;
    std::string name;

public:
    virtual void display() = 0;
    virtual void calculate_percentage() = 0;
};

class Student : public Person
{
public:
    Student(std::string nm, int ag)
    {
        setName(nm);
        setAge(ag);
    }
    void display()
    {
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "Age: " << getAge() << std::endl;
        std::cout << "Percentage: " << percentage << std::endl;
    }

    void calculate_percentage()
    {
        percentage = (marks_obtained / total_marks) * 100;
    }
    double marks_obtained;
    double total_marks;
    double percentage;
};

int main()
{
    Student s("John Doe", 21);
    s.marks_obtained = 450;
    s.total_marks = 500;
    s.calculate_percentage();
    s.display();
    return 0;
}
