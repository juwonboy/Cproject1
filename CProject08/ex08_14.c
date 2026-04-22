#include<stdio.h>
#include<string.h>

int main()
{
	char str[80];

	printf("문자열을 입력하세요:\n");

	//scanf_s("%s", str, sizeof(str)/ sizeof(str[0]));
	scanf_s("%s", str, 80);

	printf("받은 문자열: %s\n",str);

	//공백 포함 데이터 입력, NULL 문자 포함, get string

	gets(str);
	puts("출력 ");
	puts(str);
	//puts(str);

	return 0;
}

