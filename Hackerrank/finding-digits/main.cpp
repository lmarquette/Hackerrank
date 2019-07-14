#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

//https://www.hackerrank.com/challenges/find-digits/

using namespace std;

int findDigits(int n) {
	int counter = 0;
	char tmp[1000000];

	sprintf(tmp, "%d", n);
	
	for (int i = 0; i < strlen(tmp); i++)
	{
		if (tmp[i] != 0)
		{

		}
	}
	
	cout << counter << endl;
	return 0;
}

int main()
{
	int n = 1012;

	findDigits(n);

	getchar();
	return 0;
}