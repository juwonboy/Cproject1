#include<stdio.h>

int main()
{
	 // 문자열은 데이터 타입 (innt, double, char)이 존재하지 않는다.

	int age;
	char* greeting;

	printf("나이를 입력하세요:");
	scanf_s("%d", &age);

	if (age >= 30) {
		greeting = "처음뵙겠습니다.";
	}
	else {
		greeting = "뷁";
	}

	printf("%s", greeting);

	return 0;
}

/*
#include<stdio.h>

int main()
{
	int h;
	int m;

	scanf_s("%d:%d", &h, &m);

	printf("%d:%d", h, m);
	return 0;
}
*/
