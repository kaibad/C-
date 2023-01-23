//program to find the greatest among three number using functions
#include<iostream>
using namespace std;
int largestNumber(int a,int b, int c)
{
	int largest=0;
	if(a>b && a>c)
		return a;
	else if(b>a && b>c)
		return b;
	else
		return c;
	return largest;
}

int main()
{
	int a,b,c;
	
	cout<<"Enter the three number:---->"<<endl;
	cin>>a>>b>>c;
	cout<<"Largest number is: "<<largestNumber(a,b,c);
	
	return 0;
}