#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month;

	printf("월 번호를 입력하시오: ");
	scanf("%d", &month);

	switch (month) {
		case 1:
			printf("Jan");
			break;
		case 2:
			printf("Feb");
			break;
		case 3:
			printf("Mar");
			break;
		case 4:
			printf("Apr");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("Jun");
			break;
		case 7:
			printf("Jul");
			break;
		case 8:
			printf("Aug");
			break;
		case 9:
			printf("Sep");
			break;
		case 10:
			printf("Oct");
			break;
		case 11:
			printf("Nov");
			break;
		case 12:
			printf("Dec");
			break;
		default:
			printf("존재 하지 않는 달입니다.");
			break;
	}
	
	return 0;
	
}