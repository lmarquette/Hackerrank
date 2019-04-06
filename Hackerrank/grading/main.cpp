//https://www.hackerrank.com/challenges/grading/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
using namespace std;

int* gradingStudents(int grades_count, int* grades, int* result_count) {
	/*
	 * Write your code here.
	 */ //do 84%5 then subtract the answer by 84 to round down then add 5;
	int *b = (int*)malloc(sizeof(int) * grades_count);

	for (int i = 0; i < grades_count; i++)
	{
		int round_up_to_5 = (grades[i] - grades[i] % 5) + 5;

		if (round_up_to_5 - grades[i] == 3 && grades[i] > 38) // == 3 grade is same
		{
			b[i] = grades[i];
		}
		else if (round_up_to_5 - grades[i] < 3 && grades[i] >= 38) // < 3 round grade up
		{
			b[i] = round_up_to_5;
		}
		else
		{
			b[i] = grades[i];
		}
	}
	*result_count = grades_count;
	return b;
}

int main()
{
	FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
	int n_grades = 0;
	fscanf(stdin, "%d", &n_grades);

	int *grades = (int*)malloc(sizeof(int) * n_grades);

	for (int i = 0; i < n_grades; i++)
	{
		fscanf(stdin, "%d", &grades[i]);
	}


	int *result = gradingStudents(n_grades, grades, &n_grades);

	for (int i = 0; i < n_grades; i++)
	{
		fprintf(fptr, "%d\n", result[i]);
	}
	
	
	getchar();
	return 0;
}