//https://www.hackerrank.com/challenges/divisible-sum-pairs/
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
	int sum = 0;

	for (int i = 0; i < ar_count; i++)
	{
		for (int j = i + 1; j < ar_count; j++)
		{
			//cout << (ar[i] + ar[j]) << endl;
			if ((ar[i] + ar[j]) % k == 0) sum++;
		}
	}
	return sum;
}

int main()
{
	const int n = 6;
	int ar_count = n;
	int ar[n] = { 1,3,2,6,1,2 };
	int k = 3;

	int r = divisibleSumPairs(n, k, ar_count, ar);
	cout << r << endl;
	getchar();
	return 0;
}