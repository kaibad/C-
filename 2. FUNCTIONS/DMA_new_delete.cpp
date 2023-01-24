/*
-->it stand foe dynamic memory allocation
DMA in c++ refers to performing memory allocation
manually by a programmer
*/
// new
/* the new operator denotes a request for memory allocation
on the free store.if sufficient memory is available ,a new
operatoe initializes the memory and returns the address of the
newly allocated and initialized memory to the pointer variable

           syntax:-
              pointer-variable=new data-type*/

// delete
/*
since iy is the programmer's responsiblity to deallocate
dynamically allocated memory,programmers are provides delete
operator in c++ language
            syntax:-
               delete pointer_variable;
 */

//  ==========================program=========================

#include <iostream>
using namespace std;
int main()
{
    int *p = NULL;
    p = new (nothrow) int;
    if (!p)
    {
        cout << "allocation of memory failed" << endl;
    }
    else
    {
        *p = 20;
        cout << "The value of p= " << *p << endl;
    }
    // request block of memory using new operator
    float *q = new float(24.45);
    cout << "The value of q= " << *q << endl;
    // request block of memory of size n
    int size = 5;
    int *a = new (nothrow) int[size];
    if (!a)
    {
        cout << "Error allocating array" << endl;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {

            a[i] = i;
        }
        cout << "The elements of array are: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "at " << i << " " << a[i] << endl;
        }
    }
    // deallocating memory
    delete p;
    delete q;
    delete[] a;
}