#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

//https://www.hackerrank.com/challenges/picking-numbers/problem

int compare(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

int pickingNumbers(int a_count, int* a) {
	
	int *tmp_arr = new int[a_count];

	int max = 0;
	int counter = 1;
	int answer = counter;
	int index = 0;
	int counter_index = 0;

	for (int i = 0; i < a_count; i++)
	{
		tmp_arr[i] = (int)malloc(sizeof(int) * a_count);
		tmp_arr[i] = 0;
	}

	qsort(a, a_count, sizeof(int), compare);

	cerr << "sorted: " << endl;
	for (int i = 0; i < a_count; i++)
	{
		cerr << a[i] << endl;
	}
	cerr << endl;
	//finds the first position in the array where side by side values <= 1
	for (int i = 0; i < a_count; i++)
	{
		if (abs(a[i] - a[i + 1]) <= 1)
		{
			max = a[i];
			index = i;
			break;
		}
	}

	for (int i = index + 1; i < a_count; i++)
	{
		if(abs(max - a[i]) <= 1)
		{
			counter++;
		}
		else
		{
			counter_index++;
			counter = 1;
			max = a[i]; //update max value for comparision of <= 1
		}
		tmp_arr[counter_index] = counter;
	}

	for (int i = 0; i <= counter_index; i++)
	{
		if (tmp_arr[i] > answer) answer = tmp_arr[i];
	}

	return answer;
}

int main()
{
	//const int a_count = 9;
	//int a[a_count] = { 1,1,2,2,4,4,5,5,5 };
	const int a_count = 73;
	int a[a_count] = { 4, 2, 3, 4, 4, 9, 98, 98, 3, 3, 3, 4, 2, 98, 1, 98, 98, 1, 1, 4, 98, 2, 98, 3, 9, 9, 3, 1, 4, 1, 98, 9, 9, 2, 9, 4, 2, 2, 9, 98, 4, 98, 1, 3, 4, 9, 1, 98, 98, 4, 2, 3, 98, 98, 1, 99, 9, 98, 98, 3, 98, 98, 4, 98, 2, 98, 4, 2, 1, 1, 9, 2, 4 };

	int r = pickingNumbers(a_count, a);

	cout << "answer: " << r << endl;

	getchar();
	return 0;
}