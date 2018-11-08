/*
 * Lesson6_ex2.c
 *
 *  Created on: 18 сент. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>

_Bool isIdeal(int n){

	_Bool proof;
	int sum = 0, i;

	for (i = 1; i < n; i++){
		if (n % i == 0){
			sum = sum + i;
		}
	}

	if (n == sum){
		proof = 1;
		printf ("%i is ideal \n", n);
		} else {
		proof = 0;
		printf ("%i is NOT ideal \n", n);
		}
	return proof;
}

int main (void){
	setvbuf(stdout, NULL, _IONBF, 0);

	int number;

	printf ("Enter some number here: \n");
	scanf ("%i", &number);

	printf ("Let's check if it's ideal number \n");
	isIdeal (number);

	return 0;
}
