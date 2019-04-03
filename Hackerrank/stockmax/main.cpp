#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#pragma warning(disable: 4996)
using namespace std;

//https://www.hackerrank.com/challenges/stockmax

// Complete the stockmax function below.
//1,2,3,1,2,4
int stockmax(int prices_count, int* prices) {
	//cout << "start of function" << endl;
	int counter = 0;
	int index = prices_count - 1;
	unsigned long long sum = 0;
	int high_price = prices[index];
	
	for (int i = index; i > 0; i--)
	{
		if (prices[i-1] < prices[i]) //buying
		{
			counter++;
			sum = sum - prices[i - 1];
		}
		if (prices[i-1] > prices[i]) //selling
		{
			sum = sum + high_price * counter;
			cout << "Sum after selling: " << sum << endl;
			high_price = prices[i-1];
			counter = 0;
		}
		if (i == 1)
		{
			//cout << "End of array" << endl;
			//cout << "Sum: " << sum << endl;
			//cout << "High Price: " << high_price << endl;
			//cout << "Couunter: " << counter << endl;
			sum = sum + high_price * counter;
		}
	}
	//cout << "sum:" << sum << endl;
	return sum;
}

int main()
{
	//FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

	int number_of_tests = 0;
	int *prices = (int*)malloc(sizeof(int) * 10000);
	int n_prices = 0;

	//printf("Number of tests:");
	fscanf(stdin, "%d", &number_of_tests);
	for (int i = 0; i < number_of_tests; i++)
	{
		//("Number of prices:");
		fscanf(stdin, "%d", &n_prices);
		for (int j = 0; j < n_prices; j++)
		{
			//printf("Each price:");
			fscanf(stdin, "%d", &prices[j]);
		}
		unsigned long long r = stockmax(n_prices, prices);
		//fprintf(fptr, "%u", r);
		printf("%u\n", r);
	}
	system("pause");
	getchar();
	return 0;
}