#include<stdio.h>
#include<string.h>

#define ARRAY_SIZE 5 // 전처리 지시자 (컴파일하기 전에 실행)
//매크로 상수 대문자

#define NUM
#define ADD(a,b) ((a)+(b))
#define STR(str,num) printf(str"=%d\n", num)



int main() {

	int num[ARRAY_SIZE];
	int sum;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		num[i] = 1;
		printf("%d : %d\n", i, num[i]);
	}

	sum = ADD(5,7);
	printf("sum: %d\n", sum);

	return 0;
}