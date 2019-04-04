//https://www.hackerrank.com/challenges/simple-array-sum/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


int simpleArraySum(int ar_count, int* ar) {
	int sum = 0;

	for (int i = 0; i < ar_count; i++)
	{
		sum += ar[i];
	}
	return sum;
}


int main()
{
	const int ar_size = 6;
	int ar[ar_size] = { 1,2,3,4,10,11 };

	int r = simpleArraySum(ar_size, ar);
	cout << r;

	getchar();
	return 0;
}