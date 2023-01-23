//cpp program to dispaly entered number usiing functions with arguments
#include<iostream>
using namespace std;

void display_num(int n1,int n2)
{
    cout<< "\t\tthe first number is :---->"<<n1<<endl;
    cout<<"\t\tthe second number is :---->"<<n2<<endl<<endl<<endl<<endl;
}

int main()
{
    int num1,num2;
    cout<<"\n\nenter any two number:---->\t";
    cin>>num1>>num2;
    cout<<"\n\nnumbers you entered:-\n";
    //calling the function
    display_num(num1,num2);

    return 0;
}