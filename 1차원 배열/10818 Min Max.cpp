#include<stdio.h>

int A[1000001];

int main() {
	int N;

	scanf_s("%d", &N);


	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}

	int min = 1000000, max = -1000000;

	for (int i = 0; i < N; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}

		if (A[i] > max)
		{
			max = A[i];
		}
	}

	printf("%d %d", min, max);
}