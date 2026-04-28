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

int main()
{
    struct student st1;
    st1.pf.age = 23;
    st1.pf.height = 175.5;
    st1.num = 1;
    st1.pf.np = "카리나짱";
    st1.grade = 4.5;

    printf("학생 번호 : %d\n", st1.num);
    printf("학생 이름 : %s\n", st1.pf.np);
    printf("학생 나이 : %d\n", st1.pf.age);
    printf("학생 키 : %.1f\n", st1.pf.height);
    printf("학생 학점 : %.1f\n", st1.grade);

    return 0;
}
