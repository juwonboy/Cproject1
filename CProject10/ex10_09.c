#include<stdio.h>

int main()
{
    char a[][10] = {
        "horse"
        ,"fox"
        ,"hippo"
        ,"tiger"
    };

    char* pa[] = { a[0], a[1], a[2] ,a[3] }; // 문자형 포인트 배열 선언

    int i;
    int count = sizeof(pa) / sizeof(pa[0]);

    printf("sizeof(pa) : %d \n", sizeof(pa)); // 16 byte
    printf("sizeof(pa[0]) : %d \n", sizeof(pa[0])); // 4 byte
    printf("count : %d \n", count);

    for ( i = 0; i < count; i++)
    {
        //printf("%c \n", pa[i][i]);

        printf("pa[%d][%d] = %c\n",i,i,pa[i][i]);
    }
   
    return 0;
}