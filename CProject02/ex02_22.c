#include<stdio.h>

/*
*/

int main() {

	int score , choice; 
	int userLevel = 0; // 1: 기본 , 2:실버, 3:골드;

	printf("111111");

	scanf_s("%d", &score);

	if (score >= 1000) {
		userLevel = 3;
		printf("골드\n");
	}
	else if (score >= 500) {
		userLevel = 2;
		printf("실버\n");
	}
	else {
		userLevel = 1;
		printf("기본\n");
	}

	printf("---MENMU---\n");
	printf("1.공지사항 읽기 \n 2.자료실접근 \n 1.공지사항 읽기 \n");
	printf("선택:");

	switch(choice) {

			break;
		case 1:
			printf("공지 사항을 불러옵니다.\n");

			break;
		case 2:
			printf("자료실에 접속되었습니다.\n");
			printf("권한이 부족 합니다. 실버 등급이상만 가능 합니다.\n");
			break;
		case 3:
			printf("공지 사항을 불러옵니다.\n");
			break;
		default:
			printf("잘못된 메뉴번호 입니다.\n");
	}

	//printf("요금 toltal :: %.0lf", total + tax);

	return 0;
}