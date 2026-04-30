#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"ArrayList.h"

int main() {

	// ArrayList의 생성 초기화
	List list;
	int data;

	LisInit(&list);

	LInsert(&list , 11);
	LInsert(&list , 12);
	LInsert(&list , 22);
	LInsert(&list , 22);
	LInsert(&list , 15);

	printf("현재 데이터의 수 : %d\n",LCount(&list));

	// 첫 번째 데이터 조회
	if (LFirst(&list, &data))
	{
		printf("첫번째 데이터:%d ", data);
		// 두 번째 이후의 데이터 조회
		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}
	}
	printf("\n\n");

	// 숫자 22을 모두 탐색하여 모두 삭제
	if (LFirst(&list, &data))
	{
		if (data == 22)
			LRemove(&list);
		while (LNext(&list, &data))
		{
			if (data == 22)
				LRemove(&list);
		}
	}

	printf("\n\n");

	return 0;

}
