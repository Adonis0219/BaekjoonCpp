#include<stdio.h>

int main() {
	float score[1001];

	int N;
	float M = 0;

	// 과목 개수 입력 받기
	scanf_s("%d", &N);

	// 배열 초기화
	for (int i = 0; i < 1001; i++)
	{
		score[i] = 0;
	}

	// 점수 입력 받기
	for (int i = 0; i < N; i++)
	{
		scanf_s("%f", &score[i]);

		// 최고 점수 검사
		if (score[i] > M) M = score[i];
	}

	float total = 0;

	// 점수 조작
	for (int i = 0; i < N; i++)
	{
		score[i] = score[i] / M * 100;
		// 총점
		total += score[i];
	}

	printf("%f", total / N);
}

#include<iostream>

using namespace std;

int main() {
	float score[1001];

	int N;
	float M;

	cin >> N;

	for (int i = 0; i < 1001; i++)
	{
		score[i] = 0;
	}

	for (int i = 0; i < N; i++)
	{
		cin >> score[i];

		if (score[i] > M) M = score[i];
	}

	float total = 0;

	for (int i = 0; i < N; i++)
	{
		score[i] = score[i] / M * 100;
		total += score[i];
	}

	cout << total / N;
}