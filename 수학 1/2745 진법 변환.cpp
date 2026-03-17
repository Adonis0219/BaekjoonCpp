#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
	char N[10000];
	int B = 0;
	int result = 0;

	// 변수명 변수명 버퍼크기 -> X
	// 변수명 버퍼크기 변수명 ... -> O
	scanf_s("%s %d", N, sizeof(N), &B);

	int len = strlen(N);

	for (int i = 0; i < len; i++)
	{
		int num = 0;
		if (N[i] >= '0' && N[i] <= '9')
			num = N[i] - '0';
		else if (N[i] >= 'A' && N[i] <= 'Z')
			num = N[i] - 'A' + 10; 

		result += num * pow(B, len - 1 - i);
	}

	printf("%d", result);

	return 0;
}

#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main() {
	char N[10000];
	int B = 0;
	int result = 0;

	cin >> N >> B;

	int len = strlen(N);

	for (int i = 0; i < len; i++)
	{
		int num = 0;
		if (N[i] >= '0' && N[i] <= '9')
			num = N[i] - '0';
		else if (N[i] >= 'A' && N[i] <= 'Z')
			num = N[i] - 'A' + 10;

		result += num * pow(B, len - 1 - i);
	}

	cout << result;

	return 0;
}