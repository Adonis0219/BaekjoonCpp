#include<iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	std::cout << a + b << '\n';
	std::cout << a - b << '\n';
	std::cout << a * b << '\n';
	std::cout << a / b << '\n';
	std::cout << a % b;

	return 0;
}

#include<stdio.h>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d", a % b);

	return 0;
}