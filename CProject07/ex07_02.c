#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main() {

	int ary[5] = { 10, 20, 30, 40, 50 };
	int i;

	for (i = 0; i < 5; i++)
	{

		// 포인터로 (포인터 방식) 배열의 값 출력 
		printf("1 :: %d \n", ary[i]);
		printf("2 :: %d \n", *(ary + i));
		printf("3 :: %p \n", *ary + i);

	}

	return 0;
}

