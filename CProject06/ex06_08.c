#include<stdio.h>
#include<stdlib.h>

// 문자열은 수정 불가,읽기 전용(read only data)
// Code Area(기계어 코드 저장,read-only)
// Data Area(정적 변수,실행 시작시 메모리에 로드됨)
// Heap Area(동적 메모리,malloc/free)
// Stack(지역 변수,함수 호출)

int main() {
	//char test[]= "Test String!";

	//char* pszDatas = &test;
	char* pszDatas = "Test String!";

	//*pszDatas = 't';
	
	printf("%s\n", pszDatas);


	printf("%zd\n", sizeof(pszDatas)); //	8
	printf("%zd\n", sizeof(*pszDatas)); //	1
	printf("%zd\n", sizeof(pszDatas+1)); //	8


	printf("[%p], [%p], [%p] \n", pszDatas , pszDatas+1, pszDatas+2);
	// [00007FF63DFD9CA8], [00007FF63DFD9CA9], [00007FF63DFD9CAA]
	
	
	return 0;

}