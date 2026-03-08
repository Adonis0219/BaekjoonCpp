#include<stdio.h>
#include<string.h>

int main() {
	int N, count = 0;
	
	scanf_s("%d", &N);

	int alpha[26];

	while (N--)
	{
		char s[101];
		
		scanf_s("%s", s, sizeof(s));

		for (int i = 0; i < 26; i++)
		{
			alpha[i] = 0;
		}


		int length = strlen(s);
		for (int i = 0; i < length; i++)
		{
			if (alpha[s[i] - 'a'] == 0)
			{
				alpha[s[i] - 'a'] = 1;
			}
			else // 이미 1이라면, 바로 앞 문자 확인
			{
				// 앞 문자와 다르다면 그룹 단어가 아님
				if (s[i - 1] != s[i])
				{
					break;
				}
			}

			// 마지막 문자까지 break문을 거치지 않고 왔다면 그룹 단어
			if (i == length - 1)
			{
				count++;
			}
		}
	}

	printf("%d", count);

	return 0;
}

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	int N, count = 0;
	int a[26];
	
	cin >> N;

	while (N--)
	{
		for (int i = 0; i < 26; i++)
		{
			a[i] = 0;
		}

		char s[101];
		
		cin >> s;

		int length = strlen(s);

		for (int i = 0; i < length; i++)
		{
			if (a[s[i] - 'a'] == 0)
			{
				a[s[i] - 'a'] = 1;
			}
			else
			{
				// 이미 존재하는 문자인데 바로 앞 문자와 다르다면
				// 그룹 단어가 아님
				if (s[i - 1] != s[i])
				{
					break;
				}
			}
			
			// break문을 거치지 않고 마지막 단어까지 왔다면
			// 그룹 단어임!
			if (i == length - 1)
			{
				count++;
			}
		}
	}

	cout << count;

	return 0;
}