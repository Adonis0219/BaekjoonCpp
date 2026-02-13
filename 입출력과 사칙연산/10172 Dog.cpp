//#include<stdio.h>
//
//int main()
//{
//	printf("|\\_/|\n");
//	printf("|q p|   /}\n");
//	printf("( 0 )\"\"\"\\\n");
//	printf("|\"^\"`    |\n");
//	printf("||_/=\\\\__|");
//
//	return 0;
//}

#include<iostream>

using namespace std;

int main()
{
	// 방법 1
	cout << "|\\_/|\n";
	cout << "|q p|   /}\n";
	cout << "( 0 )\"\"\"\\\n";
	cout << "|\"^\"`    |\n";
	cout << "||_/=\\\\__|";

	// 방법 2
	cout << "|\\_/|\n" << "|q p|   /}\n" << "( 0 )\"\"\"\\\n" 
		 << "|\"^\"`    |\n" << "||_/=\\\\__|";
	
	return 0;
}