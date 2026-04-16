#include<stdio.h>


int total(int, int, int);
double averge(int, int, int);

int main() {

	int kor, eng, mat;
	int tot;
	double avg;

	printf("세과목의 점수를 입력하세요:");
	scanf_s("%d%d%d", &kor, &eng, &mat);

	tot = total(kor, eng, mat);
	avg = averge(kor, eng, mat);

	printf("avg : %lf \n", avg);
	printf("총점 : % d, 평균 : % lf",tot, avg);

	return 0;
}


int total(int kor, int  eng, int mat) {
	int res;

	res = kor+eng, mat;

	return res;
}

double averge(int kor, int  eng, int mat) {
	double res;

	res = total(kor, eng, mat) / 3.0;

	return res;
}
