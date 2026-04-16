#include<stdio.h>

/*
1부터 100까지의 합
1+2+3+4+......+99+100 (누적:sum=sum+값)

printf("1부터 100까지의 합:%d\n", sum);
*/

int main() {


	int i;
	int sum = 0;

	i = 0;

	while (i < 100) {
		i++;
		printf("sum :: %d + %d ", sum, i);
		sum = sum + i;
		printf("= %d \n",sum);
	}

	printf("1부터 100까지의 합:%d\n", sum );

	return ;
}