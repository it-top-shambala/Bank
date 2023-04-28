#ifndef BANK_CONSOLEHELPER_H
#define BANK_CONSOLEHELPER_H

#include <iostream>

#include "BankAccount.h"

using namespace std;

void PrintAccount(BankAccount& account) {
    cout << "[ " << account.number << " -> " << account.owner << " ] : " << account.balance << endl;
}

#endif //BANK_CONSOLEHELPER_H
