//https://www.hackerrank.com/challenges/diagonal-difference/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {


}



int main()
{
	int matrix_size = 0;
	fscanf(stdin, "%d", matrix_size);

	int **arr = (int**)malloc(sizeof(int*) * matrix_size);

	for (int i = 0; i < matrix_size; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * matrix_size);
		fscanf(stdin, "%d", arr[i]);
		for (int j = 0; j < matrix_size; j++)
		{

		}
	}



	getchar();
	return 0;
}