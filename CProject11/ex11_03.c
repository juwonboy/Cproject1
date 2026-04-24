#include<stdio.h>

void str_prn(char**, int);

int main()
{
    int cnt;
    char* ptr_ary[] = {
        "eagle"
        ,"tiger"
        ,"lion"
        ,"squirrel"
    };

    printf("sizeof=%zd\n", sizeof(ptr_ary));
    cnt = sizeof(ptr_ary) /sizeof(ptr_ary[0]);
    str_prn(ptr_ary, cnt);

    return 0;
}

void str_prn(char** spp, int cnt)
{
    for (int i = cnt-1; i > -1; i--)
    {
        printf("%s\n", spp[i]);
    }
}
