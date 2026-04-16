#include<stdio.h>

int main() {

	char ch = 'A';
	char ch1[3] = '정';
	char name[80] = "황금박쥐"; // 문자열(string)
	int i = 0;
	double db = 16.8;

	printf("name[0]=%c\n", name[0]);
	printf("name[1]=%c\n", name[1]);
	printf("name[2]=%c\n", name[2]);
	printf("name[3]=%c\n", name[3]);

	printf("정수형 상수의 출력:%d\n", -10);
	printf("정수형 변수의 출력:%d\n", i);
	printf("정수형 수식의 출력:%d\n", i/3);

	printf("실수형 상수를 소수점 형채 출력:%lf\n", 2.5);
	printf("실수형 변수를 지수 형태 출력:%le\n",db);
	printf("실수형 수식를 소수점 형태 출력:%lf\n",db/4);

	printf("문자 상수의 출력:%c %d\n", 'F','F');
	printf("문자 변수의 출력:%c\n", ch);
	printf("문자 변수의 출력:%s\n", name);

	//printf("%d\n", ch1);
	printf("%lf\n", 3.4);
	

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