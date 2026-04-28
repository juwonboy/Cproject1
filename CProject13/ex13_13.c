#include<stdio.h>

/*
    열거형 : 기억 공간에 저장될 데이터 집합, 정수형 상수에 이름을 붙여서 가독성을 높이는 자료형
     - 열거형은 enum 키워드로 정의한다.
     - 열거형 상수는 0부터 시작하여 1씩 증가하는 정수값이 자동으로 할당된다.
     - 열거형 상수의 값을 명시적으로 지정할 수도 있다.
     - 열거형 상수는 정수형 상수이므로, 다른 정수형 상수와 혼용하여 사용할 수 있다.
     - 열거형은 구조체와 달리 멤버가 없으며, 단일 데이터 타입으로 취급된다.
*/
enum season { spring, summer, fall, winter };
int main()
{
    enum season ss;
    char* cp = NULL;

    printf("\n%d\t%d\t%d\t%d\n",spring, summer, fall, winter);

    ss = 2;
    
    switch (ss)
    {
        case spring:
            cp = "봄";
            break;
        case summer:
            cp = "여름";
            break;
        case fall:
            cp = "가을";
            break;
        case winter:
            cp = "겨울";
            break;
    }

    printf("\n나의 계절 => %s\n", cp);

    /*
    1번째 1.0 500
    2번째 2.0 600
    3번째 3.0 700
    4번째 4.0 800
    5번째 5.0 900
    */

    return 0;
}
