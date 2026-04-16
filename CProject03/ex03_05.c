#include<stdio.h>

/*
1부터 100까지의 합
1+2+3+4+......+99+100 (누적:sum=sum+값)

printf("1부터 100까지의 홀수의 합:%d\n", sum);
*/

int main() {


	int i;
	int sum = 0;

	i = 1;

	while (i <= 100) {

		if(i%2 > 0){
			//printf("%d\n",i);
			sum = sum + i;
		}
		i++;
	}

	printf("1부터 100까지의 홀수 합:%d\n", sum);

	return;
}