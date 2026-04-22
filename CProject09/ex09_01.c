#include<stdio.h>
#include<string.h>

int main()
{
    int a = 10, b = 20;
    int temp;

    printf("바꾸기 전 : a:%d,b:d%\n", a, b);
    {
        int temp;
        temp = a;
        b = a;
    }
    printf("바꾸기 후 : a:%d,b:d%\n", a, b);

    return 0;
}