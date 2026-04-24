#include<stdio.h>

//void str_prn(char**, int);

int main()
{
    int nums[5] = {10, 20, 30, 40, 50};
    int* ip = nums;

	printf("%d\n", nums[0]);    // 10
    printf("%d\n", ip[0]);    // 10
    printf("%d\n", ip[4]);    // 50

    printf("%p\n", nums);       // 배열의 시작 주소(배열명)
    printf("%d\n", *nums);      // 배열의 시작 주소의 값,10
    printf("%d\n", *(nums+4));  // 50

    return 0;
}
