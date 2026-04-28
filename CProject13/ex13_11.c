#include<stdio.h>

struct score {
    int kor;
    int eng;
    int mat;
};

int main()
{
    struct score a = { 90,80,70 };
    struct score* sp = &a;

    printf("국어:%d\n",a.kor);
    printf("국어:%d\n",(*sp).kor);
    // 멤버 참조 연산가(.)가 참조연산다(*)보다 우선순위가 높기 때문에 괄호로 묶어주어야 한다.

    printf("영어:%d\n", (*sp).eng);
    printf("수학:%d\n", (*sp).mat);

    // 간접 멤버 참조 연산자 (->)를 사용하면 간단하게 표현할 수 있다.
    printf("국어:%d\n", sp->kor);
    printf("영어:%d\n", sp->eng);
    printf("수학:%d\n", sp->mat);

    return 0;
}

