#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main() {

	int ary[5] = { 10, 20, 30, 40, 50 };
	int* ap = ary;
	int i;

	for (i = 0; i < 5; i++){

		//printf("%5d \n", ary[i]); //배열의 인덱스
		//printf("%5d \n", ap[i]); // 포인터의 인덱스
		//printf("%5d \n", *(ap+i)); // 포인터의 상대의 위치
		printf("%5d ", *ap+i); // 10    11    12    13    14

	}

	return 0;
}

