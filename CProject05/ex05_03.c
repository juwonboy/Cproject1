#include<stdio.h>

// 배열 : 변수의 연속(순서가 있는)된공간, 동일 타입

int main() {
	int age[5];
	int agelength;
	int tot = 0;
	double avg;
	int i;

	agelength = sizeof(age)/ sizeof(age[0]);

	printf("다섯명의 나이를 입력하세요.\n");

	for ( i = 0; i < agelength; i++)
	{
		scanf_s("%d", &age[i]);
	}

	printf("다섯명의 나이를 출력하세요.\n");

	for ( i = 0; i < agelength; i++)
	{
		printf("%d 번째 %d 입니다.\n",i+1,age[i]);
	}
	
	for ( i = 0;  i < agelength;  i++)
	{
		tot += age[i];
	}

	printf("다섯명의 나이를 합산 출력 : %d\n",tot);
	printf("다섯명의 나이를 평균 출력 : %.lf\n",(double)tot/(double)agelength);

}
