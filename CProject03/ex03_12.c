#include<stdio.h>

int main() {

	int i;
	int age;
	int sum=0;

	for (i = 0; i < 5; i++) {
		printf("%d 번째 나이입력 : \n",i+1);
		scanf_s("%d", &age);
		sum += age;
	}

	printf("나이평균 : %.2lf \n",sum/(i*0.1));

	return 0;
}
