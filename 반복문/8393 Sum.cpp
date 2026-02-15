#include<stdio.h>

int main() {
	int n, pN = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		pN += i;
	}

	printf("%d", pN);
}

#include<iostream>

using namespace std;

int main() {
	int n, pN = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		pN += i;
	}

	cout << pN;
}