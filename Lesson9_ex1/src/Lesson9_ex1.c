/*
 * Lesson9_ex1.c
 *
 *  Created on: 25 сент. 2017 г.
 *      Author: Sunny
 */

#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 5
#define ELEMENT_TYPE float
#define FLOAT

#ifdef INT

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

#else
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);

	ELEMENT_TYPE *array = (ELEMENT_TYPE*)malloc (ARRAY_SIZE* sizeof(ELEMENT_TYPE));

	int i;
	for (i = 0; i < ARRAY_SIZE; i++){
		printf("enter %ith element -> ", i+1);
		scanf("%f", array+i);
		}

	ELEMENT_TYPE minVal = *array;
	for (i = 1; i < ARRAY_SIZE; i++){
			if ( minVal > *(array+i)){
				minVal = *(array+i);
			}
		}

	printf ("%f", minVal);

	return 0;
}
#endif
