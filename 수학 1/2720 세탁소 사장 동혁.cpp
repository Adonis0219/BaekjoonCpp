#include<stdio.h>

int main() {
	int t;

	scanf_s("%d", &t);

	while (t--)
	{
		// 잔돈
		int money;

		scanf_s("%d", &money);

		// 25단위 개수
		int qu = money / 25;
		// 25 단위로 나눈 나머지를 구함
		money %= 25;
		// 위의 과정을 단위 별로 반복
		int dime = money / 10;
		money %= 10;

		int nickel = money / 5;
		money %= 5;

		int penny = money;

		printf("%d %d %d %d\n", qu, dime, nickel, penny);
	}
}

#include<iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--)
	{
		// 잔돈
		int money;

		cin >> money;

		// 25단위 개수
		int qu = money / 25;
		// 25 단위로 나눈 나머지를 구함
		money %= 25;
		// 위의 과정을 단위 별로 반복
		int dime = money / 10;
		money %= 10;

		int nickel = money / 5;
		money %= 5;

		int penny = money;

		cout << qu << ' ' << dime << ' ' << nickel << ' ' << penny << '\n';
	}

	return 0;
}