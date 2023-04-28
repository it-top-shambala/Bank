#include "Bank.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    Bank* bank = new Bank();
    bank->OpenAccount("Starinin", 500);
    PrintAccounts(bank->accounts);

    bank->OpenAccount("Starinina");
    PrintAccounts(bank->accounts);

    BankAccount* account = bank->FindByNumber(3);
    BankAccount* account1 = bank->FindByNumber(5);
    account->Transfer(500, account1);
    PrintAccounts(bank->accounts);

    return 0;
}
