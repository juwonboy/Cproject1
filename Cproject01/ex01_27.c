#include<stdio.h>

int main() {

	char ch1;
	char ch2;

	printf("첫번째 문자를 입력하세요\n");
	scanf_s("%c", &ch1,1);

	/*
원인은 첫번째 문자를 입력할 때 같이 입력되는 엔터키에 있다.
이 엔터키에 대한 아스키코드값인 새줄문자가 두번째 scanf함수가
실행될 때 ch2에 자동으로 저장된다.
*/
	printf("두번째 문자를 입력하세요\n");
	//scanf_s("%c", &ch2, 1);
	scanf_s(" %c", &ch2,1);

	
	printf("첫번째 문자:%c\n", ch1);
	printf("두번째 문자:%c\n", ch2);

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