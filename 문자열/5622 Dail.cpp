#include<stdio.h>
#include<string.h>

int main() {
	int time[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	char number[16];
	int sum = 0;

	scanf("%s", number);

	for (size_t i = 0; i < strlen(number); i++)
	{
		sum += time[number[i] - 'A'];
	}

	printf("%d", sum);

	return 0;
}

#include<iostream>
#include<string>

using namespace std;

int main() {
	int time[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	string number;
	int sum = 0;

	cin >> number;

	for (size_t i = 0; i < number.length(); i++)
	{
		sum += time[number[i] - 'A'];
	}
	
	cout << sum;

	return 0;
}