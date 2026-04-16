#include<stdio.h>



/*

전기요금 계산
키보드로 코드 번호와 전기 사용량을(kw)을 입력 받으면
사용 요금을 출력한다
전기 요금의 계산과 코드별 요금 적용 기준은 다음과 같다

switch case문 사용

구분   코드번호   기본요금   kw당 요금       세금
가정용   1         1,130원      127.8원   전체금액의 9 %
산업용   2           660원       88.5원   전체금액의 8 %
교육용   3           370원         52원   전체금액의 5 %

전기요금 = 기본요금 + (사용량 * kw당 요금) + 세금
*/

int main() {

	int code; // 코드번호
	int amount; // 사용량

	double basic;		// 기본 요금
	double price;		// kw 요금
	double tax_rate=0;	// 세금 비율
	double total;		// 전체 요금
	double tax;			// 세금

	printf("코드 번호를 입력 하세요.(1:가정,2:산업,3:교육)\n");
	scanf_s("%d",&code);

	printf("전기 사용량을 입력 하세요(kw).\n");
	scanf_s("%d", &amount);
	

	switch (code) {
		case 1:
			
			//가정용   1         1, 130원      127.8원   전체금액의 9 %
			//산업용   2           660원       88.5원   전체금액의 8 %
			//교육용   3           370원         52원   전체금액의 5 %

			basic	= 0;		// 기본 요금
			price	= 127.8;	// kw 요금
			tax_rate= 0;		// 세금 비율
			total	= 0;		// 전체 요금
			tax = 0.09;			// 세금
			
			break;

		case 2:

			basic = 660;			// 기본 요금
			price = 88.5;		// kw 요금
			tax_rate = 0;		// 세금 비율
			total = 0;			// 전체 요금
			tax = 0.08;			// 세금
			
			break;

		case 3:

			basic = 370;		// 기본 요금
			price = 52;		// kw 요금
			tax_rate = 0;		// 세금 비율
			total = 0;		// 전체 요금
			tax = 0.05;			// 세금
			break;

		default:
			break;
	}

	total = basic + (amount * price);
	tax = total + tax_rate;

	printf("요금 toltal :: %.0lf", total+ tax);

	return 0;
}