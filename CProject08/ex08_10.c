#include<stdio.h>
#include<string.h>

int main()
{
	char fruit[80] = "apple";
	char* strp = "strawberry";
	int len;

	// string length
	len = strlen(fruit);
	printf("문자열의 길이:%d\n", len); // 5,NULL 문자 제외

	len = strlen(strp);
	printf("문자열의 길이:%d\n", len); // 10,NULL 문자 제외

	return 0;
}