//https://www.hackerrank.com/challenges/migratory-birds/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int migratoryBirds(int arr_count, int* arr) {
	int max = 0;
	int *tmp_arr = (int*)malloc(sizeof(int) * arr_count);

	for (int i = 0; i < arr_count; i++)
	{
		tmp_arr[i] = 0;
	}

	for (int i = 0; i < arr_count; i++)
	{
		if (arr[i] == 1) tmp_arr[1]++;
		if (arr[i] == 2) tmp_arr[2]++;
		if (arr[i] == 3) tmp_arr[3]++;
		if (arr[i] == 4) tmp_arr[4]++;
		if (arr[i] == 5) tmp_arr[5]++;
	}

	for (int i = 1; i < 5; i++)
	{
		if (tmp_arr[i] > tmp_arr[i + 1]) max = i;
	}
	
	return max;
}

int main()
{
	const int arr_count = 6;
	int arr[arr_count] = { 1,4,4,4,5,3 };

	migratoryBirds(arr_count, arr);

	getchar();
	return 0;
}