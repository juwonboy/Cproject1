#include<stdio.h>

int main() {

	char str[80];
	int a;

	a = 200;

	printf("%d\n", a);
	printf("%x\n", &a);
	printf("str:%p\n", str);
	
	printf("str:%p\n", str);
	printf("&str:%p\n", &str);

	return 0;
}
