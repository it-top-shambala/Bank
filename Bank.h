#ifndef BANK_BANK_H
#define BANK_BANK_H

#include <vector>

#include "BankAccount.h"

using namespace std;

struct Bank {
    int number;
    vector<BankAccount*> accounts;

    Bank() {
        number = 1;
    }

    void OpenAccount(string owner, double money) {
        number += 2;

        BankAccount* account = new BankAccount(number, owner);
        account->Deposit(money);

        accounts.push_back(account);
    }

    BankAccount* FindByNumber(int number) {
        for (BankAccount* account : accounts) {
            if (account->number == number) {
                return account;
            }
        }
        return nullptr;
    }
};

#endif //BANK_BANK_H
