#include<stdio.h>

int main() {
jsb
	char str[] = "There is no royal road to learning C.0";
	char str2[80];
	int a;
	int len;

	len = sizeof(str) / sizeof(str[0]);

	printf("%s\n", str);
	printf("배열 str의 크기 :%zd\n", sizeof(str));
	printf("null 문자 출력(문자): %c\n", str[len - 1]);
	printf("null 문자 출력(숫자): %d\n", str[len - 1]);

	str[12] = '?';

	printf("문자출력 :: %c\n", str[12]);
	printf("문자열 출력 :: %s\n", str);

	for (a = 0; a < len; a++)
	{
		printf(" %d :: %c\n", a, str[a]);
	}

	return 0;
}