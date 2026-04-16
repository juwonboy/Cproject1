#include<stdio.h>

int main() {

	int num1;
	int num2;

	printf("두 정수를 입력하세요:");
	scanf_s("%d  %d", &num1, &num2);

	printf("나눗셈 연산식 \"%d/%d=%lf\"입니다", num1, num2, num1/(double)num2);

	return 0;

}

/*
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", n);

	return 0;
}
*/