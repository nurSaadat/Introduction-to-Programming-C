/*
 * L15_ex1.c
 *
 *  Created on: 7 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>

typedef struct {
	int r, g, b;
} Color;

typedef struct {
	int x, y;
} Coord;

typedef struct {
	Coord upLeftCorner;
	int sideLenght;
	Color outlineColor;
	Color fillColor;
} Square;

typedef struct {
	Coord upLeftCorner;
	int sideA, sideB;
	Color outlineColor;
	Color fillColor;
} Rectangle;

int main (){

	Color white = {255, 255, 255};
	Color yellow = {255, 255, 0};
	Color goldenYellow = {218, 165, 32};

	Coord corner = {10, 10};

	int side = 5;

	Square spongeBob;
	spongeBob.upLeftCorner = corner;
	spongeBob.sideLenght = side;
	spongeBob.outlineColor = goldenYellow;
	spongeBob.fillColor = yellow;

	Rectangle Bob;
	Bob.upLeftCorner.x = 60;
	Bob.upLeftCorner.y = 50;
	Bob.sideA = 20;
	Bob.sideB = 20;
	Bob.outlineColor = goldenYellow;
	Bob.fillColor = white;


	return 0;
}
