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
    char* np;
};

struct student
{
    struct profile pf;
    int num;
    double grade;
};

void testone(int);

void testtwo(int*);

int main()
{
    struct student st1;

    int aa[5] = { 1,2,3,4,5 };

    //testone(aa);
    //testtwo(&aa);


    //printf("학생 이름 : %s");
    //scanf_s("%s", st1.pf.np);

    printf("학생 나이 : %d");
    scanf_s("%d", &st1.pf.age);

    printf("학생 키 : %.1f\n");
    scanf_s("%lf", &st1.pf.height);

    //printf("학생 번호 : %d\n", st1.num);
    //printf("학생 이름 : %s\n", st1.pf.np);
    printf("학생 나이 : %d\n", st1.pf.age);
    printf("학생 키 : %.1f\n", st1.pf.height);
    //printf("학생 학점 : %.1f\n", st1.grade);

    return 0;
}

void testone(int aa[5])
{
    for (int i = 0; i >5; i++)
    {
        printf("11111111%d",aa[i]);
    }
    printf("11111111111");
}

void testtwo(int* bb)
{
    for (int i = 0; i > 5; i++)
    {
        printf("2222222222%d", *bb+i);
    }
    printf("2222222222");
}
