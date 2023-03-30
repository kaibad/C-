/*#include <vector> is a header file in C++ that provides a template class called vector which is a dynamic array that can resize itself automatically as elements are added or removed.

The line vector<Bank> accounts; creates an empty vector of type Bank called accounts. Here, Bank is the name of the class that has been defined in the program.

The next three lines use the push_back method of the vector class to add three Bank objects to the vector. Each of these objects has a string and a double value passed to its constructor, which initializes the customer_name and balance member variables.

So, accounts.push_back(Bank("Alice", 10000)); adds a Bank object with name "Alice" and balance 10000 to the accounts vector. Similarly, accounts.push_back(Bank("Bob", 5000)); and accounts.push_back(Bank("Charlie", 20000)); add two more Bank objects with names "Bob" and "Charlie", and balances 5000 and 20000 respectively.

Overall, the vector container provides a convenient way to store and manage a collection of objects of a particular type in C++.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bank
{
private:
    string customer_name;
    double balance;

public:
    Bank(string name, double bal)
    {
        customer_name = name;
        balance = bal;
    }

    string getName() const
    {
        return customer_name;
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amt)
    {
        balance += amt;
        cout << "Rs. " << amt << " deposited in your account. New balance: Rs. " << balance << endl;
    }

    void withdraw(double amt)
    {
        if (amt > balance)
        {
            cout << "Insufficient balance!" << endl;
            cout << "Your current balance is Rs. " << balance << endl;
        }
        else
        {
            balance -= amt;
            cout << "Rs. " << amt << " withdrawn from your account. New balance: Rs. " << balance << endl;
        }
    }

    void display() const
    {
        cout << "------------------- Account Holder's Details -------------------" << endl;
        cout << "Name: " << customer_name << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    vector<Bank> accounts;
    accounts.push_back(Bank("Alice", 10000));
    accounts.push_back(Bank("Bob", 5000));
    accounts.push_back(Bank("Charlie", 20000));

    int choice, account_choice;
    double amt;

    do
    {
        cout << "Choose an account: " << endl;
        for (int i = 0; i < accounts.size(); i++)
        {
            cout << i + 1 << ": " << accounts[i].getName() << endl;
        }
        cin >> account_choice;
        account_choice--;

        cout << "What do you want to do?" << endl;
        cout << "1: Deposit" << endl;
        cout << "2: Withdraw" << endl;
        cout << "3: Check balance" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the amount you want to deposit: ";
            cin >> amt;
            accounts[account_choice].deposit(amt);
            break;
        case 2:
            cout << "Enter the amount you want to withdraw: ";
            cin >> amt;
            accounts[account_choice].withdraw(amt);
            break;
        case 3:
            accounts[account_choice].display();
            break;
        default:
            cout << "Invalid command" << endl;
            break;
        }

        cout << "Do you want to perform another transaction? (1 for Yes, 0 for No): ";
        cin >> choice;
    } while (choice != 0);

    return 0;
}
