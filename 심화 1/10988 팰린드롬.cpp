#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
	char s[101];
	bool isPalin = true;

	scanf_s("%s", s);

	for (int i = 0; i < strlen(s) / 2; i++)
	{
		if (s[i] == s[strlen(s) - 1 - i])
		{
			isPalin = true;
		}
		else
		{
			isPalin = false;
			break;
		}
	}

	printf("%d", isPalin);

	return 0;
}

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char s[101];
	bool isPalin = true;

	cin >> s;

	for (int i = 0; i < strlen(s) / 2; i++)
	{
		if (s[i] == s[strlen(s) - 1 - i])
		{
			isPalin = true;
		}
		else
		{
			isPalin = false;
			break;
		}
	}

	cout << isPalin;

	return 0;
}