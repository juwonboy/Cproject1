#include<stdio.h>
#include<malloc.h>
#include<string.h>

void showArrayElem(int*,int);

int main() {

	int ary1[3] = { 1, 2, 3 }; // 12 byte
	int ary2[5] = { 4, 5, 6, 7, 8 }; //20 byte

	int* a1 = &ary1;
	int* a2 = &ary2;

	//showArrayElem(a1,3);
	//showArrayElem(a2,5);


	showArrayElem(&ary1,3);
	showArrayElem(&ary2,5);

	return 0;
}

void showArrayElem(int* ary,int len)
{
	//int len = 0;
	//len = sizeof(ary); //https://woo-dev.tistory.com/170

	printf("len :: %d \n", len); //len

	for(int i = 0; i < len; i++) {
		printf("%5d \n", ary[i]);
	}
}
