//https://www.hackerrank.com/challenges/designer-pdf-viewer/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int designerPdfViewer(int h_count, int* h, char* word) {

	int tmp = 0;
	int highest_value = 0;
	int answer = 0;
	for (int i = 0; i < h_count; i++)
	{
		tmp = (int)word[i] - 96;
		if (h[tmp] > highest_value) highest_value = h[tmp];
	}
	answer = highest_value * strlen(word);
	return answer;
}

int main()
{
	const int h_count = 26;
	int h[h_count] = { 1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7 };
	char word[] = "zaba";

	int r = designerPdfViewer(h_count, h, word);
	cout << r;
	getchar();
	return 0;
}