#include<stdio.h>

int main() {

	int lot;

	printf("당첨 번호를 입력하세요.\n");
	scanf_s("%d", &lot);

	//switch ~ case
	switch (lot){
		case 1:
			puts("축하합니다. 100억당첨 !!!");
			break;
		case 2:
			puts("축하합니다. 10억당첨 !!!");
			break;
		case 3:
			puts("축하합니다. 1억당첨 !!!");
			break;
		default:
			puts("꽝!!!!");

	}
	
	return 0;
}