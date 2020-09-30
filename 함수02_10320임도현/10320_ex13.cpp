#include <stdio.h>
#include <Windows.h>

void searchArr(int* num, int size, int search) {
	for (int i = 0; i < size; i++) {
		if (*(num + i) == search) {
			printf("%d를 찾았습니다.\n\n", search);
			break;
		}
	}
}

int main() {
	int num[] = { 3, 4, 7, 9, 10, 12, 13, 15, 20, 22 };
	int a;
	printf("찾는 수 입력 : ");
	scanf_s("%d", &a);
	searchArr(num, sizeof(num) / sizeof(int), a);
	system("pause");
	return 0;
}