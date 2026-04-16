#include<stdio.h>

/*
  VitaminC 야구단을 수정하여 선수의 이름과 포지션도
  입출력하는 프로그램을 작성하시오
*/

int main() {

	// 등번호
	char bnum;

	// 나이
	int age;

	// 타율
	double tayul;

	//
	char name[80], position[80];

	printf("등번호 입력 : \n");

	scanf_s("%c", &bnum);

	printf("이름 입력 : \n");
	
	scanf_s("%s", name,80);

	printf("포지션 입력 : \n");
	
	scanf_s("%c", position,80);


	printf("타율 입력 : \n");


	scanf_s("%lf", &tayul);

	printf("나이 입력 : \n");

	scanf_s("%d", &age);

	printf("등번호 : %d, 타율 : %lf, 나이 : %d", bnum, tayul, age);
	
	scanf_s("%s", name,80);


	return 0;
}