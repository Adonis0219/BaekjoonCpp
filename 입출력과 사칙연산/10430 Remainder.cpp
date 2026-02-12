#include<stdio.h>

int main() {
	int A, B, C;

	scanf_s("%d %d %d", &A, &B, &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d", ((A % C) * (B % C)) % C);

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int A, B, C;

	cin >> A >> B >> C;

	cout << (A + B) % C << '\n';
	cout << ((A % C) + (B % C)) % C << '\n';
	cout << (A * B) % C << '\n';
	cout << ((A % C) * (B % C)) % C % C;

	return 0;
}