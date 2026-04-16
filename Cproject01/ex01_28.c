#include<stdio.h>

int main() {

	char name[30]; //배열 선언 (문자 연속)
	char sex; // 문자 1개
	int age;
	double height;

	printf("이름을 입력하세요\n");
	scanf_s("%s", name, 30);
	//scanf_s("%c",&name,sizeof(name));
	
	printf("성별을 입력하세요\n");
	scanf_s(" %c",&sex,1);
	//scanf_s(" %c",&sex, sizeof(sex));

	printf("나이을 입력하세요\n");
	scanf_s("%d",&age);
	//scanf_s(" %d",&age, sizeof(age));
	
	printf("키을 입력하세요\n");
	scanf_s("%lf", &height);
	//scanf_s(" %lf", &height, sizeof(height));

	printf("이름은 :: %s\n",name);
	printf("성별을 :: %c\n",sex);
	printf("나이을 :: %d\n",age);
	printf("키을 :: %lf\n",height);
	
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