//cpp program to add two number

#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
    return a+b;
}
int main(){
    int a,b,c;
    cout<<"Enter the two number to be added:-->\t";
    cin>>a>>b;
    cout<<"sum is:---->"<<sum(a,b,c)<<endl;
}