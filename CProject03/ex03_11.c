#include<stdio.h>

int main() {

	int i, num;
	int total = 0; //누적 변수

	printf("0부터 num까지의 덧셈(합) , num 입력:");
	scanf_s("%d", &num);

	for (i = 0; i <= num; i++) {
		total += i;
	}

	printf("1~%d 까지의 \\%합은 : %d \n", num, total);

	return 0;
}
