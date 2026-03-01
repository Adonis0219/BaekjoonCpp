#include<stdio.h>

int main() {
	char S[101];
	int length = 0;

	scanf_s("%s", S);

	while (S[length] != '\0')
	{
		length++;
	}

	printf("%d", length);
}

#include<iostream>

using namespace std;

int main() {
	char S[101];
	int length = 0;

	cin >> S;

	while (S[length] != '\0')
	{
		length++;
	}

	cout << length;
}