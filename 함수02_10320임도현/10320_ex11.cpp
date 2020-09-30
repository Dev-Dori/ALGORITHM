#include <stdio.h>
#include <Windows.h>

void arrInput(double* num, int size) {
	for (int i = 0; i < size; i++) {
		scanf_s("%lf", num + i);
	}
}

void arrAver(double* num, int size) {
	double sum = *num;
	for (int i = 1; i < size; i++) {
		sum += *(num + i);
	}
	printf("%.2f\n\n", sum / size);
}


int main() {
	double num[5];
	printf("=====�Ǽ� ������ 5�� �Է� =======\n");
	arrInput(num, sizeof(num) / sizeof(double));
	printf("=====��հ� ���=======\n");
	arrAver(num, sizeof(num) / sizeof(double));

	system("pause");
	return 0;
}