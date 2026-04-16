#include<stdio.h>

int main() {

	int num;

	printf("정수입력:\n");
	scanf_s("%d", &num); //

	if (num < 0) 
		printf("압룍된 값은  0 보다 작다.");

	if (num > 0)
		printf("압룍된 값은  0 보다 크다.");

	return 0;
}