#include<stdio.h>

int main() {

	char str[] = {1,2};
	int a;
	int len;
	char szData[] = "Test String!";
	char arr[8] = {1,2,4,6,3};

	a = 200;

	printf("%d\n", a);
	printf("%x\n", &a);
	printf("str:%p\n", str);

	printf("str:%p\n", str);
	printf("&str:%p\n", &str);

	printf("%s\n", szData);
	puts(szData);

	printf("%c %c\n", szData[0], szData[11]);

	printf("sizeof(arr) :%zd\n",sizeof(arr));
	printf("sizeof(szData):%zd\n", sizeof(szData));

	len = sizeof(arr) / sizeof(arr[0]);

	for ( a = 0; a < len; a++)
	{
		printf(" %d :: %c\n", a, arr[a]);
	}

	return 0;
}
