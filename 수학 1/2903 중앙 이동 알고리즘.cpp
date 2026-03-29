#include<stdio.h>

int main()
{
	int dot = 2;
	int n;

	scanf_s("%d", &n);

	while (n--) 
		dot = dot * 2 - 1;

	printf("%d", dot * dot);

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int dot = 2;
	int n;

	cin >> n;

	while (n--)
		dot = dot * 2 - 1;
	
	cout << dot * dot;

	return 0; 
}