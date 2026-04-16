#include<stdio.h>

// 배열 : 변수의 연속(순서가 있는)된공간, 동일 타입

int main() {

	int arr[100];
	int i;
	int sum = 0;
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) // 1
	{
		 arr[i] = (i == 0) ? 10 : (i + 1) * 10; // 1
		 printf("arr[%d] =%d \n", i, arr[i]); // 1
	}

	//바이트를 잘라서 길이로 변환.........
	printf("sizeof(arr[0]) : %d  \n", sizeof(arr[0]));
	printf("sizeof(arr) : %d \n", sizeof(arr));
	printf("sizeof(arr) / sizeof(arr[0]) : %d \n`", sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		sum += arr[i];
	}
	printf("배열속 합게 : %d",sum); // 2 

	return 0;
}
