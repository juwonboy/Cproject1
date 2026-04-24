#include<stdio.h>
#include<string.h>

int main()
{
	char fruit[80] = "straw";

	// fruit+"berry"=>strawberry
	// string concatenation
	// 두 문자열을 붙여서 하나의 문자열을 만든다
	strcat_s(fruit, 20, "berry");

	printf("연결된 문자열:%s\n", fruit);
	// 연결된 문자열:strawberry

	return 0;
}