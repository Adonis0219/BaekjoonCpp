#include<stdio.h>

int main() {
	char s[101];
	int count = 0;

	scanf_s("%s", s, sizeof(s));

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=' || s[i + 1] == '-')
			{
				i++;
			}
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == 'z' && s[i + 2] == '=')
			{
				i += 2;
			}
			else if (s[i + 1] == '-')
			{
				i++;
			}
		}
		else if (s[i] == 'l' || s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				i++;
			}
		}
		else if (s[i] == 's' || s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				i++;
			}
		}

		count++;
	}

	printf("%d", count);

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	char s[101];
	int count = 0;

	cin >> s;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=' || s[i + 1] == '-')
			{
				i++;
			}
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == 'z' && s[i + 2] == '=')
			{
				i += 2;
			}
			else if (s[i + 1] == '-')
			{
				i++;
			}
		}
		else if (s[i] == 'l' || s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				i++;
			}
		}
		else if (s[i] == 's' || s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				i++;
			}
		}

		count++;
	}

	cout << count;

	return 0;
}