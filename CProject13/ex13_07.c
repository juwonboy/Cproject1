#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 ±¸Á¶Ã¼
*/

struct profile
{
    int age;
    double height;
    char* np;
};

struct student
{
    struct profile pf;
    int num;
    double grade;
};

int main()
{
    struct student st1;

    return 0;
}
