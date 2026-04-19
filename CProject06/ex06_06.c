#include<stdio.h>
#include<stdlib.h>

int main() {

	//int* pndata = '\0'; // null (0)
	//int* pndata = 100;

	//printf("%d\n",pndata);
	int* pndata = NULL;

	printf("%d\n", pndata);	//	0
	printf("%p\n", pndata);	//	000000000000000000000

	pndata = (int*)malloc(sizeof(int) * 4);
		// 동적 할당 (프로그램이 실행(메모리)될 때 메모리 저장 공간 만듦

	free(pndata);

	return 0;

}

