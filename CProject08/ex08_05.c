#include<stdio.h>

int main()
	{
	char str1[] = "My String";
	char* str2 = "Your String";
	char* str3 = "Your String";

	printf("str1=%s\nstr2=%s\n", str1, str2);

	printf("str2=%p\n", str2); // str2=00007FF6C566ACB8
	printf("str3=%p\n", str3); // str3=00007FF6C566ACB8

	str2 = "Our String";
	printf("str1=%s\nstr2=%s\n", str1, str2);

	printf("str2=%p\n", str2); // str2=00007FF6C566AC90
	printf("str3=%p\n", str3); // str3=00007FF6C566ACB8

	str1[0] = 'X';
	printf("str1=%s\n", str1); // str1=Xy String

	// str2[0] = 'X';
	// printf("str2=%s\n", str2);

	return 0;
}