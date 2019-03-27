//https://www.hackerrank.com/challenges/ctci-array-left-rotation/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int* rotLeft(int a_count, int* a, int d, int* result_count) 
{
	int tmp;
	int counter = 0;
	while (counter != d)
	{
		for (int i = 0; i < d; i++)
		{
			tmp = a[0];
			if(i != d)a[i] = a[i + 1];
			else { a[i] == tmp; }
		}
		cout << endl;
		counter++;
	}

	return 0;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int count = 5;
	rotLeft(5, arr, 4, &count);
	getchar();
	return 0;
}
