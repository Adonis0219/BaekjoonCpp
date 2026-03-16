#include<stdio.h>

int main() {
	int A[9][9] = {};
	int max = -1, max_i = -1, max_j = -1;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int temp;
			scanf_s("%d", &temp);
			A[i][j] = temp;

			if (temp > max)
			{
				max = temp;
				max_i = i + 1;
				max_j = j + 1;
			}
		}

	}
	printf("%d\n%d %d", max, max_i, max_j);

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int A[9][9] = {  };
	int max = -1, max_i = -1, max_j = -1;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int temp;
			cin >> temp;
			A[i][j] = temp;

			if (temp > max)
			{
				max = temp;
				max_i = i + 1;
				max_j = j + 1;
			}
		}
	}

	cout << max << '\n' << max_i << ' ' << max_j;

	return 0;
}