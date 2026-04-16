#include<stdio.h>

/*
Vitamin_C 야구단의 수비수는 등번호 1번부터 9번까지 9명이
있다.
등번호와 타율, 나이를 각각 입력 받은 후에 한줄에
출력하는 프로그램을 작성하시오
단, 등번호는 문자,타율은 실수값,나이는 정수값으로 처리한다
*/

int main() {

	// 등번호
	char bnum;
	
	// 나이
	int age;
	// 타율
	double tayul;

	printf("등번호 입력 : \n");

	scanf_s("%d", &bnum);

	printf("타율 입력 : \n");

	scanf_s("%lf", &tayul);

	printf("나이 입력 : \n");

	scanf_s("%d", &age);

	printf("등번호 : %d, 타율 : %lf, 나이 : %d", bnum, tayul, age);
	
	return 0;
}
