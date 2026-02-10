#include<iostream>

using namespace std;

void main() {
	double a, b;
	cin >> a >> b;	// 두 가지 변수를 연속으로 입력 받는 법
	
	cout.precision(12);
	cout << fixed;
	cout << a / b;
}

#include<stdio.h>

void main() {
	double a, b;
	
	scanf_s("%lf, %lf", &a, &b);	// long double의 입력은 %Lf

	/*
	  기본적으로 lf 출력은 소수점 6자리까지 출력한다.
	  그렇기 때문에 소수점 자리수를 늘려주어야 함
	  오차 범위가 10 ^ -9 이하여야 하므로 여유있게 %.10lf 이상으로 설정해주자
	*/

	printf("%.13lf", a / b);		// %.(소수점 자리수)lf -> 소수점 자리 수 지정 방법
}

// double a = 1234.5678;
// std::cout.precision(6);
// std::cout << a; // 1234.567에서 반올림된 1234.57이 출력됨

//void main() {
//	double a = 3333.333333;
//
//	std::cout.precision(6);
//
//	std::cout << a;	// 3333.33
//
//	std::cout << std::fixed;	// 고정 소수점 표기로 전환
//	std::cout << a;	// 3333.33333
//
//	std::cout.unsetf(std::ios::fixed);	// 고정 소수점 표기 해제
//	std::cout << a;	// 3333.33
//}