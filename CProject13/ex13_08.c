#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 구조체
*/

struct student{
    int num;        // 학번 저장
    char name[20];  // 이름
    int score[5];   // 5과목 점수 저장
    double avr;     // 평균 저장
};
struct student avg_prn(struct student);

int main()
{
    struct student stone = {
        1
        ,"고윤정"
        ,{10,20,30,40,50}
        ,0.0
    };

    avg_prn(stone);

    return 0;
}

struct student avg_prn(struct student pst)
{
    int i;
    int sum;
    int score_len = sizeof(pst.score) / sizeof(pst.score[0]);

    sum = 0;

    for (i = 0; i < score_len; i++) {
        sum += pst.score[i];
    }
    pst.avr = (double)sum/ score_len;

    return pst;
}
