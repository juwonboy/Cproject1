#include<stdio.h>

/*
영문 한글자와 정수 두개를 입력 : b 40 50
a:두 수를 더함
b:두 수를 곱함
c:먼저 입력된 정수에서 나중에 입력한 정수를 뺌
해당하지 않으면 "알수 없는 명령"이라는 문자열을 출력
*/

int main() {

	char ch = 0;
	int x = 0, y = 0, z= 0;;

	scanf_s("%c%d%d", &ch,1,&x,&y);


	//a b c
	switch (ch) {
		case 'a':
			printf("a:두 수를 더함 :: %d + %d = %d ", x,y,x + y);
			break;
		case 'b':
			printf("a:두 수를 곱함 :: %d * %d = %d", x,y,x * y);
			break;
		case 'c':
			printf("c:먼저 입력된 정수에서 나중에 입력한 정수를 뺌 :: %d - %d = %d", x,y,x - y);
			break;
		default:
			printf("알수 없는 명령");
	}


	return 0;
}