//https://www.hackerrank.com/challenges/counting-valleys/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
//starting value is 2
int countingValleys(int n, char* s) {
	long int base = 2;
	long int compare = base;
	long int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'U')
		{
			if (compare < base)
			{
				compare++;
				if (compare == base)
				{
					counter++;
				}
			}
			else
			{
				compare++;
			}
		}
		if (s[i] == 'D') compare--;
	
	}

	return counter;
}

int main()
{
	int n = 8;
	char s[] = "UDDDUDUU";

	long int r = countingValleys(n, s);

	cout << r;
	getchar();
	return 0;
}