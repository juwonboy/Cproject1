#include<stdio.h>

/*
	2차원 배열과 포인터 배열 샘플 작성
*/

int main()
{
	/*
	int a[3][4] = { 
			{1	,2		,3	,4}
		,	{5	,6		,7	,8}
		,	{9	,10,	11	,12} 
	};

	//48 byte / 16byte
	printf("sizeof(a) : %d \n", sizeof(a)); // 48 byte
	printf("sizeof(a[0]) : %d \n", sizeof(a[0])); // 16 byte

	for (int i = 0; i < sizeof(a)/ sizeof(a[0]); i++)
	{
		for (int j = 0; j < sizeof(a[i]) / sizeof(a[i][0]); j++) {
			printf("a[%d][%01d] : %02d %t", i, j, a[i][j]);
		}
		printf("\n");
	}
	*/

	int i, j;
	int score[3][4];
	int tot = 0;
	double avg = 0.0;

	for ( i = 0; i < 3; i++)
	{
		printf("%d번째 학생의 점수 입력 4과목 입력: ", i + 1);
		for (j = 0; j < 4; j++) {
			scanf_s("%d", &score[i][j]); //키보드로 부터 점수 입력
		}
	}

	for (i = 0; i < 3; i++)
	{
		tot = 0;
		printf("====================================================================\n");
		printf("%d번째 학생의 4과목 성적 \n", i + 1);
		printf("====================================================================\n");
		for (j = 0; j < 4; j++) {
			tot += score[i][j];
			printf("%d번과목 점수 : %d\n",j+1, score[i][j]);
		}
		printf("====================================================================\n");

		printf("\n%d번째 학생의 총점 : %d\n",i+1, tot);
		avg = (double)tot / 4;
		printf("%d번째 학생의 평균 : %.2lf\n",i+1, avg);
		printf("===============================================999=====================\n");	}

	return 0;
}