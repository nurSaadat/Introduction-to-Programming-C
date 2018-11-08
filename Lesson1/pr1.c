/*
 * pr1.c
 *
 *  Created on: 3 θών. 2018 γ.
 *      Author: Sunny
 */

#include <stdio.h>

double power(double x, int k) {
	double res = 1;

	while (k > 0){
		res = res * x;
		k --;
	}

	return res;
}

double factorial(double k) {
	double res = 1;
	while (k > 0) {
		res = res * k;
		k--;
	}
	return res;
}

double my_sin(double x){
	int k = 10, i;
	double mSin = 0.0;

	x = (x * 3.142) / 180;

	for (i = 0; i < k; i ++){
		int helper = 2*i + 1;
		if (i % 2 == 0) {
			mSin = mSin + (power(x, helper) / factorial (helper));
		} else {
			mSin = mSin - (power(x, helper) / factorial (helper));
		}
	}

	return mSin;
}

int main(void){

	double angleDeg;
	scanf("%lf", &angleDeg);
	double res = my_sin(angleDeg);
	printf("I found a sin %lf", res);

	/*double fact;
	scanf("%lf", &fact);
	res = factorial (fact);
	printf("I found a fact %lf", res);
	double pow;
	scanf("%lf", &pow);
	res = power (fact ,pow);
	printf("I found a power %lf", res);*/

	return 0;
}
