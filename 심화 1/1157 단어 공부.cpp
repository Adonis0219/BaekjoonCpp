#include<stdio.h>

int main() {
	int alpha[26] = { 0, };
	char s[1000000];

	scanf_s("%s", s, sizeof(s));

	for (int i = 0; s[i] != '\0'; i++)
	{		
		// 소문자라면 대문자로 변환
		if (s[i] >= 'a')
		{
			s[i] ^= 32;
		}

		alpha[s[i] - 'A']++;
	}

	int max = -1;
	char ans;

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max)
		{
			max = alpha[i];
			ans = 'A' + i;
		}
		else if (alpha[i] == max)
		{
			ans = '?';
		}
	}

	printf("%c", ans);

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int alpha[26] = { 0, };
	char s[1000000];

	cin >> s;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a') alpha[s[i] - 'a']++;
		else alpha[s[i] - 'A']++;
	}

	int max = -1;
	char ans;

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max)
		{
			max = alpha[i];
			ans = 'A' + i;
		}
		else if (alpha[i] == max)
		{
			ans = '?';
		}
	}

	cout << ans;

	return 0;
}