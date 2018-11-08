/*
 * L14_ex1.c
 *
 *  Created on: 5 окт. 2017 г.
 *      Author: Sunny
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define NAME "Saadat"
#define AGE 17
#define HEIGHT 165.4
#define TALENT "Eat bugs"

#define SUM(a, b) a+b

int main (){

	setvbuf(stdout, NULL,  _IONBF, 0);

	printf ("%s \n"
			"%i \n"
			"%f \n"
			"%s \n"
			"%f \n", NAME, AGE, HEIGHT, TALENT, SUM(AGE, HEIGHT));


	return 0;
}
