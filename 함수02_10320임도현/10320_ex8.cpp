#include <stdio.h>
#include <Windows.h>

int divMod(int a, int b, int* result) {
	if (b == 0) return -1;
	*result = a / b;
	*(result + 1) = a % b;
	return 1;
}

int main() {
	int a, b, result[2];
	while (1) {
		printf("���� 2�� �Է� : ");
		scanf_s("%d %d", &a, &b);
		if (divMod(a, b, &result[0]) == 1) { 
			printf("�� : %d ������ : %d\n\n", result[0], result[1]);
			break; 
		}else printf("0���� ������ ������ �߻���!!\n\n");
	}
	system("pause");
	return 0;
}