#include<stdio.h>

int main() {
	int a, b;

	scanf_s("%d %d", &a, &b);

	if (a > b) printf(">");
	else if (a < b) printf("<");
	else printf("==");

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	if (a > b) cout << ">";
	else if (a < b) cout << "<";
	else cout << "==";

	return 0;
}