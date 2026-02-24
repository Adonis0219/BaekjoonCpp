#include<stdio.h>

int main() {
	int remains[42];
	int count = 0; // 서로 다른 나머지 개수

	// 초기화
	for (int i = 0; i < 42; i++)
	{
		remains[i] = 0;
	}

	// 입력받기 및 나머지 구하기
	for (int i = 0; i < 10; i++)
	{
		int a;

		scanf_s("%d", &a);

		remains[a % 42]++;
	}

	// 출력하기
	for (int i = 0; i < 42; i++)
	{
		if (remains[i] != 0)
		{
			count++;
		}
	}

	printf("%d", count);
}

#include<iostream>

using namespace std;

int main() {
	int remains[42];
	int count = 0; // 서로 다른 나머지 개수

	// 초기화
	for (int i = 0; i < 42; i++)
	{
		remains[i] = 0;
	}

	// 입력받기 및 나머지 구하기
	for (int i = 0; i < 10; i++)
	{
		int a;

		cin >> a;

		remains[a % 42]++;
	}

	// 출력하기
	for (int i = 0; i < 42; i++)
	{
		if (remains[i] != 0)
		{
			count++;
		}
	}

	cout << count;
}