#include<stdio.h>

int main()
{
	char* name;
	name = "Hong gil dong";
	printf("%s\n", name);

	char name2[80] = "Hong gil dong";
	printf("%s\n", name2);

	char name3[80];
	// name3 = "Hong gil dong";
	// 배열명은 상수(시작 주소값)="Hong gil dong"

	return 0;
}