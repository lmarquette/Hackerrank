//https://www.hackerrank.com/challenges/electronics-shop/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable:4996)
using namespace std;



long long int getMoneySpent(int keyboards_count, long long int* keyboards, int drives_count, long long int* drives, long long int b) {
	long long int max_sum = -1;
	for (int i = 0; i < keyboards_count; i++)
	{
		for (int j = 0; j < drives_count; j++)
		{
			if (keyboards[i] + drives[j] <= b)
			{
				if (keyboards[i] + drives[j] > max_sum) max_sum = keyboards[i] + drives[j];
			}
			//if (keyboards[i] + drives[j] > max_sum && keyboards[i] + drives[j] < b) max_sum = keyboards[i] + drives[j];
		}
	}
	//cout << max_sum << endl;
	//printf("%lld", max_sum);
	return max_sum;
}

int main()
{
	FILE *f = fopen("teee.txt", "r");//stdin;
	//FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

	int keyboards;
	int drives;
	long long int *keyboard_price = (long long int*)malloc(sizeof(long long int) * 100000);
	long long int *drives_price = (long long int*)malloc(sizeof(long long int) * 100000);
	long long int money;

	fscanf(f, "%lld %d %d\n", &money, &keyboards, &drives);
	for (int i = 0; i < keyboards; i++)
	{
		fscanf(f, "%lld", &keyboard_price[i]);
	}

	for (int i = 0; i < drives; i++)
	{
		fscanf(f, "%lld", &drives_price[i]);
	}
	

	long long int r = getMoneySpent(keyboards, keyboard_price, drives, drives_price, money);
	//fprintf(fptr, "%lld", r);
	printf("%lld\n", r);

	system("pause");
	return 0;
}