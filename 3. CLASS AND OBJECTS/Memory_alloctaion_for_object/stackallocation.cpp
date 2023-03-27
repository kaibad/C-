/* in c++ we can allocate the memory for the objects using two main methods
1) stack allocation
2) hea allocation

#stack allocation:- it is the method for allocating memory for objects on the stack.it is a simple and fast but has some
limitations suchs as a fixed size and a limited amount of memory */

#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
int main()
{
    // alocate the menory for a person object named kailash on the stack
    Person kailash;
    kailash.name = "badu";
    kailash.age = 20;
    // print out the name and age of the kailash object
    cout << "my name is " << kailash.name << " and iam " << kailash.age << " years old." << endl;
    return 0;
}