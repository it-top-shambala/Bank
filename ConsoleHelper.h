#ifndef BANK_CONSOLEHELPER_H
#define BANK_CONSOLEHELPER_H

#include <iostream>

#include "BankAccount.h"
#include "Bank.h"

using namespace std;

void PrintAccount(BankAccount* account) {
    cout << "[ " << account->number << " -> " << account->owner << " ] : " << account->balance << endl;
}

void PrintAccounts(vector<BankAccount*> accounts) {
    for (BankAccount* account : accounts) {
        PrintAccount(account);
    }
}

#endif //BANK_CONSOLEHELPER_H
