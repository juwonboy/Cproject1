#include<stdio.h>
#include<stdbool.h>

int main() {

	int num = 0;

	num++;
	++num;

	printf("%d\n", num);
	printf("%d\n", num++);
	printf("%d\n", num);
	printf("%d\n", ++num);
	printf("%d\n", num);

	return 0;

}