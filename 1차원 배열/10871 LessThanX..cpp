#include<stdio.h>

int main() {
	int N, X;
	int A[10000];

	scanf_s("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] < X)
		{
			printf("%d ", A[i]);
		}
	}
}

#include<iostream>

using namespace std;

int main() {
	int N, X;
	int A[10000];

	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] < X) cout << A[i] << " ";
	}
}