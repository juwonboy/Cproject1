#include<stdio.h>
#include<string.h>

int* incr();
//static int sum = 0;

int main()
{
    int* sp;

/*

    for (int i = 0; i < 5; i++)
    {
        sp = incr();

        printf("sp : %p \n",sp);
        //printf("sp value(adress)=%p \n",sp);
        //printf("sum10%d\n",*sp+10);

    }
 
 */

    for (int i = 0; i < 5; i++)
    {
        sp = incr();

        printf("sp : %p \n", sp);
        printf("sp value(adress)=%p \n",sp);
        printf("sum10%d\n",*sp+10);

    }

    return 0;
}

int* incr()
{
    static int sum = 0;
    //int sum = 0;
    sum++;
    return &sum;
}
