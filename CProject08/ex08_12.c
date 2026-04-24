#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20] = "banana";
    char str2[20] = "apple";
    char temp[20];
    int res;

    res = strcmp(str1,str2);

    if (res > 0) {
        strcpy_s(temp, 10, str1);
        strcpy_s(str1, 10, str2);
        strcpy_s(str2, 10, temp);
    }

    printf("str1 :: \t%s \n" ,str1);
    printf("str2 :: \t%s \n" ,str2);

    return 0;
}