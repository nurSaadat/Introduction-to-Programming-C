/*
 * L13_ex1.c
 *
 *  Created on: 4 окт. 2017 г.
 *      Author: Sunny
 *
 *      Using nested loops, create a 12 x 12 matrix for representing a multiplication table,
 *      where the i, jth element of the matrix stores the value i * j.
 *      Use a second pair of nested loops to print out the contents of your matrix.
 */

#include <stdio.h>


typedef struct {
	int punch;
	int kick;
	int ultimateScream;
} Hit;

struct Pet{
	int chakra;
	int life;
	Hit point;
};


int main (){

	setvbuf(stdout, NULL,  _IONBF, 0);

	struct Pet goose = {10, 10};
	struct Pet fish = {15, 8};

	Hit gg = {1, 2, 5};

	fish.life = goose.chakra;

	printf ("so we have goose %i %i", goose.chakra, goose.life);
	printf ("\n and we have fish %i %i \n"
			"what do you want to do\?", fish.chakra, fish.life);

	int option;

	while (fish.life > 0){

	scanf ("%i", &option);

	switch (option) {
	case 1 :
		fish.life -= gg.kick;
		break;
	case 2 :
		fish.life -= gg.punch;
		break;
	case 3 :
		fish.life -= gg.ultimateScream;
		break;
	}
	printf ("fish has %i lifepoints \n", fish.life);
	}
	printf ("You won!!!");

	return 0;
}
