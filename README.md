# Bank

Создайте структуру **"Банковский счёт" (BankAccount)**, который имеет следующие свойства:
- номер счета
- баланс
- владелец

Также структура должна иметь методы:
- **"открыть счёт" (open_account)**, который принимает на вход номер счета и имя владельца и создает экземпляр структуры "Банковский счёт" с указанными свойствами.
- **"пополнить счёт" (deposit)**, который принимает на вход сумму денег и увеличивает баланс на эту сумму.
- **"снять со счёта" (withdraw)**, который принимает на вход сумму денег и уменьшает баланс на эту сумму, если на счету достаточно денег.
- **"перевести деньги" (transfer)**, который принимает на вход сумму денег и объект структуры "Банковский счёт", на который нужно перевести деньги, и осуществляет перевод со своего счета на счет указанного объекта.

Затем создайте структуру **"Банк" (Bank)**, которая имеет свойство - список банковских счетов. Структура должна иметь методы:
- **"открыть счёт в банке" (open_account)**, который принимает на вход номер счета и имя владельца и создает экземпляр структуры "Банковский счёт" и добавляет его в список банковских счетов банка.
- **"найти счёт по номеру" (find_account)**, который принимает на вход номер счета и выводит на экран информацию о банковском счете с данным номером.
- **"показать все счета" (show_all_accounts)**, который выводит на экран информацию о всех банковских счетах, которые есть в банке.
