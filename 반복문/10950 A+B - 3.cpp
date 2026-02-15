#include<stdio.h>

int main() {
	int T;

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int num1, num2;
		scanf_s("%d %d", &num1, &num2);

		printf("%d\n", num1 + num2);
	}
}

#include<iostream>

using namespace std;

int main() {
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int num1, num2;
		cin >> num1 >> num2;

		cout << num1 + num2 << '\n';
	}
}