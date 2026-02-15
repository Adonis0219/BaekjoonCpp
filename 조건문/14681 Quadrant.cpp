#include<stdio.h>

int main() {
	int x, y;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if (x > 0 && y > 0) printf("1");
	else if (x < 0 && y > 0) printf("2");
	else if (x < 0 && y < 0) printf("3");
	else if (x > 0 && y < 0) printf("4");
}

#include<iostream>

using namespace std;

int main() {
	int x, y;

	cin >> x;
	cin >> y;

	if (x > 0 && y > 0) cout << "1";
	else if (x < 0 && y > 0) cout << "2";
	else if (x < 0 && y < 0) cout << "3";
	else if (x > 0 && y < 0) cout << "4";
}