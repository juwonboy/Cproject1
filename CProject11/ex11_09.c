#include<stdio.h>

int sum(int, int);

int main()
{
    int res;
	//  int* fp; 포인터 변수 선언
    int(* fp)(int,int);  //  함수  포인터 변수 선언
	//  함수명은 함수의 정의가 있는 메모리의 위치값이며 함수를 가리킨다.

    fp = sum;
    res = fp(10, 20);

    printf("result = %d\n", res);
    
    return 0;
}

int sum(int a, int b) {
    int res;
    res = a + b; // 30
    return  res; // 30을 호출하는 곳으로 보내고 함수 종료 
}
