#include<stdio.h>

int main() {
	int n[31];	// 인덱스 0번 제외 출석부 30명

	// 배열 초기화
	for (int i = 0; i <= 30; i++)
	{
		n[i] = 0;
	}

	for (int i = 0; i < 28; i++)
	{
		int index;
		scanf_s("%d", &index);

		n[index] = 1;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (n[i] == 0)
		{
			printf("%d\n", i);
		}
	}
}

#include<iostream>

using namespace std;

int main() {
	int n[31];	// 인덱스 0번 제외 출석부 30명

	// 배열 초기화
	for (int i = 0; i <= 30; i++)
	{
		n[i] = 0;
	}

	for (int i = 0; i < 28; i++)
	{
		int index;
		cin >> index;

		n[index] = 1;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (n[i] == 0)
		{
			cout << i << '\n';
		}
	}
}