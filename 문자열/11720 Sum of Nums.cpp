#include <stdio.h>

int main() {
	int t;
	char s[101];

	scanf("%d %s", &t, s);

	int sum = 0;

	for (int i = 0; i < t; i++) {
		sum += s[i] - '0';
	}

	printf("%d", sum);

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int t, sum = 0;
	char s[101];

	cin >> t >> s;

	for (int i = 0; i < t; i++)
	{
		sum += s[i] - '0';
	}
	
	cout << sum;
}