//https://www.hackerrank.com/challenges/plus-minus/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void plusMinus(int arr_count, int* arr) {
	double pos_sum = 0;
	double neg_sum = 0;
	double zero_sum = 0;

	for (int i = 0; i < arr_count; i++)
	{
		if (arr[i] == 0) zero_sum++;
		if (arr[i] > 0) pos_sum++;
		if (arr[i] < 0) neg_sum++;
	}

	pos_sum = pos_sum / arr_count;
	neg_sum = neg_sum / arr_count;
	zero_sum = zero_sum / arr_count;

	printf("%.6f\n", pos_sum);
	printf("%.6f\n", neg_sum);
	printf("%.6f\n", zero_sum);
}

int main()
{
	const int arr_count = 6;
	int arr[arr_count] = { -4,3,-9,0,4,1 };

	plusMinus(arr_count, arr);

	getchar();
	return 0;
}