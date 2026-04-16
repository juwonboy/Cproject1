#include<stdio.h>

/*
 *****
 *****
 ***
*/
// 한줄에 5개씩 출력

int main() {

	int i;
	int sum;
	sum = 0;
	for ( i = 0; i <= 10; i++){
		printf("반복문\n");
		sum += i;
	}
	
	printf("반복문\n");
	printf("1~10 까지의 합은 : %d \n",sum);

	return 0;
}
