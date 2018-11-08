/*
 * L12_ex2.c
 *
 *  Created on: 4 окт. 2017 г.
 *      Author: Sunny
 */

#include <stdio.h>
#include <stdlib.h>

#define DROP_LOWEST_QUIZ 0

#if DROP_LOWEST_QUIZ == 1
	#define QUIZ_NUMBER 5
	#define LAB_NUMBER 6

#elif DROP_LOWEST_QUIZ == 0
	#define QUIZ_NUMBER 6
	#define LAB_NUMBER 6
#endif

int* qalloc(){
	return (int*)malloc(QUIZ_NUMBER * sizeof(int));
}

int* laballoc(){
	return (int*)malloc(LAB_NUMBER * sizeof(int));
}

int gradeSum (int *values, int n){
	int sum = 0, i = 0;
	for (;i < n; i++){
		sum = sum + *(values+i);
	}

	return sum;
}

double gradeQuiz(int *values, int n){
	int sumScore = gradeSum(values, n);
	int fullGrade = 15 * QUIZ_NUMBER;
	float percentage = (100 * sumScore) / fullGrade;
	return (percentage * 50)/ 100;
}

double gradeLab(int *values, int n){
	int sumScore = gradeSum(values, n);
	int fullGrade = 2 * LAB_NUMBER;
	float percentage = (100 * sumScore) / fullGrade;
	return (percentage * 20)/ 100;
}

int main (){

	setvbuf(stdout, NULL, _IONBF, 0);

	int *quizes = qalloc();
	int *labs = laballoc();
	int final;

	if (labs == NULL || quizes == NULL){
		return 1;
	}

	int i = 0;
	for (; i < QUIZ_NUMBER; i++){
		printf ("Please, enter your %ith quiz result -> ", i+1);
		scanf ("%i", quizes+i);
	}

	double quizTotal = gradeQuiz (quizes, QUIZ_NUMBER);
	printf ("\n Cool! \n");

	for (i = 0; i < LAB_NUMBER; i++){
		printf ("Please, enter your %ith lab result -> ", i+1);
		scanf ("%i", labs+i);
	}

	double labTotal = gradeLab (labs, LAB_NUMBER);

	printf ("Please, enter your final test result -> ");
	scanf ("%i", &final);

	final = (final * 30)/100;

	double grade = labTotal + quizTotal + final;

	printf ("Your final grade is %.1f", grade);

	return 0;
}
