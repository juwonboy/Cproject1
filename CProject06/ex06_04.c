#include<stdio.h>

// 포인터 변수? type(자료형:int*),point(가리킨다)
// 포인터 변수는 주소를 저장하고,해당 주소를 가리킨다
// 포인터 변수의 타입은 포인터 변수가 가리키는 곳의 타입이다

int main() {


	int num1 = 100, num2 = 200;
	int* pnum;

	//pnum = &num1;

	//printf("nData  주소 :: %p\n", &nData);

	// ap
	//*pnum = *pnum +  30;
	//printf("pnData 주소 :: %p\n", &pnData);

	// ap
	// printf("pnData 주소 :: %p\n", &pnData);

	pnum = &num2;
	*pnum -= 30;

	printf("pnum = &num2  ==>  num2 :: %d\n", num2);


	return 0;
}
