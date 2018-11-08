/*
 * L14_ex0.c
 *
 *  Created on: 5 окт. 2017 г.
 *      Author: Sunny
 *
 */
/*#include <stdio.h>

typedef struct {
	int customerID;
	_Bool isSavings;
	int balance;
	double interestRate;

} account;

int main (void){

	int iD, bal, saveBox;
	_Bool save;

	setvbuf(stdout, NULL, _IONBF, 0);

	account myAcct;

	//read from user ID, isSavings, initial balance

	printf ("Please, enter your ID \n");
	scanf ("%i", &iD);
	printf ("Do you have saving account? (0 or 1) \n");
	scanf ("%i", &saveBox);
	printf ("What amount of money do you want to put on your balance? \n");
	scanf ("%i", &bal);

	save = saveBox;

	myAcct = (account) {iD , save,  bal};

	if (myAcct.isSavings == 1){
	myAcct.interestRate = .02;
	} else {
	myAcct.interestRate = .01;
	}

	int years;
	printf ("For how many years you want to wait? \n");
	scanf ("%i", &years);

	int i;
	for (i = 1; i < years; i++){
		bal = bal * (1+ myAcct.interestRate);
	}

	myAcct.balance = bal;

	printf ("My account records are \n"
			"ID = %i \n"
			"Account type %i \n"
			"Current balance %i \n"
			"Interest rate %f", myAcct.customerID, myAcct.isSavings, myAcct.balance, myAcct.interestRate);
	return 0;
}*/

#include <stdio.h>

int main (){

	int i = 0;

	while (i<3){
		printf ("0");
		i++;
	}

	return 0;
}
