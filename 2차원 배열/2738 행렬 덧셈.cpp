#include<stdio.h>

int main() {
	int A[101][101];
	int B[101][101];

	int N, M;

	scanf_s("%d %d", &N, &M);
	
	// 2차원 배열 A 원소 받기
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf_s("%d", &A[i][j]);
		}
	}

	// 2차원 배열 B 원소 받기
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf_s("%d", &B[i][j]);
		}
	}

	// 새 배열을 선언하지 않고 덧셈을 출력하기
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}

	return 0;
}


#include<iostream>

using namespace std;

int main() {
	int A[101][101];
	int B[101][101];

	int N, M;

	cin >> N >> M;

	// 2차원 배열 A 원소 받기
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> A[i][j];

	// 2차원 배열 B 원소 받기
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> B[i][j];

	// 새 배열을 선언하지 않고 덧셈을 출력하기
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << A[i][j] + B[i][j] << ' ';

		cout << '\n';
	}
	return 0;
}