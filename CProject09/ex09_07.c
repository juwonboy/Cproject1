#include<stdio.h>
/*
	지역변수와 전역변수의 이름이 같을 때, 지역변수가 우선적으로 사용된다.
	전역변수의 메모리 이름은 Data Segment에 저장되고, 지역변수의 메모리 이름은 Stack Segment에 저장된다.

*/

void exchange();

int a, b;

int main()
{
	int a = 100;

	printf("main() : a = %d \n", a);
	scanf_s("%d%d", &a, &b);
	printf("main() : a = %d \n", a);

	return 0;
}

void exchange()
{
	int temp;

	temp = a;
	a = b;
	b = temp;

}