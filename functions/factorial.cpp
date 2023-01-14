//cpp program to find the factorial of a number
//recursion
#include<iostream>
using namespace std;
long fact(int n){
    if(n==0)
    return 1;
    
    return (n*fact(n-1));//recursive function call
}
int main(){
    int num;
    cout<<"enter the number:--->\t";
    cin>>num;
    cout<<"factotial of"<<num<<"is:---->\t"<<fact(num)<<endl;
    return 0;
}