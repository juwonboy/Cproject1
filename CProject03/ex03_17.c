#include<stdio.h>

/*

*       *       *       *       *
*       *       *       *
*       *       *
*       *
*

*/

int main() {

	int x;
	int y;

	for (x = 1;x <= 5;x++) {

		for (y = 0; y < 6 - x;y++) {
			printf("*\t");
		}
		printf("\n");
	}

	return 0;

}
