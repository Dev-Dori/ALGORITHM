#include <stdio.h>
#include <Windows.h>

void inputGrowth(double* growth, int size) {
	for (int i = 0; i < size; i++) {
		scanf_s("%lf", growth + i);
	}
}

double averGrowth(double* growth, int size) {
	double sum = *growth;
	for (int i = 1; i < size; i++) {
		sum += *(growth + i);
	}
	return sum / size;
}
int exGrowth(double* growth, int size, double aver) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(growth + i) > aver) count++;
	}
	return count;
}


int main() {
	double growth[5],aver;
	printf("5�� ���� ���� ������� �Է��ϼ��� : \n");
	inputGrowth(growth, sizeof(growth) / sizeof(double));
	aver = averGrowth(growth, sizeof(growth) / sizeof(double));
	printf("\n��� ��������� : %lf\n\n", aver);
	printf("��� ����������� �ʰ��� Ƚ�� : %d\n\n", exGrowth(growth, sizeof(growth) / sizeof(double), aver));
	system("pause");
	return 0;
}