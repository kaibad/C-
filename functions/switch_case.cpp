#include<iostream>
#include<math.h>
using namespace std;
int calculator();
int add(int a1,int a2);
int sub(int s1,int s2);
int mul(int m1,int m2);
int divi(int d1,int d2);
int power(int p1,int p2);
int sq(int sq1);
int sqr(int sqr1);
int calculator()
{
    int select;
    cout<<"\n\n\n\t\t\t\t\tHI.....!!..I'M A CALCULATOR DESIGNED BY MR. KAILASH BADU";
    cout<<"\n\n\n\nENTER THE NUMBER ACCORDING TO DESIRED CALCULATION.";
    cout<<"\n\n\n1) ADDITION\n2) SUBTRACTION\n3) MULTIPILICATION\n4) DIVISION\n5) POWER\n6) SQUARE\n7) SQUARE ROOT"<<endl;
    cout<<":-\t";
    cin>>select;
    switch(select)
    {
        case 1:
        {
            int a1=0,a2=0;
            cout<<"\n\nAddition result is:-\t"<<add(a1,a2);
            break;

        }
        case 2:
        {
             int s1=0,s2=0;
            cout<<"\n\nSubtraction result is:-\t"<<sub(s1,s2);
            break;

        }
        case 3:
        {
             int m1=0,m2=0;
            cout<<"\n\nMultiplication result is:-\t"<<mul(m1,m2);
            break;

        }
        case 4:
        {
             int d1=0,d2=0;
            cout<<"\n\nDivision result is:-\t"<<divi(d1,d2);
            break;

        }
        case 5:
        {
             int p1=0,p2=0;
            cout<<"\n\nThe result  is:-\t"<<power(p1,p2);
            break;

        }
        case 6:
        {
             int sq1=0;
            cout<<"\n\nSquare of the number is:-\t"<<sq(sq1);
            break;

        }
        case 7:
        {
            
             int sqr1=0;
            cout<<"\n\nSquare root of the number is:-\t"<<sqr(sqr1);
            break;

        }
        default:
        cout<<"\n\n\t\tINVALID OPTION...............!!!!";
        break;



      


    }

    return 0;

}
int add(int a1,int a2)
{

    cout<<"\t\t\tADDITION---------!!!";
    cout<<"\n\n\n\n\nEnter first number:-\t";
    cin>>a1;
    cout<<"\nEnter the seconde number:-\t";
    cin>>a2;

    return (a1+a2);

}
int sub( int s1,int s2)
{

 cout<<"\t\t\tSUBTRACTION---------!!!";
    cout<<"\n\n\n\n\nEnter first number:-\t";
    cin>>s1;
    cout<<"\nEnter the seconde number:-\t";
    cin>>s2;

    return (s1-s2);
}
int mul(int m1,int m2)
{

     cout<<"\t\t\tMULTIPLICATION---------!!!";
    cout<<"\n\n\n\n\nEnter first number:-\t";
    cin>>m1;
    cout<<"\nEnter the seconde number:-\t";
    cin>>m2;

    return (m1+m2);

}
int divi( int d1,int d2)
{
     cout<<"\t\t\tDivision---------!!!";
    cout<<"\n\n\n\n\nEnter first number:-\t";
    cin>>d1;
    cout<<"\nEnter the seconde number:-\t";
    cin>>d2;

    return (d1/d2);

}
int power(int p1,int p2)
{
     cout<<"\t\t\tFINDING POWER---------!!!";
    cout<<"\n\n\n\n\nEnter the number:-\t";
    cin>>p1;
    cout<<"\nenter the power:-\t";
    cin>>p2;
  

    return (pow(p1,p2));

}
int sq(int sq1)
{
   cout<<"\t\t\tSQUARE---------!!!";
    cout<<"\n\n\n\n\nEnter the number:-\t";
    cin>>sq1;
    

    return ( sq1*sq1);  

}
int sqr(int sqr1)
{
     cout<<"\t\t\tSQUARE ROOT---------!!!";
    cout<<"\n\n\n\n\nEnter the number:-\t";
    cin>>sqr1;
    

    return ( sqrt(sqr1));

}





int main()
{
    start:
    calculator();
    cout<<"\n\n\nPRESS 'S' KEY TO RESTART AND ANY OTHER KEY TO HALT THE PROGRAM! "<<endl;
    char restart;
    cin >> restart;
    if( restart=='s'||restart=='S')
    goto start;

   

    return 0;
}