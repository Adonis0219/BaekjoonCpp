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
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == v) count++;
	}
	printf("%d", count);
}

#include<iostream>

using namespace std;

int main() {
	int N, v;
	int arr[101];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cin >> v;

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == v) count++;
	}

	cout << count;
}