#include<stdio.h>

// 포인터 변수? type(자료형:int*),point(가리킨다)
// 포인터 변수는 주소를 저장하고,해당 주소를 가리킨다
// 포인터 변수의 타입은 포인터 변수가 가리키는 곳의 타입이다

int main() {


	//int num1 = 100, num2 = 200;
	//int temp;// 임시

	//temp = num1;
	//num1 = num2;
	//num2 = temp;

	//printf("num1=%d\n", num1);
	//printf("num2=%d\n", num2);

	double a = 1.3;
	double b = 1.7;
	double temp = 1.3;

	double* ap, * bp;	// double 포인터 변수가 가리키는 곳의 타입

	printf("double* ap=%zd",sizeof(ap));
	printf("double* bp=%zd",sizeof(bp));

	ap = &a; 
	bp = &b;

	printf("바꾸기전의 a,b의 값 : %.1lf, %.1lf\n", a, b);

	temp = a;
	*ap = b;
	*bp = temp;

	temp = b;

	printf("바꾼후의 a,b의 값 : %.1lf, %.1lf\n", a, b);

	return 0;


}

