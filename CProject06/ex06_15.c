#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main() {

	char* str=(char*)malloc(10);

	strcpy_s(str, 6, "world");

	str[0] = 'W';
	 
	printf("%s \n", str);


	free(str);

	return 0;
}

