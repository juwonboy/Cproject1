#include<stdio.h>

// 2차원 배열명은 첫 번째 부분 배열을 가리키는 배열 포인터이다.
// 배열 포인터는 배열 전체를 가리키는 하나의 포인터 변수이고
// 포인터 배열은 여러 포인터를 저장하는 배열이다.

void ar_prn(int (*ap)[4]);

int main()
{
    int ary[][4]={
        {1,2,3,4}
        ,{5,6,7,8}
        ,{9,10,11,12}
    };
    int i, j;
   
    //int* (*ap)[4] = ary; // ap는 4개의 정수를 갖는 배열을 가리키는 포인터
    int (*ap)[4];
    ap = ary;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", ap[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void ar_prn(int(*ap)[4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%04d", ap[i][j]);
        }
        printf("\n");
    }
}
