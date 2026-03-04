#include<stdio.h>

int main() {
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	// 배열 초기화
	int dChess[6] = { 0, };

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &dChess[i]);
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", chess[i] - dChess[i]);
	}

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int chess[6] = { 1,1,2,2,2,8 };
	int dChess[6] = { 0, };

	for (int i = 0; i < 6; i++)
		cin >> dChess[i];

	for (int i = 0; i < 6; i++)
		cout << chess[i] - dChess[i] << " ";

	return 0;
}