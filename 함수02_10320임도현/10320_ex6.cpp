#include <stdio.h>
#include <Windows.h>

void divMod(int a, int b) {
	printf("몫 : %d 나머지 : %d\n\n", a / b, a%b);
}

int main() {
	int a, b;
	printf("정수 2개 입력 : ");
	scanf_s("%d %d", &a, &b);
	divMod(a, b);

	system("pause");
	return 0;
}