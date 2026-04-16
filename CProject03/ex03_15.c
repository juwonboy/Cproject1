#include<stdio.h>

/*

*    *   *   *
*    *   *   *
*    *   *   *
*    *   *   *
*    *   *   *

*/

int main() {

	int x;
	int y;

	for (x = 1;x <= 5;x++) {

		for (y = 1;y <= 4;y++) {

			printf("*\t");

			if (y % 4 == 0) {
				printf("\n");
			}
		}
	}

	return 0;

}
