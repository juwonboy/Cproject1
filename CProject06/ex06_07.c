#include<stdio.h>
#include<stdlib.h>

// 문자열은 수정 불가,읽기 전용(read only data)
// Code Area(기계어 코드 저장,read-only)
// Data Area(정적 변수,실행 시작시 메모리에 로드됨)
// Heap Area(동적 메모리,malloc/free)
// Stack(지역 변수,함수 호출)

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

