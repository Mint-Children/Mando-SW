/*����ڷκ��� 3���� ������ �о� ���� �Ŀ� if-else ���� ����Ͽ� ���� ���� ���� �����ϴ� ���α׷��� �ۼ��ض�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int x, y, z;
	int min = 0;

	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
		min = y;
	else if (y > x)
		min = x;

	if (z < min)
		min = z;

	printf("���� ���� ������ %d�Դϴ�.", min);

	return 0;
}