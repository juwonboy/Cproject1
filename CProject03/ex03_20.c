#include<stdio.h>

int main() {

	int n = 0;
	int num = 0;

	for (num = 0;num < 20;num++) {
		if (num % 2 != 0 && num % 3 == 0) {
			printf("2의 배수도 아니고 3의 배수도 아닌 값 : %d \n", num);
		}
	}

	return 0;
}