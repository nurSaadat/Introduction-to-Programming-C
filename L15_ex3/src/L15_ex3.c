/*
 * L15_ex3.c
 *
 *  Created on: 15 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>

typedef struct {
	int ID;
	char accountType; //'c' for checking, 's' for savings, 'd' for deposit
	int accountBalance;
}BankCustomer;

int main (){

	setvbuf(stdout, NULL, _IONBF, 0);

	FILE * input;

	input = fopen ("customerList.txt", "r");

	if (input == NULL){

		printf ("Something went wrong");
		return 1;
	}

	printf ("File opened successfully.");

	BankCustomer customerList [10];

	int k;
	int cCount = 0, sCount = 0, dCount = 0;
	int c = 0, s = 0, d = 0;
	for (k = 0; k < 10; k++){
	fscanf (input,"%i %c %i", &customerList[k].ID, &customerList[k].accountType, &customerList[k].accountBalance);
	printf(	"For customer #%i ID: %i \n "
			"Type of acc: %c \n "
			"Balance: %i \n",
			k, customerList[k].ID, customerList[k].accountType, customerList[k].accountBalance);
	if (customerList[k].accountType=='c') {cCount++; c+=customerList[k].accountBalance;}
	if (customerList[k].accountType=='s') {sCount++; s+=customerList[k].accountBalance;}
	if (customerList[k].accountType=='d') {dCount++; d+=customerList[k].accountBalance;}
	}
	printf(	"Average balance for Checking acc: %i \n "
			"Average balance for saving acc:%i \n "
			"Average balance for deposit acc: %i \n",
			c/cCount, s/sCount, d/dCount);
	fclose(input);


	return 0;
}



