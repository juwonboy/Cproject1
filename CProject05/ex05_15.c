#include<stdio.h>

int main() {

	char str1[] = "There is no royal road to learning C.";
	char str2[80];
	int a;
	int len;

	len = sizeof(str1) / sizeof(str1[0]);

	printf("%s\n", str1);
	printf("배열 str의 크기 :%zd\n", sizeof(str1));
	printf("null 문자 출력(문자): %c\n", str1[len - 1]);
	printf("null 문자 출력(숫자): %d\n", str1[len - 1]);

	//str[12] = '?';

	//printf("문자출력 :: %c\n", str[12]);
	//printf("문자열 출력 :: %s\n", str);

	for (a = 0; a < len; a++)
	{
		str2[a] = str1[a];
		//printf(" %d :: %c\n", a, str[a]);
	}

	printf("복사된 str2 :: %s\n", str2);
	for (a = 0; a < len; a++)
	{	
		printf(" %d :: %c\n", a, str2[a]);
	}	
	return 0;
}