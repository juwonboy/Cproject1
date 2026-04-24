#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define STUDENTS 3
#define SUBJECTS 3

void calculateSumAvg(int* , int* , double*);
void calculateRank(double*, int*);
/*
    배열과 포인터 변수를 사용하여 세 과목의 합과 텽균을 계산하고
    평균값으로 
*/

int main()
{
    int scores[STUDENTS][SUBJECTS];
    int sums[STUDENTS];
    double averages[STUDENTS];
    int ranks[STUDENTS];
    int i, j;
    int temp;

    for ( i = 0; i < STUDENTS; i++) {
        printf("%d번 학생의 세 과목 점수를 입력하세요 : ", i + 1);
        for ( j = 0; j < SUBJECTS; j++) {
            scanf_s("%d", &scores[i][j]);
        }
        calculateSumAvg(&scores[i], &sums[i], &averages[i]);
    }
   

    printf("===========================================\n");
    for ( i = 0; i < STUDENTS; i++) {
        
        for ( j = 0; j < SUBJECTS; j++) {
            printf("%d번 학생의 %d번째 과목 점수 : %d \n", i+ 1,j+1, scores[i][j]);
        }
        printf("%d번 학생 과목 총점 : %d ,평균 : %.2lf \n", i + 1, sums[i], averages[i]);
        printf("===========================================\n");
        //calculateRank(&averages[i], &sums[i]);
    }

    return 0;
}

void calculateSumAvg(int* scores, int* sums, double* averages) {   
    *sums = 0;
    for (int i = 0; i < STUDENTS; i++) {
        *sums += *(scores+i);
    }
    *averages = (double)*sums / SUBJECTS;
}

void calculateRankl(double* aa, int* bb)
{
     
}
