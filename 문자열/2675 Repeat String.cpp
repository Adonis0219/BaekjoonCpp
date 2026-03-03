#include<stdio.h>

int main() {
	int T;

	scanf("%d", &T);

	while (T--)
	{
		int R; 
		char S[20];
		
		scanf("%d %s", &R, S);

		// 문자열이 끊길 때까지 반복
		for (int i = 0; S[i] != '\0'; i++)
		{
			for (int j = 0; j < R; j++)
			{
				printf("%c", S[i]);
			}
		}
		printf("\n");
	}
}

#include<iostream>

using namespace std;

int main() {
	int T;

	cin >> T;

	while (T--)
	{
		int R;
		string S;

		cin >> R >> S;

		for (int i = 0; S[i] != '\0'; i++)
		{
			for (int j = 0; j < R; j++)
			{
				cout << S[i];
			}
		}
		cout << '\n';
	}
}