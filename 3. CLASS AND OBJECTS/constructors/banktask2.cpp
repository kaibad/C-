/*
        Bank
-----------------------------------------------------
- cudtomer_name(dtring)
-balance(double)
+ bank()
+ withdrs(double)
+ depodit(double)
 display(void)

 but make it choice to the user to continue or exit or to either deposit or withdraw

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
Bank::Bank(string name, double bal) : customer_name(name), balance(bal)
{
}
double Bank::withdraw(double amt)
{
    if (amt > balance)
    {
        cout << "Insufficine Balace!!!!" << endl;
        cout << "Your current balance is:" << balance << endl;
    }
    else
    {
        cout << "Rs. " << amt << " is withdrawn from youe account." << endl;
        balance = balance - amt;
        cout << "Your new balance is :- Rs. " << balance << endl;
    }
    return balance;
}
double Bank::deposit(double amt)
{
    cout << "Rs. " << amt << "is deposited in your account." << endl;
    balance = balance + amt;
    cout << "Your new balanc is:- Rs. " << balance << endl;
    return balance;
}
void Bank::display()
{
    cout << "----------------------------------Account Holder's Details's----------------------------------" << endl;
    cout << "Name:- " << customer_name << endl;
    cout << " Total Balance:- " << balance << endl;
}
int main()
{
    double amt;

    Bank b("kailash", 100000), c("Darshana", 80000);
    int option = 1, choice;
    do
    {
        cout << "-----------------------------------------What do you want?----------------------------------------- " << endl;
        cout << "1:\tDeposit\n2:\tWithdraw\n3:\tCheck Balance\n"
             << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Weelcome to Kaailash Bank " << endl
                 << endl;
            cout << "Enter the amount yo want to deposit:- ";
            cin >> amt;
            b.deposit(amt);
            break;
        case 2:
            cout << "Weelcome to Kaailash Bank " << endl
                 << endl;
            cout << "Enter the amount you want to withdraw:- ";
            cin >> amt;
            b.deposit(amt);
            break;
        case 3:
            cout << "Weelcome to Kaailash Bank " << endl
                 << endl;
            b.display();
            break;

        default:
            cout << "Invlalid command" << endl;
            break;
        }
        cout << "Do you want one more transaction? Press (1 for 'yes' and 0 for 'no'):- ";
        cin >> option;
    } while (option != 0);

    return 0;
}