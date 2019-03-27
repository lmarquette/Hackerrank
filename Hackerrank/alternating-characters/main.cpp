#include <iostream>
#include <stdlib.h>

using namespace std;

//https://www.hackerrank.com/challenges/alternating-characters/

int alternatingCharacters(char* s) 
{
	int counter = 0;
	//cout << strlen(s);
	for (int i = 1; i < strlen(s); i++)
	{
		if (s[i] == s[i - 1]) counter++;
	}
	//cout << counter;
	return counter;
}

int main()
{
	const char *arr = "AAABBAA";

	int r = alternatingCharacters((char*)arr);
	cout << r;
	getchar();
	return 0;
}