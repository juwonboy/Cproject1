#include<stdio.h>

int main() {

	char ch1;
	char ch2;

	printf("두개의 문자를 입력하세요");
	//scanf_s("%c%c",&ch1,1,&ch2,1);
	//scanf_s("%c %c",&ch1,1,&ch2,1);
	scanf_s("%c %c",&ch1,1,&ch2,1);

	printf("첫번째 문자:%c\n",ch1);
	printf("두번째 문자:%c\n",ch2);

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