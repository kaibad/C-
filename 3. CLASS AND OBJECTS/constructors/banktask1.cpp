/*
        Bank
-----------------------------------------------------
- cudtomer_name(dtring)
-balance(double)
+ bank()
+ withdrs(double)
+ depodit(double)
 display(void)
 -------------------------------------------*/
#include <iostream>
#include <string.h>
using namespace std;
class Bank
{
    string customer_name;
    double balance;

public:
    Bank(string, double);
    double withdraw(double);
    double deposit(double);
    void display();
};
Bank::Bank(string name, double bal)
{
    customer_name = name;
    balance = bal;
}
double Bank::withdraw(double amt)
{
    if (amt > balance)
    {
        cout << "insufficient balance!!!!" << endl;
    }
    else
    {
        cout << "Rs. " << amt << " is succesfully withdrawn...! " << endl;
        balance = balance - amt;
    }
}
double Bank::deposit(double amt)
{
    balance = balance + amt;
    cout << "Rs. " << amt << " is deposited in you account." << endl;
}
void Bank::display()
{
    cout << "-----------------CUSTOMER DETAILS-----------------" << endl;
    cout << "Name:- " << customer_name << endl;
    cout << "Total Balance :- " << balance << endl;
}
int main()

{
    Bank b("Kailash", 10000), c("badu", 11000);
    b.display();
    c.display();
    b.withdraw(200);
    b.deposit(1000);
    return 0;
}