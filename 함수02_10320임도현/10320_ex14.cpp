#include <stdio.h>
#include <Windows.h>

void shiftLeft(int* num,int size,int turn) {
	

}

int main() {
	int num[] = { 0,1,2,3,4,5,6,7,8,9 };
	int a;
	printf("==========회전 전 배열==========\n");
	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%3d", num[i]);
	}
	printf("\n\nshiftLeft 회전 횟수 입력 : ");
	scanf_s("%d", &a);
	shiftLeft(num, sizeof(num) / sizeof(int) ,a);

	printf("\n==========회전 후 배열==========\n");
	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%3d", num[i]);
	}

	system("pause");
	return 0;
}