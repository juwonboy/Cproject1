#include<stdio.h>

int main()
{
	int a;
	int ap;

	ap = &a;

	printf("a=%p,a=%d\n", &a, &a);
	// a=0000006C61F5FC34,a=1643510836 
	// -2147483648~2147483647
	printf("ap=%d\n", ap);
	// ap=1643510836
	printf("ap=%p\n", ap);
	// ap=0000000061F5FC34
	printf("ap=%p\n", &ap);
	// ap=0000006C61F5FC54

	return 0;
}