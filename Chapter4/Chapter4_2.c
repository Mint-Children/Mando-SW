#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &num);
	
	printf("8진수로는 %#o입니다.\n", num);
	printf("10진수로는 %d입니다.\n", num);
	printf("16진수로는 %#x입니다.\n", num);

	return 0;
}