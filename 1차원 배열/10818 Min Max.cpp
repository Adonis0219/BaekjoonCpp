#pragma region 배열 O
#include<stdio.h>

// int main의 범위를 넘어가서 전역으로 빼주기
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

#include<iostream>

using namespace std;

int main() {
	int N, min = 1000000, max = -1000000, temp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;

		if (temp > max) max = temp;
		if (temp < min) min = temp;
	}
		cout << min << " " << max;
}

#pragma endregion

#pragma region 배열 X

#include<stdio.h>

int main() {
	int N, min = 1000000, max = -1000000;

	scanf_s("%d", &N);

	int temp;

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &temp);

		if (temp > max) max = temp;
		if (temp < min) min = temp;
	}
	printf("%d %d", min, max);
}


#pragma endregion
