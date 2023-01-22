//cpp program to calculate factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int num,fact=1;
    int num1;
    int i;
    cout<<"enter the number:-\t";
    cin>>num;
    num=num1;
    for(i=0;i<=num;i--)
    {
        fact=fact*num;
        num=num-1;
        
    }
    cout<<"factorial of "<<num1<<"is:-"<<fact<<endl;
    return 0;
}