#include<stdio.h>
/*
전기 사용량(int amount)을 kw단위로 입력하면 사용 요금을 계산해주는 프로그램을 작성하시오.

조건)
1) 기본요근 : 660원
2) kw당 사용요금 : 88.5원
3) 전체요금(double price) : 기본요금+(전기사용량*kw당 사용요금)
4) 세금 (double tax)
5) 최종 사용요금(double total) = 전체요금 + 세금

*/

int main() {

	int amount , defuse;
	double kwuse, price, tax, total;

	// 1) 기본요금 : 660원
	defuse = 600;
	// kw당 사용요금 : 88.5원
	kwuse = 88.5;

	printf("전기사용량을 입력하세요.\n");
	scanf_s("%d", &amount);

	price = defuse + (amount * kwuse);

	tax = price * 0.05;

	total = price + tax;

	printf("전기사용량 요금은 %lf 입니다." , total);

	return 0;
}