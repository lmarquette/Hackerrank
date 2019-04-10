//https://www.hackerrank.com/challenges/staircase/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void staircase(int n) {

	int counter = 1;
	while (counter != n + 1)
	{
		for (int i = 0; i < n - counter; i++)
		{
			printf(" ");
		}
		for (int i = 0; i < counter; i++)
		{
			printf("#");
		}
		counter++;
		printf("\n");
	}
}


int main()
{
	staircase(6);

	getchar();
	return 0;
}