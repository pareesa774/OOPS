#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    string holderName;
    double balance;

public:

    void setAccount(){
        cout << "Enter account holder name: ";
        cin >> holderName;

        balance = 0;
    }

    void deposit(double amount){
        if (amount > 0)
        {
            balance = balance + amount;
        }
    }

    void withdraw(double amount){
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else if (amount > 0)
        {
            balance = balance - amount;
        }
    }

    void showBalance()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main(){
    BankAccount b;

    b.setAccount();

    b.deposit(500);
    b.withdraw(200);
    b.withdraw(1000);

    b.showBalance();

    return 0;
}