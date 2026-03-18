#include<stdio.h>

int main() {
	char ans[1001] = { 0 };
	int N, B;
	int input, cnt = 0;

	scanf_s("%d %d", &N, &B);

	for (int i = N; i > 0;)
	{
		input = i % B;
		// 숫자라면
		if (input < 10)
			ans[cnt++] = input + 48;
		// 문자라면
		else
			ans[cnt++] = input + 55;

		i /= B;
	}

	for (int i = cnt - 1; i >= 0; i--)
	{
		printf("%c", ans[i]);
	}

	return 0;
}

#include<iostream>

using namespace std;

int main() {
	char ans[1001] = { 0 };
	int N, B;
	int input, cnt = 0;

	cin >> N >> B;

	while (N > 0)
	{
		input = N % B;

		if (input < 10)
			ans[cnt++] = input + 48;
		else
			ans[cnt++] = input + 55;

		N /= B;
	}

	for (int i = cnt - 1; i >= 0; i--)
		cout << ans[i];

	return 0;
}