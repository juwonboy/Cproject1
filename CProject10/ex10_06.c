#include<stdio.h>

int main()
{
    //char animal[5][10] = { {'c','a','t','\0'},{'\0'},{},{},{}};
    //char animal[5][10] = { {"cat"},{"lion"},{"monkey"},{"tiger"},{"dog"} };
    //char animal[5][10] = { "tiger","lion","monkey","cat","dog" };
    char animal[][10] = { "tiger","lion","monkey","cat","dog" };

    int i;

    /*for (i = 0; i < 5; i++)
    {
       printf("%s\n", animal[i]);
    }*/

    printf("animal[3][3]=%c\n", animal[3][3]); // NULL
    printf("animal[3][3]=%s\n", animal[3][3]); // animal[3][3]=(null)
    printf("animal[3][4]=%c\n", animal[3][4]);
    printf("animal[3][4]=%d\n", animal[3][4]); // 0
    printf("animal[3]=%s", animal[3]);// cat

    return 0;
}