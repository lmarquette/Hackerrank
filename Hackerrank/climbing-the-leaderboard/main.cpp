#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem

// Complete the climbingLeaderboard function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//

int compare(const void *a, const void *b) {
	return (*(int *)b - *(int *)a); 
}

int* climbingLeaderboard(int scores_count, int* scores, int alice_count, int* alice, int* result_count) {

	int *b = (int*)malloc(sizeof(int) * alice_count);
	int *new_score = (int*)malloc(sizeof(int) * (scores_count + 1));
	int array_pos = scores_count + 1;
	int tmp = 0;

	for (int i = 0; i < alice_count; i++)
	{
		b[i] = 0;
	}

	for (int i = 0; i < scores_count + 1; i++)
	{
		new_score[i] = 0;
	}

	for (int j = 0; j < alice_count; j++)
	{
		//reset
		for (int i = 0; i < scores_count; i++)
		{
			new_score[i] = scores[i];
		}

		new_score[scores_count] = alice[j];

		qsort(new_score, scores_count + 1, sizeof(int), compare);

		int val = new_score[0];
		int rank = 1;

		for (int i = 0; i < array_pos; i++)
		{
			if (new_score[i] != val)
			{
				rank++;
				val = new_score[i];
			}
			if (new_score[i] == alice[j])
			{
				tmp = i;
				b[j] = rank;
				cout << rank << " score: " << new_score[i] << endl;
			}
		}
		cout << endl;
		array_pos = tmp;
	}

	*result_count = alice_count;
	return b;
}


int main()
{
	const int score_count = 7;
	int score[score_count] = { 100,100,50,40,40,20,10 };

	const int alice_count = 4;
	int alice[alice_count] = { 5,25,50,120};

	int result_count = 0;

	climbingLeaderboard(score_count, score, alice_count, alice, &result_count);

	getchar();
	return 0;
}