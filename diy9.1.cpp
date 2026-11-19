#include <iostream>
using namespace std;

class InsufficientFunds {};

class BankAccount {
    int balance = 5000;

public:
    void withdraw(int amount) {
        if(amount > balance)
            throw InsufficientFunds();

        balance -= amount;
        cout << "Remaining Balance: " << balance;
    }
};

int main() {
    BankAccount b;

    try {
        b.withdraw(6000);
    }
    catch(InsufficientFunds) {
        cout << "Insufficient Funds!";
    }

    return 0;
}