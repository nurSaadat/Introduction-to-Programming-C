/*
 * L16_ex1.c
 *
 *  Created on: 16 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>
#include <math.h>

double  expApprox (double x, int n){

	//x is for number, n is for certainty
	double expVal = 1;
	int i, factorial[n];
	factorial[0] = 1;

	for (i = 1; i < n+1; i++){
		factorial[i] = i * factorial[i-1];
		expVal = expVal + pow(x, i) / factorial[i];
	}

	return expVal;
}

int main (){

	setvbuf(stdout, NULL, _IONBF, 0);

	double x = 1;
	int n;

	while (x > 0) {

	//takes value x from user
		printf ("Please, enter \"x\" value \n ");
		scanf ("%lf", &x);

		if (x < 0){
			break;
		}

		printf ("Please, enter \"n\" value \n ");
		scanf ("%i", &n);

	//calls function
		x =  expApprox (x, n);

	//output
		printf ("Exponential funct is equal to %lf \n", x);
	};

	return 0;
}

