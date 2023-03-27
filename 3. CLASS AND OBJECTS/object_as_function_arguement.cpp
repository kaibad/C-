// in c++ we can pass object as function arguement .An object is an instance
// of a class which contains data members and member funtion.When you pass an  object as a funtion arguement ,you are
//  are passing a copy of the object to the function
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void introduce()
    {
        cout << "hi my name " << name << " and iam " << age << "years old." << endl;
    }
};
// define  a function that called "prinPerson()" that takes a person object as an arguement
// p.introduce() call the "introduce " funtion form the person object
void printPerson(Person p)
{
    p.introduce();
}
int main()
{
    Person kailash;
    kailash.name = "badu";
    kailash.age = 20;
    printPerson(kailash); // here object kailash is passed as arguement of the printPerson funtion

    return 0;
}
