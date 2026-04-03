#include<stdio.h>

int main() {
	int X;

	scanf_s("%d", &X);

	int idx = 1;

	while (true)
	{
		if (idx * (idx - 1) / 2 < X && X <= idx * (idx + 1) / 2) break;
		idx++;
	}
	
	if (idx % 2 != 0)
	{
		int temp = idx * (idx + 1) / 2;
		printf("%d", temp - X + 1);
		printf("/");
		printf("%d", idx - (temp - X));
	}
	else
	{
		int temp = idx * (idx + 1) / 2;
		printf("%d", idx - (temp - X));
		printf("/");
		printf("%d", temp - X + 1);
	}

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int X, idx = 1;

	cin >> X;

	while (true)
	{
		if (idx * (idx - 1) / 2 < X && X <= idx * (idx + 1) / 2) break;
		idx++;
	}

	int temp = idx * (idx + 1) / 2;

	if (idx % 2 != 0)
		cout << temp - X + 1 << "/" << idx - (temp - X);
	else
		cout << idx - (temp - X) << "/" << temp - X + 1;
	
	return 0;
}