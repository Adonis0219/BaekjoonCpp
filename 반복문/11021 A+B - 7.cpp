#include<stdio.h>

int main() {
	int T;

	scanf_s("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		int a, b;
		scanf_s("%d %d", &a, &b);

		printf("Case #%d: %d\n", i, a + b);
	}
}

#include<iostream>

using namespace std;

int main() {
	int T;

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int a, b;

		cin >> a >> b;

		cout << "Case #" << i << ": " << (a + b) << '\n';
	}
}