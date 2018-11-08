/*
 * L12_ex3.c
 *
 *  Created on: 4 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>
#include <stdlib.h>

#define ELEMENT_TYPE int

#define ARRAY_SIZE 5

int main (){
	setvbuf(stdout, NULL, _IONBF, 0);

	ELEMENT_TYPE *array = (ELEMENT_TYPE*)malloc (ARRAY_SIZE* sizeof(ELEMENT_TYPE));

	int i;
	for (i = 0; i < ARRAY_SIZE; i++){
		printf("enter %ith element -> ", i+1);
		scanf("%i", array+i);
		}

	ELEMENT_TYPE minVal = *array;
	for (i = 1; i < ARRAY_SIZE; i++){
			if ( minVal > *(array+i)){
				minVal = *(array+i);
			}
		}

	printf ("%i", minVal);

	return 0;
}
