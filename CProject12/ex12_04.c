
#include<stdio.h>
#include<stdlib.h>

/*

*/

int main()
{
    int* srScore;
    int stNum;
    int i,sum=0;

    printf("학생수를 입력하세요 : ");
    scanf_s("%d", &stNum); //학생수 입력
    srScore = (int*)malloc(sizeof(int) * stNum); // 학생수 만큼의 메모리 할당

    if (srScore == NULL) {
        printf("메모리 할당 실패\n");
        exit(1); // 프로그램 강제 종료
    }

    for ( i = 0; i < stNum; i++)
    {
        printf("%d번 학생의 성적을 입력하세요:", i+1);
        scanf_s("%d", &srScore[i]); // 학생수 만큼의 성적 입력
    }

    for (i = 0; i < stNum; i++)
    {
        //sum += srScore[i]; // 학생수 만큼의 성적 합계
        sum += *(srScore+i); // 학생수 만큼의 성적 합계
    }
        printf("\n 총점은 %d이고 평균은 %d점 입니다\n",sum, sum/stNum);


    return 0;
}
