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
	printf("���� 1�� �Է� : ");
	scanf_s("%d", &num);
	if (fact(num) == -1) printf("�Է��� �߸� �Ǿ� ����ġ ���� ����� ������ϴ�.\n\n");
	else printf("%d! = %d\n\n", num, fact(num));
	system("pause");
	return 0;
}