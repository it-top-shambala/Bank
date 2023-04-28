#ifndef BANK_BANKACCOUNT_H
#define BANK_BANKACCOUNT_H

#include <string>

using namespace std;

struct BankAccount {
    int number;
    double balance;
    string owner;

    void Deposit(double money) {
        if (money > 0) {
            balance += money;
        }
    }

    bool Withdraw(double money) {
        if (money > 0) {
            if (balance >= money) {
                balance -= money;
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }

    bool Transfer(double money, BankAccount& account) {
        if (Withdraw(money)) {
            account.Deposit(money);
            return true;
        } else {
            return false;
        }
    }
};

BankAccount* OpenAccount(int number, string owner) {
    BankAccount account;

    account.number = number;
    account.owner = owner;
    account.balance = 0;

    return &account;
}

#endif //BANK_BANKACCOUNT_H
