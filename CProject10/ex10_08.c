#include<stdio.h>

int main()
{
    int ary1[4] = { 1,2,3,4 };
    int ary2[4] = { 11,12,13,14 };
    int ary3[4] = { 21,22,23,24 };

    int* ptr_ary[3] = { ary1, ary2, ary3 };

    int i;
    int j;

    // 
    for ( i = 0; i < 3; i++){
        printf("ptr_ary[%d][0] = %d \n", i, ptr_ary[i][0]);
    }

    // 
    for (i = 0; i < 3; i++){
        printf("*(ptr_ary[%d]) = %d \n", i, *(ptr_ary[i]));
    }

    // 
    for (i = 0; i < 3; i++){
        printf("*(ptr_ary+%d) = %d\n", i, *(ptr_ary+i));
    }

    /*
    int ary1[4] = { 1,2,3,4 };
    int ary2[4] = { 11,12,13,14 };
    int ary3[4] = { 21,22,23,24 };
        
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", ptr_ary[i][j]);
        }
        printf("\n");
    }
    */

    return 0;
}