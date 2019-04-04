//https://www.hackerrank.com/challenges/ctci-array-left-rotation/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
//a_count = array size, d = number of rotations, a = array, result_count = value of array size
int* rotLeft(int a_count, int* a, int d, int* result_count) 
{
	int *b = (int*)malloc(sizeof(int)*a_count);
	int tmp;
	int counter = 0;
	
	for (int i = 0; i < (a_count - d); i++)
	{
		b[counter] = a[i + d]; //grabs last value in array a
		cout << b[counter];
		counter++;
	}
	
	for (int i = 0; i < d; i++)
	{
		b[counter] = a[i];
		cout << b[counter];
		counter++;
	}

	*result_count = a_count;
	return b;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int count = 5;
	rotLeft(5, arr, 4, &count);

	getchar();
	return 0;
}
