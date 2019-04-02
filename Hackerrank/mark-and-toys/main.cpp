#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;
//https://www.hackerrank.com/challenges/mark-and-toys/

int compare(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

//k = budget, prices_count = how many toys, prices = array with values of toys stored in it
int maximumToys(int prices_count, int* prices, int k) {
	int counter = 0;
	unsigned long long sum = 0;
	qsort(prices, prices_count, sizeof(int), compare);
	for (int i = 0; i < prices_count; i++)
	{
		sum += prices[i];
		if (sum <= k) counter++;
	}

	//cout << counter;
	return counter;
}

int maximumToysTwo(int prices_count, int* prices, int k)
{
	int counter = 0;
	unsigned long long sum = 0;

	for (int i = 0; i < prices_count; i++)
	{
		if (prices[i] < k)
		{
			sum += prices[i];
			if (sum < k)
			{
				counter++;
			}
		}
	}
	cout << counter;
	return counter;
}



int main()
{
	const int num = 9;
	int price[num] = { 5,5,1,1,1,1,1,1,1};

	maximumToys(num, price, 50);
	maximumToysTwo(num, price, 5);

	getchar();
	return 0;
}