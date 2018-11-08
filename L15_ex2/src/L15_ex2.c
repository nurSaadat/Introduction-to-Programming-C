/*
 * L15_ex2.c
 *
 *  Created on: 9 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>

typedef struct {
	int r, g, b;
} Color;

typedef struct {
	int x, y;
} Coords;

typedef struct {
	Coords point1;
	Coords point2;
	Color color;
} LineSegment;

typedef struct {
	Color color;
	Coords point[5];
} Pentagon;

int main (){

	setvbuf(stdout, NULL, _IONBF, 0);

	FILE * input;

	input = fopen ("values.txt", "r");

	if (input == NULL){

		printf ("Something went wrong");
		return 1;
	}

	printf ("File opened successfully.");

	printf ("You decided to draw a pentagon \n");
	printf ("Please, select color of your figure \n");
	printf ("I want color to be ... \n");

	int fileVal[50];
	int i, j;

	for (i = 0; i < 13; ++i)
	{
	fscanf(input, "%i", &j);
	fileVal[i] = j;
	}

	Pentagon shape;

	shape.color.r = fileVal [0];
	shape.color.g = fileVal [1];
	shape.color.b = fileVal [2];

	for (i = 0, j = 3; i < 5, j < 13; i++, j = j + 2)
	{
	shape.point[i].x = fileVal[j];
	shape.point[i].y = fileVal[j+1];
	}


	printf ("Pentagon's color is %i %i %i \n", shape.color.r, shape.color.g, shape.color.b);

	for (i = 0; i < 5; i++){
			printf ("Pentagon's point coordinates are (%i; %i) \n", shape.point[i].x, shape.point[i].y);

		}


	return 0;
}
