#include<stdio.h>

int main() {
	int num;

	scanf_s("%d", &num);

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
}

#include<iostream>

using namespace std;

int main() {
	int num;

	cin >> num;

	for (int i = 1; i < 10; i++)
	{
		cout << num << " * " << i << " = " << i * num << '\n';
	}
}