#include <stdio.h>
#include <Windows.h>

void arrInput(double* num, int size) {
	for (int i = 0; i < size; i++) {
		scanf_s("%lf", num + i);
	}
}

void arrOutput(double* num, int size) {
	for (int i = 0; i < size; i++) {
		printf("%.2f\n", *(num + i));
	}
}


int main() {
	double num[5];
	printf("=====�Ǽ� ������ 5�� �Է� =======\n");
	arrInput(num, sizeof(num)/ sizeof(double));
	printf("=====�Ǽ� ������ 5�� ��� =======\n");
	arrOutput(num, sizeof(num) / sizeof(double));

	system("pause");
	return 0;
}