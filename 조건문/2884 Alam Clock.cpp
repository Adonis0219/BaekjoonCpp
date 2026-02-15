#include<stdio.h>

int main() {
	int h, m;

	scanf_s("%d %d", &h, &m);

	// 1. m >= 45
	if (m >= 45) printf("%d %d", h, m - 45);
	// 2. m < 45
	else if (m < 45)
	{
		if (h == 0) printf("%d %d", 23, m + 15);
		else printf("%d %d", h - 1, m + 15);
	}
}

#include<iostream>

using namespace std;

int main() {
	int h, m;

	cin >> h >> m;

	if (m >= 45) cout << h << " " << m - 45;
	else
	{
		if (h == 0) cout << "23 " << m + 15;
		else cout << h - 1 << " " << m + 15;
	}
}