/*
 * L18_ex3.c
 *
 *  Created on: 21 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>
/*#include <math.h>

double strToDouble (char num[]) {
 int i = 0, idMinus, power = 0;
 double k = 10, intValue, result = 0;

 if (num[i] == '-'){
	 idMinus = 1;
	 i++;
 } else {
	 idMinus = 0;
 }

 for (; num[i] >= '0' && num[i] <= '9'; i++) {
 intValue = num[i] - '0';
 result = result * 10 + intValue;
 }

 if(num[i] == '.') {
 i++;
 for (; num[i] >= '0' && num[i] <= '9'; i++) {
 intValue = num[i] - '0';
 result = intValue / k + result;
 k *= 10;
 }
 }

 if (num[i] == 'e'){
	i++;
	if (num[i] == '-'){
		i++;
		for (; num[i] >= '0' && num[i] <= '9'; i++) {
			intValue = num[i] - '0';
			power = power * 10 + intValue;
		}
		power = power * (-1);
	} else {
	for (; num[i] >= '0' && num[i] <= '9'; i++) {
		 intValue = num[i] - '0';
		 power = power * 10 + intValue;
		 }
	}
	result = result * pow (10, power);
}

if (idMinus == 1){
	 return result * (-1);
	} else {
		return result;
	}

}

int main() {
	printf("%lf \n", strToDouble("123456"));
	printf("%lf \n", strToDouble("-123.456"));
	printf("%g \n", strToDouble("123.456e-13"));
	printf("%g \n", strToDouble("123.456e13"));


 return 0;
}*/


double my_sin(double x){
	int k = 10;
	int i;

	x = (x * 3.142) / 180;

	double mSin = x;
	double b = x;

	for (i = 1; i < k; i ++){

			int helper1 = 2*i;
			int helper2 = helper1 + 1;

			if (i % 2 == 0) {
				double m = x * x;
				int f = helper1 * helper2;
				b = b * (m/f);
				mSin = mSin + b;
				printf("Im here! %lf", mSin);
			} else {
				double m = x * x;
				int f = helper1 * helper2;
				b = b * (m/f);
				mSin = mSin - b;
				printf("Heuy %lf", mSin);
			}
		}


	return mSin;
}

int main(void){

	double angleDeg;
	scanf("%lf", &angleDeg);
	double res = my_sin(angleDeg);
	printf("I found a sin %lf", res);

	return 0;
}
