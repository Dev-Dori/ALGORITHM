#include <stdio.h>
void recurCall(int num);
int main() {
	int num = 1;
	recurCall(num);
}
void recurCall(int num) {
	printf("num = %d\n", num);
	if (num < 3)        // ������ ����
		recurCall(num + 1);
}
