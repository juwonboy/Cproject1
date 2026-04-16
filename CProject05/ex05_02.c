#include<stdio.h>

// 배열 : 변수의 연속(순서가 있는)된공간, 동일 타입

int main() {

	int anData[4] = {1,2,3,4};
	int anDataLength = sizeof(anData) / sizeof(anData[0]);

	for (int i = 0; i < anDataLength; i++) // 1
	{
		printf("anData[%d] =%d \n", i, anData[i]); // 1
	}

	// 모든 배열의 이름으 시작 주소값이다.

	return 0;
}
