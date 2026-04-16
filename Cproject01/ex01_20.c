#include<stdio.h>

/*
 커피 자판기 프로그램
*/

int main() {

	// 돈 입금, 잔돈 반환, 동전
	int input, change;
	// 동전
	int w500, w100, w50, w10;

	//커피 종류 (1:밀크 2300 ,2:블랙 2800 ,3:율무 3100)

	printf("금액을 입력해 주세요\n");
	scanf_s("%d",&input);

	change = input - 150;

	w500 = change / 500;
	printf("========= 잔돈 금액 ==================\n");
	printf("%d\n", change);

	//change = change - (500 * w500);
	change = change%500;
	w100 = change / 100;

	//change = change - (100 * w100);
	change = change % 100;
	w50 = change / 50;

	//change = change - (50 * w50);
	change = change % 50;
	w10 = change / 10;

	printf("========= 잔돈 목록 ==================\n");
	printf("w500 : %d \n", w500);
	printf("w100 : %d \n", w100);
	printf("w50 : %d \n", w50);
	printf("w10 : %d \n", w10);
	printf("========= 잔돈 목록 끝 ==================\n");

	return 0;
}

/*
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", n);

	return 0;
}
*/