#include<stdio.h>
#include<string.h>

/*
  ex09_03.c
  지역변수
  static 차이점 파악
*/

int TestFunc();
int TestFunc2();

int main()
{
    
    printf("%d\n", TestFunc());
    printf("%d\n", TestFunc());
    printf("%d\n", TestFunc());

    return 0;
}

int TestFunc()
{
    static int a = 0;
    a++;
    return a;
}

int TestFunc2()
{
    int a = 0;
    a++;
    return a;
}
