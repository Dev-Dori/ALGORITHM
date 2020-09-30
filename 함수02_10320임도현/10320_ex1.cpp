#include <stdio.h>
#include <Windows.h>

int fact(int num) {
	if (num <= 0) return -1;
	int sum = 1;
	for (int i = 1; i <= num; i++) {
		sum *= i;
	}
	return sum;
}

int main() {
	int num;
	printf("정수 1개 입력 : ");
	scanf_s("%d", &num);
	if (fact(num) == -1) printf("입력이 잘못 되어 예상치 못한 결과를 얻었습니다.\n\n");
	else printf("%d! = %d\n\n", num, fact(num));
	system("pause");
	return 0;
}