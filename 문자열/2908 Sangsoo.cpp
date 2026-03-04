#include<stdio.h>
#include<string.h>

// 직접 뒤집어서 비교
int main() {
	// 문자열로 입력받을 때 마지막 '\0' 문자도 들어가야 하기 때문에 4자리로 선언한다
	char A[4], B[4];
	char temp;

	scanf("%s %s", A, B);

	// A 숫자 뒤집기
	temp = A[0];
	A[0] = A[2];
	A[2] = temp;

	// B 숫자 뒤집기
	temp = B[0];
	B[0] = B[2];
	B[2] = temp;


	// 문자열 형태의 숫자 크기 비교
	// A > B -> 1, A = B -> 0, A < B -> -1
	if (strcmp(A, B) > 0) 
		printf("%s", A);
	else 
		printf("%s", B);

	return 0;
}

#include<iostream>

using namespace std;

// 뒤집지 않고 거꾸로 비교
int main() {
	char A[4], B[4];

	cin >> A >> B;

	bool flag;

	for (int i = 2; i >= 0; i--)
	{
		// 큰 자리 숫자에서 결정이 나면 참으로 돌리고 탈출
		if (A[i] > B[i])
		{
			flag = true;
			break;
		}
		// 작다고 결정이 나면 거짓으로 돌리고 탈출
		else if (A[i] < B[i])
		{
			flag = false;
			break;
		}
	}

	for (int i = 2; i >= 0; i--)
	{
		if (flag) printf("%c", A[i]);
		else printf("%c", B[i]);
	}
		
	return 0;
}