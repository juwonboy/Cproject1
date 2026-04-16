#include<stdio.h>

int main() {

	double a=0 , b = 0, res = 0;
	char op;
	char memo[80];

	scanf_s("%lf%c%lf", &a, &op,1, &b);

	//a b c
	switch (op) {
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	default:
		printf("연산자 없음.");
		return 0;
	}

	printf("1 : 연산 결과는 %.2lf입니다.\n",res);
	printf("2 : 연산 결과는 %lf입니다.\n", res);

	return 0;
}