#include <stdio.h>

int main() {
	char S[1001];
	int i = 0;
	
	scanf_s("%s", S);
	scanf_s("%d", &i);
	
	printf("%c", S[i - 1]);
}

#include<iostream>

using namespace std;

int main() {
	char S[1001];
	int i = 1;

	cin >> S;
	cin >> i;

	cout << S[i - 1];
}