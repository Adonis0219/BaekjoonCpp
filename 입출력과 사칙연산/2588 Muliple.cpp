//#include<stdio.h>
//
//int main() {
//	int a, b;
//
//	scanf_s("%d %d", &a, &b);
//
//	printf("%d\n", a * (b % 10));
//	printf("%d\n", a * ((b % 100) / 10));
//	printf("%d\n", a * (b / 100));
//	printf("%d", a * b);
//
//	return 0;
//}

#include<iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	cout << a * (b % 10) << '\n';
	cout << a * ((b % 100) / 10) << '\n';
	cout << a * (b / 100) << '\n';
	cout << a * b;

	return 0;
}