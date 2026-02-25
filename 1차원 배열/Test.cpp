#include<stdio.h>

// 주소 전달 후 내용물 교체
void SwapPointer(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 값 전달
void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a[5] = { 1, 2, 3, 4, 5 };

	Swap(a[0], a[1]);	// 작동 X
	SwapPointer(&a[2], &a[3]);	// 작동 O

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}