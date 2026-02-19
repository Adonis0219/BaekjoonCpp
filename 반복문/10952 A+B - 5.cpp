#include<stdio.h>

int main() {
	while (true)
	{
		int a, b;

		scanf_s("%d %d", &a, &b);

		if (a == 0 && b == 0)
			break;

		printf("%d\n", a + b);
	}
}

#include<iostream>

using namespace std;

int main() {
	while (true)
	{
		int a, b;

		cin >> a >> b;

		if (a == 0 && b == 0) break;
		
		cout << (a + b) << '\n';
	}
}