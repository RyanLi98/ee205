#include "BankAccount.h"

struct BankAccount {
	double balance;
	double last_withdrawal;
	double last_deposit;
}
BankAccount* BankAccount_construct(double balance){

	BankAccount *ba = malloc(sizeof(BankAccount));
//	ba->balance = balance;
//	ba->last_withdrawal = 0;
//	ba-> last_deposit = 0;
	
//	return ba;
	
}
void BankAccount_destroy(BankAccount* ba){

	free(ba);
}

int BankAccount_deposit(BankAccount* ba, double amount){

	if  (ba->balance += amount > DBL_MAX)
		return 1;
	else if (amount < DBL_MIN)
		return -1;
	else (ba->balance += amount < DBL_MAX) && (amount > DBL_MIN)
		return 0;  

}

int BankAccount_withdraw(BankAccount* ba, double amount){

	return ba->balance -= amount;
}

double BankAccount_get_balance(BankAccount* ba){

	return ba->last_deposit;
}

double BankAccount_get_last_withdrawal(BankAccount* ba){

	return ba->last_withdrawal;
}
/*
 * Implement the definitions for the
 * functions involving BankAccount from BankAccount.h here,
 *
 * Make sure to produce comments that look like this!
 * (Try to copy the formatting.)
 *
 * For BankAccount_construct() and BankAccount_destroy(),
 * if you do not remember malloc() and free(), review them
 * by creating a toy program.
 */

