#include <stdio.h>
#include <Windows.h>

void fact(int num, int* result) {
	if (num <= 0) {
		*result = -1;
	}
	else {
		*result = 1;
		for (int i = 1; i <= num; i++) {
			*result *= i;
		}
	}
}

int main() {
	int num, result;
	while (1) {
		printf("���� 1�� �Է� : ");
		scanf_s("%d", &num);
		fact(num, &result);
		if (result == -1) printf("�Է��� �߸� �Ǿ� ����ġ ���� ����� ������ϴ�.\n\n");
		else {
			printf("%d! = %d\n\n", num, result);
			break;
		}
	}
	system("pause");
	return 0;
}