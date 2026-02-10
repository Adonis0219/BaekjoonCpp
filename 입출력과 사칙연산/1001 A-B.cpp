#include<iostream>

int main() {
	int a, b;
	std::cin >> a;
	std::cin >> b;
	std::cout << a - b;
}

#include<stdio.h>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("$d", (a - b));
	return 0;
}