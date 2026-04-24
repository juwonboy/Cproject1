#include<stdio.h>

void ar_prn(int (*ap)[4]);

int main()
{
    int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
    int arr2d[2][4] = {1,2,3,4,5,6,7,8};
    int i, j;

    //포인터 배열 선언
    int* whoA[4] = {&num1, &num2, &num3, &num4};

    //배열 포인터 선언
    int (*whoB)[4] = arr2d;

    // 포인터 배열을 이용한 출력

    //printf("%d %d %d %d", *&num1, *&num2, *&num3, *&num4);
    printf("%d %d %d %d", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
    printf("\n");
    printf("%d %d %d %d", whoA[0], whoA[1], whoA[2], whoA[3]);

    for(i = 0; i < 2; i++){
        for (j = 0; j < 4; j++) {
            printf("%d ", whoB[i][j]);
        }
    }
    printf("\n");

    return 0;
}
