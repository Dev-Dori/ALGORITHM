#include <stdio.h>
#include <Windows.h>


void riverArr(int* num, int size);

int main() {
	int num[6] = { 1, 3, 5, 7, 9, 11 };
	printf("===== 원래 배열 =====\n");
	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%3d", num[i]);
	}

	riverArr(num, sizeof(num)/sizeof(int));
	//나가서 놀고 싶어요....
	
	printf("\n===== 거꾸로 배열 =====\n");

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%3d", num[i]);
	}
	
	system("pause");
	return 0;
}

void swap(int* num1, int* num2) {
	int tmp;
	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void riverArr(int* num, int size) {
	for (int i = 0; i < size / 2; i++) {
		swap((num + i), (num + 5 - i));
	}
}


