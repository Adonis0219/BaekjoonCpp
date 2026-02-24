#include<stdio.h>

int main() {
	int arr[100];

	int N, M;

	scanf_s("%d %d", &N, &M);

	for (int i = 0; i <= N; i++)
	{
		// 배열 초기화
		arr[i] = i;
	}

	for (int a = 0; a < M; a++)
	{
		int i, j;	
		scanf_s("%d %d", &i, &j);
		
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (int i = 1; i <= N; i++)
	{
		printf("%d ", arr[i]);
	}
}

#include<iostream>

using namespace std;

int main() {
	int arr[100];

	int N, M;

	cin >> N >> M;

	for (int i = 0; i <= N; i++)
	{
		// 배열 초기화
		arr[i] = i;
	}

	for (int a = 0; a < M; a++)
	{
		int i, j;
		cin >> i >> j;

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}
}