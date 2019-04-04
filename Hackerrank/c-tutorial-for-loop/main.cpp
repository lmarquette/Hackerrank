//https://www.hackerrank.com/challenges/c-tutorial-for-loop

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num_array[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int a;
	int b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i < 10) cout << num_array[i] << endl;
		if (i >= 10)
		{
			if (i % 2 == 0) cout << "even" << endl;
			else { cout << "odd" << endl; }
		}
	}

	return 0;
}