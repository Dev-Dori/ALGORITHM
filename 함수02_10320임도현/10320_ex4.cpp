#include <stdio.h>
#include <Windows.h>

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a, b;
	printf("정수 2개 입력 : ");
	scanf_s("%d %d", &a, &b);
	printf("교환 전 a : %d b : %d\n", a, b);
	swap(&a, &b);
	printf("교환 후 a : %d b : %d\n", a, b);
	system("pause");
	return 0;
}