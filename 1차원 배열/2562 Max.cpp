#include<stdio.h>

int main() {
	int arr[9];
	int max = -1, index = -1;

	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &arr[i]);

		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}

	printf("%d\n", max);
	printf("%d", index + 1);
}

#include<iostream>

using namespace std;

int main() {
	int arr[9];
	int max = -1, index = -1;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}

	cout << max << '\n';
	cout << index + 1;
}