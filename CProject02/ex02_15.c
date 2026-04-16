#include<stdio.h>

int main() {

	int nInput = 0;

	printf("정수(숫자)를 입력하세요.\n");
	scanf_s("%d", &nInput);

	if (nInput >= 10) {
		if (nInput > 20) {
			printf("20초과");
		}
		else {
			printf("20이하\n");
		}
	}else {
		if (nInput >= 5) {
			printf("5이상\n");
			//puts("5이상");
		}
		else {
			printf("5미만\n");
		}
	}
	return 0 ;
}