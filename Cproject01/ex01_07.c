#include<stdio.h>

//숫자를 입력하세요.
//입력 받은 정수값은 100입니다.
int main(){
	int num;

	printf("숫자를 입력하세요:");
	scanf_s("%d",&num); // 키보드로 직접 입력

	printf("입력받는 값은 %d 입니다.", num);

	return 0;
}