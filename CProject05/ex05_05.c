#include<stdio.h>

// 배열 : 변수의 연속(순서가 있는)된공간, 동일 타입

int main() {
	double nums[5];
	double numsLength;
	double max;
	int i;

	numsLength = sizeof(nums) / sizeof(nums[0]);

	printf("다섯개의 숫자를 입력하세요.\n");

	for (i = 0; i < numsLength; i++)
	{
		scanf_s("%lf", &nums[i]);
	}

	for (i = 0; i < numsLength; i++)
	{
		if (i == 0) {
			max = nums[i];
		}
		else
		{
			if (max < nums[i]) {
				max = nums[i];
			}
		}
	}
	printf("입력한 숫자의 최고 숫자 : %.1lf\n", max);

}


