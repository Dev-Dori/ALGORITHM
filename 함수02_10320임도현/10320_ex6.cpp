#include <stdio.h>
#include <Windows.h>

void divMod(int a, int b) {
	printf("�� : %d ������ : %d\n\n", a / b, a%b);
}

int main() {
	int a, b;
	printf("���� 2�� �Է� : ");
	scanf_s("%d %d", &a, &b);
	divMod(a, b);

	system("pause");
	return 0;
}