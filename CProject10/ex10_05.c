#include<stdio.h>

int main()
{
	/*
	char animal[3][20];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		scanf_s("%s", &animal[i], 20);
	}

	// 열표기
	for (j = 0; j < 20; j++){
		printf("  %dj", j);
	}
	printf("\n");
	printf("11111=================\n");

	for (i = 0; i < 3; i++) {
		printf("%s\n", animal[i]);
	}

	printf("22222=================\n");

	for (i = 0; i < 3; i++) {
		//행표기
		printf("%di=", i);
		for (j = 0; j < 20; j++) {
			printf("%c", animal[i][j]);
		}
		printf("\n");
	}
	*/

	/*
	
		0		1		2
	0	arr0	arr1	arr2
	1	arr3	arr4	arr5
	2	arr6	arr7	arr8
	*/

	char arr[3][3];
	for (int j = 0; j < 9; j++) {
		printf("arr%d =%p\n",j,arr+j);
	}

	// arr0
	printf("%p\n", arr[0]); //
	printf("%p\n", arr[1]); //
	printf("%p\n", arr[2]); //

	printf("%p\n", arr[4]); //
	printf("%p\n", arr[5]); //
	printf("%p\n", arr[6]); //
	printf("%p\n", arr[7]); //
	printf("%p\n", arr[8]); //
	printf("%p\n", arr[9]); //

	printf("========================================\n"); //

	//arr[0] = "abc";
	//arr[1] = "efg";
	//arr[2] = "fij";

	printf("%p\n", arr[0][0]); //
	printf("%p\n", arr[0][1]); //
	printf("%p\n", arr[0][2]); //

	printf("========================================\n"); //

	printf("%p\n", arr[1][0]); //
	printf("%p\n", arr[1][1]); //
	printf("%p\n", arr[1][2]); //


	/*
		000000EA00D3F768
		000000EA00D3F76B
		000000EA00D3F76E
		00000000FFFFFFCC

		C : \Users\PC\source\repos\juwonboy\Cproject1\x64\Debug\CProject10.exe(프로세스 16808)이(가) 0 코드(0x0)와 함께 종료되었습니다.
		이 창을 닫으려면 아무 키나 누르세요...

	*/

}

