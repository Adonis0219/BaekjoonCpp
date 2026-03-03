#include<stdio.h>
#include<string.h>

char S[1000000];

int main() {
	int count = 0;

	scanf("%[^\n]c", S);

	for (int i = 0; i < strlen(S) ; i++)
	{
		if (S[i] == ' ')	
			count++;	
	}

	if (S[0] == ' ') count--;
	
	if (S[strlen(S) - 1] == ' ')count--;	

	printf("%d", count + 1);

	return 0;
}

#include<iostream>
#include<string>

using namespace std;

int main() {
	string S;

	getline(cin, S);

	int count = 1;

	for (int i = 0; i < S.length() ; i++)
	{
		if (S[i] == ' ')
			count++;
	}

	if (S[0] == ' ') count--;

	if (S[S.length() - 1] == ' ')count--;

	cout << count;
	
	return 0;
}