#include<stdio.h>
#include<stdlib.h>

int main() {

	char c = 'A';
	char p = &c;

	printf("% c % c \n", c, *&c);

	return 0;
}

