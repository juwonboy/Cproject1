#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20] = "apple";
	char str2[20] = "banana";
	char temp[20];

	// string copy
	strcpy_s(temp, 10, str1);
	strcpy_s(str1, 10, str2);
	strcpy_s(str2, 10, temp);

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	return 0;
}