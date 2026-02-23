//#include<stdio.h>
//
//int main() {
//	int bk[100];	// N개의 바구니(basket) (1 <= N <= 100)
//	int N, M;
//
//	for (int i = 0; i < 100; i++)
//	{
//		bk[i] = 0;
//	}
//
//	scanf_s("%d %d", &N, &M);
//
//	for (int i = 0; i < M; i++)
//	{
//		int s, f, b;	// start, finish, ball
//		scanf_s("%d %d %d", &s, &f, &b);
//
//		for (int j = s; j <= f; j++)
//		{
//			bk[j] = b;
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		// 0번 바구니는 존재 X
//		printf("%d ", bk[i]);
//	}
//}

#include<iostream>

using namespace std;

int main() {
	int bk[100];	// N개의 바구니(basket) (1 <= N <= 100)
	int N, M;
	
	cin >> N >> M;

	for (int i = 0; i < 100; i++)
	{
		bk[i] = 0;
	}

	for (int i = 0; i < M; i++)
	{
		int s, f, b;

		cin >> s >> f >> b;

		for (int j = s; j <= f; j++)
		{
			bk[j] = b;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << bk[i] << " ";
	}
}