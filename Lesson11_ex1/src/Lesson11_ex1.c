/*
 * Lesson11_ex1.c
 *
 *  Created on: 3 окт. 2017 г.
 *      Author: Sunny
 */


#include <stdio.h>
#include <math.h>

typedef struct{
	int y;
	int x;
}coord;
typedef struct {
	coord vertex[6];
} Hexagon;

void swap (Hexagon* hex){
	int i, temp;
	for (i = 0; i < 6; i++){
	temp = hex->vertex[i].x;
	hex->vertex[i].x = hex->vertex[i].y;
	hex->vertex[i].y = temp;
	}
}

int main (){



	Hexagon Garry = {
					{{5, -2},
					{5, 2},
					{3, 5},
					{1, 4},
					{0, 0},
					{2, -2}},

	};
	int i;
	for (i = 0; i < 6; i++){

	printf ("%i  %i \n",Garry.vertex[i].y, Garry.vertex[i].x );

	}

	swap (&Garry);

	printf ("\n magic \n");

	for (i = 0; i < 6; i++){

		printf ("%i  %i \n",Garry.vertex[i].y, Garry.vertex[i].x );

		}


	return 0;
}
