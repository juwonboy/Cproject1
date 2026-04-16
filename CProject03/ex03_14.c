#include<stdio.h>

/*
	구구단 7잔 출력
*/
int main() {

	int x;

	for (x = 1;x<10;x++) {

		printf("%d * %d = %d \t",7,x,7*x);

		if (x%3 == 0) {
			printf("\n");
		}
	}

	return 0;

}
