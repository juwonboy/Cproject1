#include<stdio.h>

/*
 *****
 *****
 ***
*/
// 한줄에 5개씩 출력

int main() {

	int n;
	int i;
	int y;

	printf("양수를 입력하세요:");
	scanf_s("%d", &n);

	i = 1;

	y = 5;

	while (i <= n) {

		//printf("i : %d  || i\\%5 : %d\n",i,i%5);

		printf("*");

		if(i == y){
			printf("\n");
			y = y + 5;
		}

		i++;
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
