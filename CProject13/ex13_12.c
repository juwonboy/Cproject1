#include<stdio.h>
#include<string.h>

void input_data(struct profile*);
void elite(struct profile*);

struct profile {
    char name[20];
    double grade;
    int english;
};

int main()
{
    char test[50];
    struct profile new_staff[5];

    //test = "\0";

    scanf_s("%s", test,50);
    printf("%s\n",test);

    //input_data(new_staff);
    //elite(new_staff);


    return 0;
}


// 구조체 배열 멤버에 점수 입력
void input_data(struct profile* sp)
{
    int i;
    /*
        김태희 1.0 500
        카리나 2.0 600
        윈터 3.0 700
        채수빈 4.0 800
        고윤정 5.0 900
    */

    printf("이름, 학점, 영어 점수를 입력하세요.:");
    for ( i = 0; i < 5; i++)
    {
        //scanf_s("%s%lf%d", &sp[i].name, &sp[i].grade, &sp[i].english); 
        //scanf_s("%s%lf%d",&(*(sp + i)).name, 20, &(*(sp + i)).grade, &(*(sp + i)).english);;
        scanf_s("%s%lf%d", &(sp + i)->name, 20, &(sp + i)->grade, &(sp + i)->english);
        //scanf_s("%s%lf%d", (sp + i)->name, 20, &(sp + i)->grade, &(sp + i)->english);
    }
}

void elite(struct profile* sp)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        // 1. 유형
        //printf("이름:%s 학점:%.1f 영어 점수:%d\n", (*(sp + i)).name, (*(sp + i)).grade, (*(sp + i)).english);

        // 2. 유형
        printf("이름:%s 학점:%.1f 영어 점수:%d\n", (sp + i)->name, (sp + i)->grade, (sp + i)->english);
    }
}
