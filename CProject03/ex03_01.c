#include<stdio.h>

/*
*/

int main() {

	//  ¹Ýº¹¹® while, do~while , for
	int num = 0;

	//printf("HI KOR %d\n", num++);
	//printf("HI KOR %d\n", num++);
	//printf("HI KOR %d\n", num++);
	//printf("HI KOR %d\n", num++);
	//printf("HI KOR %d\n", num++);
	//printf("HI KOR %d\n", num++);

	num = 0;

	while (num < 5) {
		//printf("HI KOR %d\n", num++);
		printf("HI KOR %d\n", num);
		num++;
		//num = num + 3;
		if (num == 2) {
			return 0;
		}
	}

	return 0;
}