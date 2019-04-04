//https://www.hackerrank.com/challenges/mini-max-sum/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
using namespace std;

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
	int sum = 0;
	int max_sum = 0;
	int min_sum = 0;
	for (int i = 0; i < arr_count; i++)
	{
		sum += arr[i];
	}
	max_sum = sum - arr[0];
	min_sum = sum - arr[0];

	for (int i = 0; i < arr_count; i++)
	{
		if(sum - arr[i] > max_sum) max_sum = sum - arr[i];
		
		if (sum - arr[i] < min_sum) min_sum = sum - arr[i];
	}

	cout << max_sum << endl;
	cout << min_sum << endl;
}

int main()
{
	const int array_size = 5;
	int tmp_arr[array_size];
	
	for (int i = 0; i < array_size; i++)
	{
		fscanf(stdin,"%d", &tmp_arr[i]);
	}

	miniMaxSum(array_size, tmp_arr);

	getchar();
	return 0;
}