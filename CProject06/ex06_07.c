#include<stdio.h>
#include<stdlib.h>

// 문자열은 수정 불가,읽기 전용(read only data)
// Code Area(기계어 코드 저장,read-only)
// Data Area(정적 변수,실행 시작시 메모리에 로드됨)
// Heap Area(동적 메모리,malloc/free)
// Stack(지역 변수,함수 호출)

int main() {
	
	char test[] = "Test String!";

	//printf("%c\n", test[0]);
	//printf("%c\n", test[1]);
	//printf("%c\n", test[2]);

	printf("%s\n", test);

	printf("[%p] %c %c \n", test, test[0] , *test);
	printf("[%p] %c %c \n", test, test+1 , *test+1);
	printf("[%p] %c %c \n", test, test+2 , *test+2);

	printf("[%p] %c %c \n", test, test+2 , *test+2);

	//test +1 +2 +11 주소값 구하고 해당ㄴ하는 주소의 값 구하기

	printf("==================================================\n");
	printf("[%p] %p %p %p \n", test, test + 1, test + 2, test + 11);
	printf("[%p] %c %c %c \n", test, test + 1, test + 2,*test + 11);

	printf("==================================================\n");
	printf("==================================================\n");

	printf("[%p] %p %p %p \n", test, *test+1 , *test+2 , *test + 11);
	printf("[%p] %c %c %c \n", test, *test+1 , *test+2 , *test + 11);
	
	printf("==================================================\n");

	printf("[%p] %c \n", test + 1, *(test + 1));
	printf("[%p] %c \n", test + 2, *(test + 2));
	printf("[%p] %c \n", test + 11, *(test + 11));
	printf("[%p] %c \n", test + 12, *(test + 12));

	return 0;

}