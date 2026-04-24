#include<stdio.h>

int main()
{
    // 무한 루프,if,'\n'
    char str[80]; // 문자열을 저장할 배열
    int ch; // getchar()함수의 리턴값을 저장할 변수
    int i = 0; // 반복 제어 변수

    //printf("문자열을 입력하세요(종료는 엔터):");
    while (1)
    {
        printf("문자열을 입력하세요(종료는 엔터):"); // "Love"
        ch = getchar(); // 문자 하나 입력
        if (ch == '\n') // 종료 인지 체크
            break;
        str[i] = ch;
        i = 1;
        while (1)
        {
            ch = getchar(); // 문자 하나 입력
            if (ch == '\n') // 종료 인지 체크
                break;
            str[i] = ch;
            i++;
        }
        str[i] = '\0';
        i = 0;
        printf("입력된 문자열 출력:%s\n", str);
    }

    return 0;
}