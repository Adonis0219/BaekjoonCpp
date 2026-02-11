#include<iostream>

using namespace std;

int main() {
	string id;
	cin >> id;

	id += "??!";
	cout << id;
	
	return 0;
}

#include<stdio.h>

int main() {

	char id[51];
	scanf_s("%s", id, 51);
	printf("%s??!", id);

	return 0;
}