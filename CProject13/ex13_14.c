#include<stdio.h>

/*
    열거형 : 기억 공간에 저장될 데이터 집합, 정수형 상수에 이름을 붙여서 가독성을 높이는 자료형
     - 열거형은 enum 키워드로 정의한다.
     - 열거형 상수는 0부터 시작하여 1씩 증가하는 정수값이 자동으로 할당된다.
     - 열거형 상수의 값을 명시적으로 지정할 수도 있다.
     - 열거형 상수는 정수형 상수이므로, 다른 정수형 상수와 혼용하여 사용할 수 있다.
     - 열거형은 구조체와 달리 멤버가 없으며, 단일 데이터 타입으로 취급된다.
*/
typedef enum syllable {
    Do, Re, Mi, Fa, Sol,
    La, Si
}Syllable;

    
void test(Syllable);
int main()
{
    //enum syllable tone;
    Syllable tone;

    return 0;
}

void test(Syllable sy)
{
    switch (sy)
    {
    case Do:
        puts("도는 하얀 도라지");
        break;
    case Re:
        puts("레는 둥근 레코드");
        break;
    case Mi:
        puts("미는 파란 미나리");
        break;
    case Fa:
        puts("파는 예쁜 파랑새");
        break;
    case Sol:
        puts("솔은 작은 솔방울");
        break;
    case La:
        puts("라는 라디오고요~");
        break;
    case Si:
        puts("시는 졸졸 시냇물");
        break;
    }
}
