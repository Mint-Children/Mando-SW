#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer() {
	int n;

	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &n);
	return n;
}

int find_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int n;
	n = get_integer();

	if (find_prime(n) == 1)
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	return 0;
}