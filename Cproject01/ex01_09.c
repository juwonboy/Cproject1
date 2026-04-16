#include<stdio.h>

int main() {
	int bonbong;
	int bonus;
	int total;

	//int bonbong, bonus, total;

	double tax, real_income;  // 실수형 변수 실수를 저장할 때 사용

	bonbong = 150;
	bonus = 60;

	total = bonbong + bonus;
	tax = total * 0.09;

	real_income = total - tax;
	
	// 1. 총 수입액은 본봉 + 보너스
	// 2. 세금(tax)은 총 수입액(total)의 9%
	// 3. 실 수입액(real_income)은 총 수입액- 세금
	// 4. 이몽룡의 실 수입액은 191.100000만원 입니다.

	printf("1. 총 수입액은 %d + %d = %d \n",bonbong ,bonus, bonbong+bonus);
	printf("2. 세금(tax)은 총 수입액(total)의 9%% 총수입 : %d, 세금:%lf \n", total, tax);
	printf("3. 실 수입액(real_income)은 총 수입액 - 세금 = %lf\n", real_income);
	printf("4. 이몽룡의 실 수입액은 %lf만원 입니다. \n", real_income);


	return 0;
}