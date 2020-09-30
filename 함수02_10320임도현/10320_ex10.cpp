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
	printf("=====실수 데이터 5개 입력 =======\n");
	arrInput(num, sizeof(num) / sizeof(double));
	printf("=====최솟값 출력=======\n");
	arrMin(num, sizeof(num) / sizeof(double));

	system("pause");
	return 0;
}