//cpp program to  mak ea menu usin switch case statement
#include<iostream>
using namespace std;


int main()
{
    double balance=0;
    double amount = 0;
    int choice=0;
    bool quit=false;
   do
   {
    cout<<"\n\n1) Deposit"<<endl;
    cout<<"2) Withdraw"<<endl;
    cout<<"3) Print Balance"<<endl;
    cout<<"4) print Balance and quite"<<endl;
    cout<<"5) Quit"<<endl;
    cout<<"\n\nEnter Choice:";
    cin>> choice;

    switch(choice)
    {
        case 1:
        cout<<"\n\tENTER AMOUNT:-";
        cin >> amount;
        balance += amount;
        cout<<"\tYour new balance is:-"<<balance<<endl;
        break;

         case 2:
         cout<<"\n\tENTER THE AMOUNT:-";
         cin>>amount;
         balance -= amount;
          cout<<"\tYour new balance is:-"<<balance<<endl;
         break;

         case 3:
         cout<< "\n\tBALANCE:-"<<balance<<endl;
         break;

         case 4:
         cout<<"\n\tBalance:-"<<balance<<endl;

         case 5:
         cout<< "\n\tThankyou for banking with us !\nVisit us again!!"<<endl;
         quit = true;
         break;

         default:
         cout<<"\n\tInvalid option entered"<<endl;





    }


  
   } while (!quit);
   
    
    
    return 0;
}