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
		tmp = a[0];
		for (int i = 0; i < a_count - 1; i++)
		{
			a[i] = a[i + 1];
			cout << a[i];
		}
		a[a_count - 1] = tmp;
		cout << a[a_count - 1];
		cout << endl;
		counter++;
	}

	cout << "after sorting: ";
	for (int i = 0; i < a_count; i++)
	{
		cout << a[i];
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
