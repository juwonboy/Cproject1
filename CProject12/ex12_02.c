#include<stdio.h>
#include<stdlib.h>

/*
	
*/

int main()
{
    double* high = NULL;
    double* low = NULL;

    high = (double*)malloc(sizeof(double)); // 8byte
    low = (double*)malloc(sizeof(double)); // 8byte

    if (high == NULL || low == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    printf("오늘의 최고 기온과 최저 기온 입력 : ");
    scanf_s("%lf %lf", high, low);
    printf("오늘의 최고 기온 : %.2lf \n", *high);
    printf("오늘의 최저 기온 : %.2lf \n", *low);
    printf("일교차는  : %.2lf \n", *high  - *low);

    free(high);
    free(low);

	return 0;
}
