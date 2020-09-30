#include <stdio.h>
#include <Windows.h>

void f(int* a, int* b, int* c) {
	int arr[3];
	int temp;
	arr[0] = *a;
	arr[1] = *b;
	arr[2] = *c;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	*a = arr[0];
	*b = arr[1];
	*c = arr[2];
}

int main() {
	int a, b, c;
	printf("정수 3개 입력 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	f(&a, &b, &c);
	printf("정렬 : %d %d %d\n\n", a, b, c);
	
	system("pause");
	return 0;
}