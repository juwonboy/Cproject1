#include<stdio.h>

/*
****
****
****
****
****
*/


int main() {

	int x = 0;
	int y = 0;

	while (y < 5) {
		x = 0;
		while (x < 4) {
			x++;
			printf("*");
		}
		y++;
		printf("\n");
	}

	return 0;
}

/*
#include<stdio.h>
int main() {
	int a;

	scanf_s("%d", &a);
	printf("%d %d %d", a,a,a);
	return 0;

}*/
