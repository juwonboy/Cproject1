#include<stdio.h>
#include<math.h>

// BMI는 체중을 키의 제곱으로 나눈다(단위 체중은 kg,키는 m)
// BMI 20미만:저체중,20~24.9:표준,25이상:과체중

int		() {

	double weight, height;
	double bmi;

	printf("키를 입력하세요(kg) : ");
	scanf_s("%lf", &height);
	printf("몸무개를 입력하세요(kg):");
	scanf_s("%lf", &weight);

	height = height / 100;
	bmi = weight / pow(height, 2.0);

	if (bmi > 25) {							// 25 이상:과체중
		printf("당신의 과체중 입니다\n");
	}else if (bmi > 19 && bmi < 25) {		// 20~24.9:표준
		printf("당신의 표준 입니다\n");
	}else if (bmi < 19) {					// 20 미만:저체중
		printf("당신의 저체중 입니다\n");
	}

	return 0;
}