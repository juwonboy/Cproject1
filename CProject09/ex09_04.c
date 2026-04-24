#include<stdio.h>
#include<string.h>

//static int j;
void incr();

int main()
{
   static int j;
   printf("1 j=%d\n", j);
    
    for (int i = 0; i < 5; i++)
    {
        incr();
    }

    printf("2 j=%d\n",j);
    printf("2林家 j=%p \n", &j);

    return 0;
}

void incr()
{
    static int j;
    printf("incr 林家 j=%p \n", &j);
    j++;
    printf("incr j=%d\n", j);
}
