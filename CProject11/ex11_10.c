#include<stdio.h>

void func(int(*)(int, int));
int sum(int, int);
int mul(int, int);
int max(int, int);

int main()
{   
    // 함수 포인터는 어디에 사용하는가?
    // 함수 포인터 변수는 

    int sel;
    scanf_s("%d", &sel);

    switch(sel) {
        case 1:
            func(sum);
            break;
        case 2:
            func(mul);
            break;
        case 3:
            func(max);
            break;
    }

    return 0;
}

//형식 목록이 아니라 정식 매개 변수 목록이 있어야 합니다.
void func(int(*fp)(int,int)){

    int a, b;
    int res;

    printf("두 정수 입력 : ");
    scanf_s("%d %d", &a, &b);

    res = fp(a, b);

    printf("result = %d\n", res);
}

int sum(int a, int b) {
    return a+b;
}

int mul(int a, int b){
    return  a*b;
}

int max(int a, int b) {

    return a > b ? a:b;
}

