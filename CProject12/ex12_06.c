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
    }

    calculateRank(&averages, &ranks);

    for (i = 0; i < STUDENTS; i++) {
        printf("rank===========================================\n");
        printf("%d================%d===========================\n",i,ranks[i]);
    }

/*  
    printf("(void *)    sizeof : %d\n", sizeof(void*));
    printf("(char *)    sizeof : %d\n", sizeof(char*));
    printf("(short *)   sizeof : %d\n", sizeof(short*));
    printf("(int *)     sizeof : %d\n", sizeof(int*));
    printf("(long *)    sizeof : %d\n", sizeof(long*));
    printf("(float *)   sizeof : %d\n", sizeof(float*));
    printf("(double *)  sizeof : %d\n", sizeof(double*));
*/

    return 0;
}

void calculateSumAvg(int* scores, int* sums, double* averages) {   
    *sums = 0;
    for (int i = 0; i < STUDENTS; i++) {
        *sums += *(scores+i);
    }
    *averages = (double)*sums / SUBJECTS;
}

void calculateRank(double* paverages, int* prank)
{
    int i,j;
    double temp;
    int rankSum;
    
    rankSum = 0;
    temp = 0.0;

    temp = *(paverages);
       
    for ( i = 0; i < STUDENTS ; i++) {
        *(prank + i) = 1; // 초기 랭크는 1로 설정
        for (j = 0; j < STUDENTS; j++) {

            double aa;
            double bb;

            aa = *(paverages + j);
            bb = *(paverages + i);

            if ( aa > bb) {
                *(prank +i) = j;
            }

            //if (*(paverages + j) > *(paverages + i)) {
            //    *(prank +i) = j;
            //}
        }
    }
}
