/*
 * firstLab.c

 *  Created on: 13 сент. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>
#include <math.h>

_Bool isPrime(int n){
	_Bool proof;

	int i, arr[n+1], rem, count = 0;
	arr[0] = 0;

	for (i = 1; i < n+1; i++){
		arr[i] = i;
		rem = n % arr[i];
		if (rem == 0){
			count ++;
		}
	}

	if (count <= 2){
		proof = 1;
		printf ("%i is prime \n", n);
	} else {
		proof = 0;
		printf ("%i is NOT prime \n", n);
	}

	return proof;
}

int main (void){

	setvbuf(stdout, NULL, _IONBF, 0);

	int x = 1;

	while (x > 0) {
	printf ("Enter some number, please \n");
	scanf ("%i", &x);

	if (x < 0){
		break;
	}


	printf ("Let's check if it's prime \n");

	isPrime (x);

	}

	return 0;
}
