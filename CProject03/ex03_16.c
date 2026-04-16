#include<stdio.h>

/*

*    
*    * 
*    *   *
*    *   *   *
*    *   *   *   *

*/

int main() {

	int x;
	int y;

	for (x = 1;x <= 5;x++) {
		

		for (y = 1; y-1 < x;y++) {
			printf("*\t");
		}
		printf("\n");
	}

	return 0;

}
