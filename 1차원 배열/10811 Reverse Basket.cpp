#include<stdio.h>
int basket[101];	// 1 <= N <= 100, 인덱스 0 바구니 제외
int N, M;

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Print() {
	for (int i = 1; i <= N; i++)
	{
		printf("%d ", basket[i]);
	}
	printf("\n");
}

int main() {	
	// 바구니 배열 초기화
	for (int i = 0; i < 101; i++)
	{
		basket[i] = i;
	}

	scanf_s("%d %d", &N, &M);

	for (int x = 0; x < M; x++)
	{
		int i, j;
		scanf_s("%d %d", &i, &j);

		// 바구니 역순
		for (int y = 0; y < j - i; y++)
		{
			for (int z = i; z < j - y; z++) 
			{
				Swap(&basket[z], &basket[z + 1]);	
			}
		}
	}

	Print();
}

#include<iostream>

using namespace std;

int basket[101];	// 1 <= N <= 100, 인덱스 0 바구니 제외
int N, M;

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Print() {
	for (int i = 1; i <= N; i++)
	{
		printf("%d ", basket[i]);
	}
	printf("\n");
}

int main() {
	// 바구니 배열 초기화
	for (int i = 0; i < 101; i++)
	{
		basket[i] = i;
	}

	cin >> N >> M;

	for (int x = 0; x < M; x++)
	{
		int i, j;

		cin >> i >> j;

		for (int y = j; y > i; y--)
		{
			for (int z = i; z < y; z++)
			{
				Swap(&basket[z], &basket[z + 1]);
			}
		}
	}
	Print();
}