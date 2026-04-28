#include<stdio.h>

/*
    typedef
*/

typedef int INT;
typedef int* PRT_INT;
typedef unsigned int U_INT;
typedef unsigned int* PRT_UN_INT;
typedef char CHAR;
typedef char* PRT_CHAR;
typedef unsigned char U_CHAR;
typedef unsigned char* PRT_UN_CHAR;

/// type definition(타입 정의)
// -2147483648~2147483647 : signed int,32bit
// 0~4294967295 : unsigned int,32bit
// -128~127 :signed char   0~255 : unsigned char

int main()
{


    INT num1= 20;
    PRT_INT npum1 = &num1;

    printf("num1 : %d\n", num1);
    printf("npum1 : %d\n", *npum1);

    U_CHAR ch = 'z';
    PRT_CHAR pch = &ch;

    printf("ch : %c\n", ch);
    printf("pch : %c\n", *pch);

    return 0;
}
