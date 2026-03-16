#include<stdio.h>

int main() {
	// 자동으로 '\0' 문자가 들어가니 1개 크게 또는 넉넉하게 선언하기
	// 초기화 안 돼서 쓰레기값 들어감
	char a[5][15] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%s", a[i]);
	}

	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 5; j++)
			if (a[j][i] != '\0')
				printf("%c", a[j][i]);

	return 0;
}

#include<iostream>

using namespace std;

int main() { 
	char a[5][15] = { 0 };

	for (int i = 0; i < 5; i++)
		cin >> a[i];

	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 5; j++)
			if (a[j][i] != '\0')
				cout << a[j][i];

	return 0;
}