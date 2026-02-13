#include<stdio.h>

int main()
{
	long a, b, c;

	scanf_s("%ld %ld %ld", &a, &b, &c);

	printf("%ld", a + b + c);

	return 0;
}

#include<iostream>

using namespace std;

int main() { 
	long a, b, c;

	cin >> a >> b >> c;

	cout << a + b + c;

	return 0;
}
