/* iostream 헤더 파일 예시
#include <iostream>

int main()
{
	int a;
	std::cin >> a;		// 입력
	std::cout << a;	// 출력
}*/

/* stdio.h 헤더 파일 예시
#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a);		// 입력
	printf("%d", a);	// 출력
}*/

/* cstdio 헤더 파일 예시
#include <cstdio>

int main() {
	int a;
	scanf("%d", &a);		// 입력 std::scanf도 가능
	printf("%d", a);		// 출력 std::printf도 가능
}*/

/* stdio.h 사용 답
#include <stdio.h>

int main() {
	printf("Hello World!");
	return 0;
}*/

/* iostream 사용 답
#include<iostream>

int main() {
	std::cout << "Hello World!";
	return 0;
}*/

#include <cstdio>

int main() {
	printf("Hello World!");
}