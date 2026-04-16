
#include<stdio.h>

int sumfunc(int);
// 1부터 까지의 합을 계산하는 프로그램
void checkTest(int,int);

int main() {
	int number;
	int result;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &number);

	// 함수호출
	result = sumfunc(number);
	// 입력값 및 합계 출력
	printf("입력값 및 합계 출력 : %d",result);

	// 검수 화면
	checkTest(number, result);


	return 0;
}

int sumfunc(snum)
{
	int sum = 0;

	for (int i = 1;  i <= snum;i++)
	{
		sum += i;
	}

	return 	sum;
}

void checkTest(a, b)
{
	for (int i = 0; i < a; i++)
	{
		b -= i;
		printf(" b : %b \n",b);
	}
	if (b == 0)
	{
		printf("");
	}
	else
	{

	}
}
