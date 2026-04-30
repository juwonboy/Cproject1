#include<stdio.h>
#include<string.h>

// 5명의 학생 정보(이름, 국어, 영어, 수학 점수)를 구조체 배열로 관리하고, 
// 각 학생의 총점과 평균을 계산하여 출력하세요.
// 또한 평균이 가장 높은 학생을 찾아 출력

struct student
{
	char name[50];
	int kor;
	int eng;
	int math;
	int tot;
	double average;
};

int main() {

	int i;
	int maxindex;
	maxindex = 0;

	//int	j;
	struct student st1[5] = { 0 };
	//struct student st1[5]=
	//{
	//	{"김태희", 90, 80, 70 , 0, 0.0,0},
	//	{"카리나", 85, 95, 80, 0, 0.0,0},
	//	{"윈터", 78, 88, 92, 0, 0.0,0},
	//	{"채수빈", 82, 76, 85, 0, 0.0,0},
	//	{"고윤정", 91, 89, 94, 0, 0.0,0}
	//};

	/*
		김태희 90 80 70 0 0.0,0
		카리나 85 95 80 0 0.0,0
		윈터   80 88 92 0 0.0,0
		채수빈 82 76 85 0 0.0,0
		고윤정 91 89 94 0 0.0,0
	*/

	for (i = 0; i < 5; i++)
	{
		printf("\n[학생 %d]\n", i + 1);
		scanf_s("%s", st1[i].name,50);
		printf("\n[국,영,수 %d]\n", i + 1);
		scanf_s("%d%d%d", &st1[i].kor, &st1[i].eng,&st1[i].math);

		st1[i].tot = st1[i].kor + st1[i].eng + st1[i].math;
		st1[i].average = st1[i].tot / 3.0;

		printf("총점: %d, 평균: %.2f\n", st1[i].tot, st1[i].average);

	}

	printf("\n=== 학생 성적 결과 ===\n");
	printf("%-10s%6s%6s%6s%6s%8s\n", "이름", "국어", "영어", "수학", "총점", "평균");
	printf("----------------------------------\n");

	for (i = 0; i < 5; i++)
	{
		printf("%-10s%6d%6d%6d%6d%8.2f\n", st1[i].name, st1[i].kor, st1[i].eng, st1[i].math, st1[i].tot, st1[i].average);
		if (st1[i].average > st1[maxindex].average) {
			maxindex = i;
		}
	}
	// 평균이 가장 높은 학생 출력
	printf("\n=== 학생 성적 결과 ===\n");
	printf("\n이름 : %s\n",st1[maxindex].name);
	printf("\n평균 : %.2lf\n",st1[maxindex].average);
	
/*

	for ( i = 0; i < 5; i++)
	{
		st1[i].tot = st1[i].kor + st1[i].eng + st1[i].math;
		st1[i].average = st1[i].tot/5.0;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (st1[i].average< st1[j].average) {
				st1[i].rank += 1;
			}
		}
	}

*/

	return 0;
}