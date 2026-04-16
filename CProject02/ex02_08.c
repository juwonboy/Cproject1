#include<stdio.h>

int main(){

	int a, b, res = 0;

	printf("두 정수를 입력하세요");
	scanf_s("%d%d", &a, &b); //10 0, 10 5

	if (b != 0) {
		res = a / b;
		printf("0이 입력되어 나눌수 없습니다.");
	}

	return 0;
}