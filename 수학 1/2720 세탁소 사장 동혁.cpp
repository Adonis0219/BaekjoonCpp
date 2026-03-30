#include<stdio.h>

int main() {
	int qu, di, ni, pe;
	int T, money;

	scanf_s("%d", &T);

	while (T--)
	{
		scanf_s("%d", &money);

		qu = money / 25;
		money %= 25;

		di = money / 10;
		money %= 10;

		ni = money / 5;

		pe = money %= 5;

		printf("%d %d %d %d\n", qu, di, ni, pe);
	}

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	int qu, di, ni, pe;
	int T, money;

	cin >> T;

	while (T--)
	{
		cin >> money;

		qu = money / 25;
		money %= 25;

		di = money / 10;
		money %= 10;

		ni = money / 5;

		pe = money %= 5;

		cout << qu << ' ' << di << ' ' << ni << ' ' << pe << '\n';
	}

	return 0;
}