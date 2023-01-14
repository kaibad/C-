//c++ program to find the greatest number among any three numbers  without using function
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first number:---->";
    cin>>a;
    cout<<"\nEnter the second number:----->";
    cin>>b;
    cout<<"\nEnter the third number:----->";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is the greatest number";
    }
    if(b>a && b>c){
        cout<<b<< " is the greatest number."<<endl;
    }
    else
    {
        cout<<c<<" is the greatest number."<<endl;
    }


    return 0;

}