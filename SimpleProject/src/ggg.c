/*
 * ggg.c
 *
 *  Created on: 28 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>

void stringCopy(char fromStr[], char toStr[]){
	 int i;

	 for (i = 0; i < 50; i ++){
		 while (fromStr[i] != '\n'){
		 toStr[i] = fromStr[i];
		 }
	 }
}

 int main (){
	 setvbuf(stdout, NULL, _IONBF, 0);

	 char fromStr [49];
	 char toStr [50];


	 scanf ("%s", fromStr);
	 stringCopy(fromStr, toStr);
	 printf ("%s", toStr);

	 return 0;

 }
