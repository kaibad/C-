//cpp program to subtract to numbers using functions
#include<iostream>
using namespace std;
int sub(int a,int b){
    return a-b;
}
int main()
{
    int num1,num2;
    cout<<"Enter the twi numbers:---->\t";
    cin>>num1>>num2;
    cout<<"difference is:------>\t"<<sub(num1,num2);
}