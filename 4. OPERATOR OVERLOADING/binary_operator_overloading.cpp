// When se overload the binary operator for user-defined types by using the code  obj3=obj1 +obj2;
// binary operator overloading
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex() : real(0), img(0) {}
    complex(int r, int im) : real(r), img(im) {}
    complex operator+(const complex &ob);
    void display();
};
complex complex::operator+(const complex &ob)
{
    complex temp;
    temp.real = this->real + ob.real;
    temp.img = this->img + ob.img;
    return temp;
}
// complex complex::operator+(const complex &ob)
// {
//     complex temp;
//     temp.real = this->real + ob.real;
//     temp.img = this->img + ob.img;
//     return temp;
// }
void complex::display()
{
    cout << "result is:-" << endl;
    cout << real << " + " << img << "i" << endl;
}
int main()
{
    complex c1(10, 20), c2(5, 5), result;
    result = c1 + c2;
    result.display();
    return 0;
}