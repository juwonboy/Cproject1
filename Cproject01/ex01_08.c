#include<stdio.h>

//두 정수 값을 입력하세요.
//두 정수의 합은 30 입니다.
int main() {
	int numone, numtwo, res;
	//int numtwo;
	//int res;

	numone = 0;
	numtwo = 0;
	res = 0;

	printf("첫번째  정수 값을 입력하세요.\n");
	scanf_s("%d", &numone); // 키보드로 직접 입력
	printf("두번째 정수 값을 입력하세요.\n");
	scanf_s("%d", &numtwo); // 키보드로 직접 입력

	res = numone + numtwo;

	printf("첫번째 입력값 : %d\n", numone);
	printf("두번째 입력값 : %d\n", numtwo);
	printf("두 정수의 합은 : %d", res);


	return 0;
}