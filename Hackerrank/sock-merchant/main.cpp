//https://www.hackerrank.com/challenges/sock-merchant/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int sockMerchant(int n, int ar_count, int* ar) {
	int counter = 0;
	qsort(ar, n, sizeof(int), compare);

	for (int i = 0; i < ar_count; i++)
	{
		if (ar[i] == ar[i + 1])
		{
			counter++;
			i++;
		}
	}
	return counter;
}

int main()
{
	const int n = 9;
	int ar_count = n;
	int ar[n] = { 10,20,20,10,10,30,50,10,20 };

	int r = sockMerchant(n, ar_count, ar);
	cout << r;

	getchar();
	return 0;
}