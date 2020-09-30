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
		printf("정수 1개 입력 : ");
		scanf_s("%d", &num);
		fact(num, &result);
		if (result == -1) printf("입력이 잘못 되어 예상치 못한 결과를 얻었습니다.\n\n");
		else {
			printf("%d! = %d\n\n", num, result);
			break;
		}
	}
	system("pause");
	return 0;
}