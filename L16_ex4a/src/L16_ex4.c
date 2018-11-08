/*
 * Lesson5_ex1.c
 *
 *  Created on: 19 сент. 2017 г.
 *      Author: Sunny
 */


#include <stdio.h>
#include <math.h>

void sumOfDigits(int n){

	int sum = 0, g, i, c;

	for (i = 10; i >= 0; i--){

		c =pow(10, i);
		g = n / c;
		sum = sum + g;
		n = n % c;

	}

	printf ("%i", sum);
}

int main (void){
	setvbuf(stdout, NULL, _IONBF, 0);

	int number;

	printf ("Enter some number here: \n");
	scanf ("%i", &number);

	sumOfDigits (number);

	return 0;
}

