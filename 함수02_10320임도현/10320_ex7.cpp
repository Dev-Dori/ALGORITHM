#include <stdio.h>
#include <Windows.h>

int divMod(int a, int b) {
	if (b == 0) return -1;
	printf("�� : %d ������ : %d\n\n", a / b, a%b);
	return 1;
}

int main() {
	int a, b;
	while (1) {
		printf("���� 2�� �Է� : ");
		scanf_s("%d %d", &a, &b);
		if (divMod(a, b) == 1) break;
		else printf("0���� ������ ������ �߻���!!\n\n");
	}
	system("pause");
	return 0;
}