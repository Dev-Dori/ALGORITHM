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
	printf("���� 2�� �Է� : ");
	scanf_s("%d %d", &a, &b);
	printf("��ȯ �� a : %d b : %d\n", a, b);
	swap(&a, &b);
	printf("��ȯ �� a : %d b : %d\n", a, b);
	system("pause");
	return 0;
}