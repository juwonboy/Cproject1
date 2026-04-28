#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 구조체
*/

struct profile
{
    int age;
    double height;
};

int main()
{
    struct profile  p1 = { 25,175.5 };
    struct profile* ptr = &p1;

    printf("학생 나이 : %d\n", p1.age);
    printf("학생 나이 : %d\n", (*ptr).age);
    printf("학생 나이 : %d\n", ptr->age);

    return 0;
}
