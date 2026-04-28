#include<stdio.h>

/*
    typedef
*/

typedef struct student
{
    int num; //학번
    double grade; //학점
}Student;

//void data_prn(Student);
void data_prn(Student*);

int main()
{
    //struct student st1;
    Student st2 = { 315, 4.2 };

    //printf("%zd\n", sizeof(st2));
    //printf("%d\n", &st2);
    //printf("%p\n", &st2.num);
    //printf("%p\n", &st2.grade);

    //data_prn(&st2);

    return 0;
}

//void data_prn(Student sp)
//{
//    printf("학번 : %d\n", sp.num);
//    printf("학점 : %.1f\n", sp.grade);
//}

void data_prn(Student *sp)
{
    // 1 . 유형 비추
    //printf("학번 : %d\n", (*sp).num);
    //printf("학점 : %.1f\n", (*sp).grade);

    // 2 . 유형 추천
    printf("학번 : %d\n", sp->num);
    printf("학점 : %.1f\n", sp->grade);
}