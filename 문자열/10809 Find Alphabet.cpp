#include<stdio.h>

int main() {
	char S[100];	// 단어의 배열
	int alp[26];	// 알파벳의 배열

	scanf("%s", S);

	// 전부 포함 안 됨으로 초기화
	for (int i = 0; i < 26; i++)
	{
		alp[i] = -1;
	}

	// 같은 글자 처리
	for (int i = 0; S[i] != '\0'; i++)
	{
		for (int j = i + 1; S[j] != '\0'; j++)
		{
			// i 글자와 j 글자가 같다면 j 자리에 공백 대입
			// '\0'을 대입하면 문자열이 끊김
			if (S[i] == S[j])
			{
				S[j] = ' ';
			}
		}
	}

	// 위치 찾기
	for (int i = 0; S[i] != '\0'; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (S[i] == 97 + j)
			{
				alp[j] = i;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alp[i]);
	}
}

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	// 모두 0으로 초기화
	int al[26] = { };

	string s;

	cin >> s;

	for (char i = 'a'; i <= 'z'; i++)
	{
		// find() 메서드는 첫 인덱스를 반환
		cout << (int)s.find(i) << ' ';
	}
}