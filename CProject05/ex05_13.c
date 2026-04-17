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

	char szData[] = "Test String!";

	printf("%s\n", szData);
	puts(szData);

	printf("%c %c\n", szData[0], szData[11]);

	return 0;
}
