#include<stdio.h>

int main()
{
    char* ptr_ary[5]; //주소를 저장하는 포인터 배열

    ptr_ary[0] = "tiger";
    ptr_ary[1] = "dog";    // 문자열은 컴파일 후 시작 주소값으로 처리
    ptr_ary[2] = "horse";
    ptr_ary[3] = "elephant";
    ptr_ary[4] = "lion";

    printf("%s\n", ptr_ary[0]);
    printf("tiger=%p\n","tiger");
    printf("ptr_ary[0]=%p\n", ptr_ary[0]);
    
    printf("ptr_ary=%p\n", ptr_ary);
    printf("&prr_ary[0]=%p\n", &ptr_ary[0]);

    
    ptr_ary[0] = "Angry tiger";
    printf("ptr_ary=%p\n", ptr_ary);
    printf("&prr_ary[0]=%p\n", &ptr_ary[0]);
    
    printf("=========================================\n");

    for (int i = 0; i < 5; i++)
    {
        printf("&prr_ary[%d]=%p\n",i, &ptr_ary[1]);
    }

    return 0;
}