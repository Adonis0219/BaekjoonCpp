#include<stdio.h>

int main() {
	int d1, d2, d3;
	int price;

	scanf_s("%d %d %d", &d1, &d2, &d3);

	// 1. 같은 눈이 3개일 때
	if (d1 == d2 && d2 == d3)
	{
		price = 10000 + d1 * 1000;
	}
	// 2. 같은 눈이 2개일 때
	else if (d1 == d2 || d2 == d3 || d1 == d3)
	{
		int pD;

		if (d1 == d2 || d1 == d3) pD = d1;
		else if (d2 == d3) pD = d2;

		price = 1000 + pD * 100;
	}
	// 같은 눈이 없을 때
	else
	{
		int pD = d1;

		if (pD < d2) pD = d2;
		if (pD < d3) pD = d3;

		price = pD * 100;
	}
	
	printf("%d", price);
}

#include<iostream>

using namespace std;

int main() {
	int d1, d2, d3;
	int price;

	cin >> d1 >> d2 >> d3;

	// 1. 같은 눈이 3개일 때
	if (d1 == d2 && d2 == d3)
	{
		price = 10000 + d1 * 1000;
	}
	// 2. 같은 눈이 2개일 때
	else if (d1 == d2 || d2 == d3 || d1 == d3)
	{
		int pD;

		if (d1 == d2 || d1 == d3) pD = d1;
		else if (d2 == d3) pD = d2;

		price = 1000 + pD * 100;
	}
	// 같은 눈이 없을 때
	else
	{
		int pD = d1;

		if (pD < d2) pD = d2;
		if (pD < d3) pD = d3;

		price = pD * 100;
	}

	cout << price;
}