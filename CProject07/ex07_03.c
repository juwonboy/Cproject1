#include<stdio.h>
#include<malloc.h>
#include<string.h>

/*
	다음 배열의 평균값을 구하여 출력하는 프로그램을 작성하시오.
	단,배열 요소를 참조할 때는 배열명에 정수값을 더하는
	포인터 표현을 사용하며, 평균은 소수점 이하 둘째자리까지 출력하시오.
*/

int main() {

	int point[] = {30, 70.5, 40, 32.4, 100}; // 54
	int pointLength = 0;
	double sum = 0;
	pointLength = sizeof(point) / sizeof(point[0]);

	for (int i = 0; i < pointLength; i++)
	{
		printf("point + %lf   \n", *(point + i));
		sum = sum + *(point + i);
	}

	printf("평균 : %10.2lf ", sum/ pointLength);

	return 0;
}

