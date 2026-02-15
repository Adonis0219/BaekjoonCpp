#include<stdio.h>

int main() {
	int curH, curM, rqM;

	scanf_s("%d %d", &curH, &curM);
	scanf_s("%d", &rqM);

	// 1. 소요 시간을 시간 분 형태로 저장
	int tempH = rqM / 60;
	int tempM = rqM % 60;

	int printH = 0, printM;

	// 2. 현재 시간과 분에 각각 더해주기
	//// a. curM + tempM >= 60
	if (curM + tempM >= 60)
	{
		// 두 개 더해서 60 빼주고
		printM = curM + tempM - 60;
		
		// 출력 시간에 + 1
		printH = 1;
	}
	else
	{
		printM = curM + tempM;
	}

	// 시간 계산
	printH += curH + tempH;

	if (printH >= 24) printH -= 24;

	printf("%d %d", printH, printM);
}

#include<iostream>

using namespace std;

int main() {
	int curH, curM, rqM;

	cin >> curH >> curM;
	cin >> rqM;

	// 1. 소요 시간을 시간 분 형태로 저장
	int tempH = rqM / 60;
	int tempM = rqM % 60;

	int printH = 0, printM;

	// 2. 현재 시간과 분에 각각 더해주기
	//// a. curM + tempM >= 60
	if (curM + tempM >= 60)
	{
		// 두 개 더해서 60 빼주고
		printM = curM + tempM - 60;

		// 출력 시간에 + 1
		printH = 1;
	}
	else
	{
		printM = curM + tempM;
	}

	// 시간 계산
	printH += curH + tempH;

	if (printH >= 24) printH -= 24;

	cout << printH << " " << printM;
}