#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double C, F;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%lf", &F);

	C = (5.0 / 9.0) * (F - 32.0);
	printf("�������� %.2lf�� �Դϴ�.", C);

	return 0;
}