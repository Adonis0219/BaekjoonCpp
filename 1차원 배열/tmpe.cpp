#include<stdio.h>

int main() {
	int N, v;
	int arr[101];

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	scanf_s("%d", &v);
	int count;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == v) count++;
	}
	printf("%d", count);
}