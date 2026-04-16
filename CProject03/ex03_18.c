#include<stdio.h>

/*
*/

int main() {

	int x;
	int y;

	for (x = 1;x < 10;x++) {
		for (y = 2; y < 9;y+=3) {
			printf(" %d * %d = %d \t",y,x, y*x);
		}
		printf("\n");
	}

	return 0;

}
