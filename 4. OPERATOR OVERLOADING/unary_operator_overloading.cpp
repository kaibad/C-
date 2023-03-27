// overloading unary operator(pre/post increment iny c++)
/* returntype operator symbol(arguements){
}*/
#include <iostream>
using namespace std;
class count
{
private:
    int value;

public:
    count(int i);
    void operator++(); // overloading pre-increment
    // overloading post-increment ,here int as arguement is used to differentiate post increment
    void operator++(int);
    int getValue();
};
count::count(int i) : value(i)
{
}
void count::operator++()
{
    value++;
}
void count::operator++(int)
{
    value++;
}
int count::getValue()
{
    return value;
}
int main()
{
    count c(10);
    cout << "Before Increment:-" << c.getValue() << endl;
    ++c; // calling operator ++()
    cout << "After Increment:-" << c.getValue() << endl;
    c++; // calling operator ++(int)
    cout << "After Increment:-" << c.getValue() << endl;

    return 0;
}