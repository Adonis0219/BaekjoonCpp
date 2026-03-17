#include<stdio.h>

int main() {
	int A[101][101] = { 0 };
	int count = 0;

	scanf_s("%d", &count);

	while (count--)
	{
		int x = 0, y = 0;

		scanf_s("%d %d", &x, &y);

		for (int i = x; i < x + 10; i++)
			for (int j = y; j < y + 10; j++)
				A[i][j]++;
	}

	int area = 0;

	// 넓이 구하기
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			if (A[i][j] != 0)
				area++;

	printf("%d", area);

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int A[101][101] = { 0 };
	int count = 0, area = 0;

	cin >> count;

	while (count--)
	{
		int x = 0, y = 0;

		cin >> x >> y;

		for (int i = x; i < x + 10; i++)
			for (int j = y; j < y + 10; j++)
				A[i][j]++;
	}


	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			if (A[i][j] != 0)
				area++;

	cout << area;

	return 0;
}