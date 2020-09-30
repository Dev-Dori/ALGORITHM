#include <stdio.h>
#include <Windows.h>

int divMod(int a, int b) {
	if (b == 0) return -1;
	printf("몫 : %d 나머지 : %d\n\n", a / b, a%b);
	return 1;
}

int main() {
	int a, b;
	while (1) {
		printf("정수 2개 입력 : ");
		scanf_s("%d %d", &a, &b);
		if (divMod(a, b) == 1) break;
		else printf("0으로 나누는 오류가 발생함!!\n\n");
	}
	system("pause");
	return 0;
}