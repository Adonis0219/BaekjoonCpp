#include<stdio.h>

int main() {
	int score;

	scanf_s("%d", &score);

	if (score >= 90) printf("A");
	else if (score >= 80) printf("B");
	else if (score >= 70) printf("C");
	else if (score >= 60) printf("D");
	else printf("F");

	return 0;
}

#include<iostream>

using namespace std;

int main()
{
	int score;

	cin >> score;

	if (score >= 90) cout << "A";
	else if (score >= 80) cout << "B";
	else if (score >= 70) cout << "C";
	else if (score >= 60) cout << "D";
	else cout << "F"; 
}