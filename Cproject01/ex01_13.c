#include<stdio.h>

/*
	char(1byte): 128~127,0~255
	int(4byte): -2147483648~2147483647
*/
int main() {
	
	char blood_type;

	printf("혈액형을 입력하세요:\n"); // A,B,O,AB

	scanf_s("%c", &blood_type);

	printf("혈액형은 %c형 입니다.\n", blood_type);
	printf("혈액형은 숫자 %d형 입니다.\n", blood_type);

	return 0;
}
