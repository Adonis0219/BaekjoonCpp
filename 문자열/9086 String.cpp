#include<stdio.h>
#include<string.h>

int main() {
	int T;
	char s[1000];

	scanf("%d", &T);

	while (T--)
	{
		scanf("%s", s);

		printf("%c%c \n", s[0], s[strlen(s) - 1]);
	}
}

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	int T;
	char s[1001];

	cin >> T;

	while (T--)
	{
		cin >> s;

		cout << s[0] << s[strlen(s) - 1] << '\n';
	}
}