//https://www.hackerrank.com/challenges/birthday-cake-candles/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>	

using namespace std;

int birthdayCakeCandles(int ar_count, int* ar) {
	long long int sum = 0;
	long long int biggest_number = 0;

	for (int i = 0; i < ar_count; i++)
	{
		if (ar[i] > biggest_number) biggest_number = ar[i];
	}

	for (int i = 0; i < ar_count; i++)
	{
		if (ar[i] == biggest_number) sum++;
	}

	return sum;
}

int main()
{
	const int ar_count = 4;
	int ar[ar_count] = { 3,2,1,3 };

	int r = birthdayCakeCandles(ar_count, ar);
	printf("%d", r);


	getchar();
	return 0;
}