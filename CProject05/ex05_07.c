#include<stdio.h>
/*
	int ary[] = { 3,4,7,8,10,12,15,15,6,5,13,15,16,17,13,12,7,16,20,19 };
	int i;
	int size;
	int n;
	int count = 0; // 누적 변수
	printf("찿기를 원하는 숫자를 입력하세요(1~20):");
	scanf_s("%d", &n);
*/

void lineprint(int[], size_t, int);

int main() {

	int ary[] = { 1,2,3,4,5,6,7,8 };
	int i,r;
	int temp;
	int size;

	size = sizeof(ary) / sizeof(ary[0]);

	printf("처음 배열에 저장된 값 : \n");
	/*	
	for ( i = 0; i < size; i++)
	{
		printf("1 : %d\n", ary[i]);
		//	처음 배열에 저장된 값 : 1 2 3 4 5 6 7 8 
	}
	*/

	lineprint(ary, size, 1);


	for (i = 0; i < size/2; i++)
	{
		temp = ary[i];
		ary[i] = ary[(size-1)-i];
		ary[(size - 1) - i] = temp;
	}

	printf("===================================\n");
	printf("===================================\n");

	/*
	for (i = 0; i < size; i++)
	{
		printf("2 : %d\n", ary[i]);
		//	처음 배열에 저장된 값 : 1 2 3 4 5 6 7 8 
	}
	*/

	lineprint(ary, size, 2);

	return 0;
}

void lineprint(int array[], int size, int num)
{

	for (int i = 0; i < size; i++)
	{
		printf("%ds : %d\n", num,array[i]);
		//	처음 배열에 저장된 값 : 1 2 3 4 5 6 7 8 
	}
}
