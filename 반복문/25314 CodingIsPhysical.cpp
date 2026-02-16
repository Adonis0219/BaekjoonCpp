#include<stdio.h>

int main() {
	int N;

	scanf_s("%d", &N);

	for (int i = 0; i < N / 4; i++)
	{
		printf("long ");
	}
	printf("int");
}

#include<iostream>

using namespace std;

int main() {
	int N;

	cin >> N;

	for (int i = 0; i < N / 4; i++)
	{
		cout << "long ";
	}
	cout << "int";
}