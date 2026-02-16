#include<stdio.h>

int main() {
	int X, N, tempX = 0;

	scanf_s("%d", &X);
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int a, b;
		scanf_s("%d %d", &a, &b);

		tempX += a * b;
	}

	printf((X == tempX) ? "Yes" : "No");
}

#include<iostream>

using namespace std;

int main() {
	int X, N, tempX = 0;

	cin >> X;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;

		tempX += a * b;
	}

	if (X == tempX)	cout << "Yes";
	else cout << "No";

	cout << (X == tempX ? "Yes" : "No");
}