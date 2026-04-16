#include<stdio.h>
#include<stdbool.h>

int main() {

	int data = 10, newdata = 20;
	int x = 0, y = 0;

	printf("%d\n", !data && newdata);
	printf("%d\n", !(data && newdata));
	printf("%d\n", x || !y);
	printf("%d\n", !(x || !y));

	return 0;

}