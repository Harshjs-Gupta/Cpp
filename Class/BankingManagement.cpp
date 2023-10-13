/*Bank Management System using Class in C++

In this program, we are using the concept of C++ class and object, following basic operations are being performed here,

Opening an account
Show account info
Deposit
Withdraw
Search
Note: It's a basic program just for the practice of the concept of class and object.

In this program, we have created a class Bank with the following member functions,

OpenAccount() – It will take input account number, name and opening balance.

ShowAccount() – It will display the account details such as account number, name and balance.

Deposit() – It will ask for the amount to be added in available balance, and deposit the amount.

Withdrawal() – It will ask for the amount to be withdrawn from the available, will also check the available balance,
 if balance is available, it will deduct the amount from the available balance.

Search() – It will search for the record and display the account info.*/

#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
    int account_number;
    string name;
    int balance;

public:
    void openaccount()
    {
        cout << "Enter Account number: ";
        cin >> account_number;
        cout << "Enter name holder: ";
        cin >> name;
        cout << "Enter the balance: ";
        cin >> balance;
        cout << "\n";
    }
    void showaccount()
    {
        cout << "Account number is: " << account_number << "\n";
        cout << "Holder name is: " << name << "\n";
        cout << "Opening balance is: " << balance << "\n";
    }
    void deposit()
    {
        long amount;
        cout << "Enter amount if you deposit: ";
        cin >> amount;
        balance = balance + amount;
    }
    void withdrawal()
    {
        long amount;
        cout << "Enter amount if you withdrawal: ";
        cin >> amount;
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Less balance" << endl;
        }
    }
    int search(int);
};
int Bank::search(int a)
{
    if (account_number == a)
    {
        showaccount();
        return (1);
    }
    return (0);
}
int main()
{

    Bank c[3];

    int found = 0, a, choice;
    for (int i = 0; i < 3; i++)
    {
        c[i].openaccount();
    }

    do
    {
        cout << "\n1. Display ALL\n";
        cout << "2. Account info\n";
        cout << "3. Deposit amount\n";
        cout << "4. Withdrawl amount\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                c[i].showaccount();
            }
            break;
        case 2:
            cout << "Enter the account_number: ";
            cin >> a;
            for (int i = 0; i < 3; i++)
            {
                found = c[i].search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Account not found";
            break;
        case 3:
            cout << "Account_number to deposit amount: ";
            cin >> a;
            for (int i = 0; i < 3; i++)
            {
                found = c[i].search(a);
                if (found)
                {
                    c[i].deposit();
                    break;
                }
            }
            if (!found)
                cout << "Account not found";
            break;
        case 4:
            cout << "Account_number to withdrawal amount: ";
            cin >> a;
            for (int i = 0; i < 3; i++)
            {
                found = c[i].search(a);
                if (found)
                {
                    c[i].withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Account not found";
            break;
        case 5:
            cout << "Have a nice day";
            break;
        default:
            cout << "Invaliud option";
        }
    } while (choice != 5);
    return 0;
}




