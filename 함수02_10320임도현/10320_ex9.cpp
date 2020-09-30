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
	printf("=====실수 데이터 5개 입력 =======\n");
	arrInput(num, sizeof(num)/ sizeof(double));
	printf("=====실수 데이터 5개 출력 =======\n");
	arrOutput(num, sizeof(num) / sizeof(double));

	system("pause");
	return 0;
}