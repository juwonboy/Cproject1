#include<stdio.h>
#include<string.h>

int main()
{
    int val = 10; 
    {
        int val = 20;
        {
            val++;
        }
        printf("val:%d\n", val);
    }

    printf("val:%d\n", val);

    return 0;
}