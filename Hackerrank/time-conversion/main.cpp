#include <iostream>	
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//https://www.hackerrank.com/challenges/time-conversion/


/*
 * Please either make the string static or allocate on the heap. For example,
 * static char str[] = "hello world";
 * return str;
 *
 * OR
 *
 * char* str = "hello world";
 * return str;
 *
 */
char* timeConversion(char* s) {
	/*
	 * Write your code here.
	 */

	char *answer = (char*)malloc(sizeof(char) * 10);
	
	for (int i = 0; i < strlen(s) - 2; i++)
	{
		answer[i] = s[i];
		answer[0] = s[0] + 1;
		answer[1] = s[1] + 2;
	}
	
	if (answer[0] == '1' && answer[1] == '2' && s[8] == 'A')
	{
		answer[0] = '0';
		answer[1] = '0';
	}

	if (s[0] == '1' && s[1] == '2' && s[8] == 'P')
	{
		answer[0] = '1';
		answer[1] = '2';
	}

	for (int i = 0; i < strlen(s) - 2; i++)
	{
		cout << answer[i];
	}
	return answer;
}


int main()
{
	static char time[] = "11:05:00AM";

	char* result = timeConversion(time);

	getchar();
	return 0;
}