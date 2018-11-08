/*
 * L16_ex2.c
 *
 *  Created on: 15 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>
#include <math.h>

double  sinApprox (double x, int n){

	//x is for number, n is for certainty
	double sinVal;
	int i, factorial[n];
	factorial[0] = 1;

	for (i = 1; i < n+1; i++){
		factorial[i] = i * factorial[i-1];
	}

	for (i = 1; i < n+1; i+=2){
		sinVal = sinVal + pow(x, i) / factorial[i];
	}


	return sinVal;
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
		x =  sinApprox (x, n);

	//output
		printf ("Sin funct is equal to %lf \n", x);
	};

	return 0;
}

