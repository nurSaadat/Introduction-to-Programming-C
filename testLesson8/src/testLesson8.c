/*
 * testLesson8.c
 *
 *  Created on: 20 сент. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	char ch;

	FILE * inputFile;

	inputFile = fopen ("inputFileName.txt", "r");

	FILE * outputFile;

	outputFile = fopen ("outputFileName.txt" , "w");

	if (inputFile == NULL || outputFile == NULL){

		printf ("Something went wrong");
		return 1;
			}

	printf ("Files opened successfully. \n");

	do {
			ch = getc (inputFile);
			fprintf (outputFile, "%c", ch);

		} while (ch != EOF);

	/*char ch;

	do {

	ch = getchar();
	counter++;

	} while ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));

	printf ("%i", counter);*/
	return 0;
}
