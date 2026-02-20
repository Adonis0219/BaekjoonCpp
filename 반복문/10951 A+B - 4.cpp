#include<stdio.h>

int main() {
	int a, b;

	while (scanf_s("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}
}

#include<iostream>

using namespace std;

int main() {
	int a, b;

	while (!(cin >> a >> b).eof())
	{
		cout << (a + b) << '\n';
	}
}