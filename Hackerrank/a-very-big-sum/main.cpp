//https://www.hackerrank.com/challenges/a-very-big-sum/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

long aVeryBigSum(int ar_count, long long* ar) {
	unsigned long long sum = 0;

	for (int i = 0; i < ar_count; i++)
	{
		sum += ar[i];
	}
	return sum;
}

int main()
{
	const int input = 5;
	long long arr[input] = { 1000000001, 1000000002, 1000000003, 1000000004, 1000000005 };

	long long r = aVeryBigSum(input, arr);

	getchar();
	return 0;
}