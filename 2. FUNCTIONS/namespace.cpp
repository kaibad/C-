/*Namespace
- Namespace provide the space where we can define or declare identifier
i.e. variable, method, classes.
- Using namespace, you can define the space or context in which
identifiers are defined i.e. variable, method, classes. In essence, a
namespace defines a scope.
Defining a Namespace:
A namespace definition begins with the keyword namespace followed by the
namespace name as follows:

namespace namespace_name
{
// code declarations i.e. variable (int a;)
method (void add();)
classes ( class student{};)
}

- It is to be noted that, there is no semicolon (;) after the closing brace.
- To call the namespace-enabled version of either function or variable,
prepend the namespace name as follows:
namespace_name: :code; // code could be variable , function or class.*/

// =============================program===============================

#include <iostream>
#include <iomanip>
using namespace std;
namespace first
{
    int a = 10;
}
namespace second
{
    int a = 15;
}
int main()
{
    cout << first::a << endl;
    cout << second::a << endl;
}