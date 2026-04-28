#include<stdio.h>

/*
        구조체를 재정의(typedef struct)하는 주된 이유는 가독성 향상, 코드 간결화
        , 그리고 사용자 정의 자료형처럼 편리하게 사용하기 위해서입니다. 
        C 언어에서 struct 키워드를 매번 붙이는 번거로움을 줄이고
        , 데이터 타입을 명확하게 표현할 수 있습니다.

     - typedef : type definition(타입 정의)
     - 구조체의 재정의는 구조체 이름을 생략한 채로 typedef를 이용하여 구조체를 정의하는 것을 말한다.
     - typedef를 이용하여 구조체를 재정의하면 구조체 변수를 선언할 때 struct 키워드를 생략할 수 있다.
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
    INT num1 = 20;
    PRT_INT npum1 = &num1;

    printf("num1 : %d\n", num1);
    printf("npum1 : %d\n", *npum1);

    U_CHAR ch = 'z';
    PRT_CHAR pch = &ch;

    printf("ch : %c\n", ch);
    printf("pch : %c\n", *pch);

    return 0;
}
