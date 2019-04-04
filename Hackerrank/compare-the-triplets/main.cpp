//https://www.hackerrank.com/challenges/compare-the-triplets/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
	*result_count = 2;
	int *return_array = (int*)malloc(sizeof(int) * 5);
	return_array[0] = 0;
	return_array[1] = 0;

	for (int i = 0; i < a_count; i++)
	{
		if (a[i] > b[i]) return_array[0]++;
		if (a[i] < b[i]) return_array[1]++;
	}

	return return_array;
}


int main()
{
	int a[3] = { 17,28,30 };
	int b[3] = { 99,16,8 };
	int result;
	

	compareTriplets(3, a, 3, b, &result);

	getchar();
	return 0;
}