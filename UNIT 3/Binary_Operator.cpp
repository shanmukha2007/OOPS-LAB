#include <iostream>
using namespace std;

class Bank_Account {
    float balance;

public:
    Bank_Account(float b = 0) : balance(b) {}
    Bank_Account operator+(Bank_Account acc) {
        return Bank_Account(balance + acc.balance);
    }

    void show() {
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    Bank_Account acc1(5000), acc2(3500);
    Bank_Account total = acc1 + acc2;

    cout << "Account 1: ";
    acc1.show();

    cout << "Account 2: ";
    acc2.show();

    cout << "Total Account: ";
    total.show();

    return 0;
}

