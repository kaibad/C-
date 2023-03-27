/*heap allocation is a methiod of allocating memory for objects on the heap,which is a larger and more flexible
memory space .This method is more complex and slower than stack allocation but it allows you to allocate the memory
dybanically at runtimre . */

#include <iostream>
#include <string.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
int main()
{
    // alloacting the memory for the person object named kailash on the heap
    Person *kailash = new Person;
    kailash->name = "kailshBadu";
    kailash->age = 20;
    // print out the name and age of the kailsh object
    cout << "Name:-" << kailash->name << endl;
    cout << "Age:-" << kailash->age << endl;
    // deallocate the memory used by the kailash object
    delete kailash;
    return 0;
}