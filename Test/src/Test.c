/*
 * Test.c
 *
 *  Created on: 6 но€б. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char x;
	double y;
} myType;

int* intalloc () {
	return (int*) malloc (sizeof(int));
}

myType* mtalloc () {
	return (myType*) malloc (sizeof(myType));
}

