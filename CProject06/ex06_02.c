#include<stdio.h>

// 포인터 변수? type(자료형:int*),point(가리킨다)
// 포인터 변수는 주소를 저장하고,해당 주소를 가리킨다
// 포인터 변수의 타입은 포인터 변수가 가리키는 곳의 타입이다

int main() {


	int a = 10;
	int* ap = &a;

	printf("1 :: %a:%p\n",&a);
	printf("2 :: ap:%p\n",ap);
	
	printf("3 :: %d\n",a);
	printf("4 :: %p\n",ap);

	
	
	// ap
	printf("5 :: %p:%p\n", &ap);



	return 0;
}
