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

#include<iostream>
#include<stdlib.h>	// atoi 함수가 선언된 헤더파일

using namespace std;

int main() {
	int A;		// 472
	char B[4];	// 385

	cin >> A;
	cin >> B;
	// B[2]는 char 타입으로 3이다 -> 아스키코드로 51
	// 따라서 char 타입의 0(48)을 빼주면 3이 나온다.
	cout << A * (B[2] - '0') << '\n';
	// 8(56) - 0(48) => 8
	cout << A * (B[1] - '0') << '\n';
	cout << A * (B[0] - '0') << '\n';
	cout << A * atoi(B);

	return 0;
}