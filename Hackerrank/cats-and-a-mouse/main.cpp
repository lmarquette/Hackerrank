//https://www.hackerrank.com/challenges/cats-and-a-mouse/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

char* catAndMouse(int x, int y, int z) {
	char *answer;
	int cat_1_distance = 0;
	int cat_2_distance = 0;

	cat_1_distance = abs(z - x);
	cat_2_distance = abs(z - y);

	if (cat_1_distance < cat_2_distance) 
	{
		answer = (char*)"Cat A";
		printf(answer);
	}
	else if (cat_2_distance < cat_1_distance)
	{
		answer = (char*)"Cat B";
		printf(answer);
	}
	else if (cat_1_distance == cat_2_distance)
	{
		answer = (char*)"Mouse C";
		printf(answer);
	}

	return answer;
}


int main()
{
	int q = 2;
	char *x, *y, *z;

	for (int i = 0; i < q; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
		char* catAndMouse(x, y, z);
	}

	getchar();
	return 0;
}