#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main() {

	int ary[5] = {10, 20, 30, 40, 50 };
	int* ap;
	int i;
	ap = ary;


	printf("첫번깨 배열 요소의 주소 값 : %p,%p,%p, \n", ary,ap, &ary[0]);
	printf("첫번깨 배열 요소의 값을 포인터로 처리 : %ㅇ \n", ap[i]);

	ap = ap[4];

	printf("다섯번째 배열 요소의 값 포인터로 처리:%d\n", *ap);
	printf("다섯번째 배열 요소의 주소값:%p,%p,%p\n", ap, ary + 4, &ary[0] + 4);

	for ( i = 0; i < 5; i++)
	{
		
		// 포인터로 (포인터 방식) 배열의 값 출력 
		printf("1 :: %d \n", ap[i]);
		printf("2 :: %d \n", *(ap+i));
		printf("3 :: %p \n", *ap + i);

	}

	return 0;
}

