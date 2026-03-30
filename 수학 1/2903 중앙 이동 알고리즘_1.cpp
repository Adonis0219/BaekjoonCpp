#include<stdio.h>
#include<math.h>

int main() {
	int n;

	scanf_s("%d", &n);

	printf("%.0lf", (pow(2, n) + 1) * (pow(2, n) + 1));
		 
	return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	int num = (pow(2, n) + 1) * (pow(2, n) + 1);

	cout << (int)num;

	return 0;
}