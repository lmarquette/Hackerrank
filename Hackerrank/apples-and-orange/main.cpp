//https://www.hackerrank.com/challenges/apple-and-orange/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;



//s = starting point of sam's house
//t = ending location of sam's house
//a = location of apple tree
//b = location of orange tree
//m = apples_count
//n = oranges_count
//apples = distances at which the apple falls from the tree
//oranges = distance which oranges fall from tree

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
	int apple_counter = 0;
	int orange_counter = 0;

	for (int i = 0; i < apples_count; i++)
	{
		apples[i] = apples[i] + a;
		if (apples[i] >= s && apples[i] <= t) apple_counter++;
	}

	for (int i = 0; i < oranges_count; i++)
	{
		oranges[i] = oranges[i] + b;
		if (oranges[i] >= s && oranges[i] <= t) orange_counter++;
	}

	printf("%d\n%d", apple_counter, orange_counter);
}



int main()
{
	int s = 7;
	int t = 11;
	int a = 5;
	int b = 15;
	const int m = 3;
	const int n = 2;
	int apples[m] = { -2,2,1 };
	int oranges[n] = { 5,-6 };

	countApplesAndOranges(s, t, a, b, m, apples, n, oranges);

	getchar();
	return 0;
}