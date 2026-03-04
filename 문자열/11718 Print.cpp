#include<stdio.h>

int main() {
	char a;

	while (scanf("%c", &a) == 1)
	{
		printf("%c", a);
	}

	return 0;
}

#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;

	while (getline(cin, str))
	{
		cout << str << '\n';
	}

	return 0;
}