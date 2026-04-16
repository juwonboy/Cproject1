#include<stdio.h>

int main() {


	// 자료형 :  문자 타입(char) 1byte, 문자열(" ") 과 다르다.
	//int ch = 'A';

	int ch1 = 'A';
	char ch2 = 'A';

	printf("1 int :: %d \n", ch1);
	printf("2 char :: %c \n", ch2);

	// sizeof() 연산자 : 메모리의 크기를 바이트 단위로 계산
	printf("literal int size :%zd \n", sizeof(7));
	printf("literal int size :%zd \n", sizeof(7.0));
	printf("literal int size :%zd \n", sizeof('A'));
	printf("literal int size :%zd \n", sizeof(ch2));
	printf("literal int size :%zd \n", sizeof(65));

	return 0;
}