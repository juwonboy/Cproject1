#include<stdio.h>
#include<stdlib.h>

int main() {


	int a = 10;
	int* ap = &a;
	//int* bp = &a;
	int* bp = NULL;

	printf("%d\n", *ap);
	printf("%p\n", ap);

	bp = ap;

	printf("%d\n", *bp);
	printf("%p\n", bp);

	return 0;

}

