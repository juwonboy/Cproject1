#include<stdio.h>

/*
역사(int history),문화(int letters),예능(int art)
세 과목의 점수를 입력 받아서
총점(int tot)과 평균(double average)을 구한 후에
출력하는 프로그램을 작성하시오
*/

int main() {

	// 역사 , 문화 , 예능 ,총점
	int history, letters, art , tot ;

	//평균
	double average;

	printf("역사,문화,예능 입력 : \n");
	scanf_s("%d%d%d", &history, &letters, &art);

	tot = history + letters + art;
	average = (double)tot / 3;

	printf("총점 :  %d,  평균 : %lf \n", tot , average);

	return 0;
}

/*
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n);

    return 0;
}
*/