#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    double balance = 0;

public:
    string accountHolder;
    string accountNumber;

    void showBalance() {
        cout << "Available balance: ₹" << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited ₹" << amount << " successfully." << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance for withdrawal." << endl;
            return;
        }

        balance -= amount;
        cout << "Withdrawal of ₹" << amount << " successful." << endl;
        showBalance();
    }
};

int main() {
    BankAccount b1;

    b1.accountNumber = "12345";
    b1.accountHolder = "Anish Kumar";

    b1.deposit(15000);
    b1.showBalance();
    b1.withdraw(1000);
}
