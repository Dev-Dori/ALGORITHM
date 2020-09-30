#include <stdio.h>
#include <Windows.h>

void arrInput(double* num, int size) {
	for (int i = 0; i < size; i++) {
		scanf_s("%lf", num + i);
	}
}

void arrMin(double* num, int size) {
	double smallest = *num;
	for (int i = 0; i < size; i++) {
		if (smallest >= *(num + i)) smallest = *(num + i);
	}
	printf("%.2f\n\n", smallest);
}


int main() {
	double num[5];
	printf("=====�Ǽ� ������ 5�� �Է� =======\n");
	arrInput(num, sizeof(num) / sizeof(double));
	printf("=====�ּڰ� ���=======\n");
	arrMin(num, sizeof(num) / sizeof(double));

	system("pause");
	return 0;
}