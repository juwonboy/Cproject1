#include<stdio.h>
#include<stdbool.h>

int main() {

	int num = 10;

	num = 20;
	num = 30;
	
	num = num + 10;
	printf("num:%d\n",num);

	num = num + 10;
	printf("num:%d\n", num);

	num = num + 1; // 61
	num = num + 1; // 62
	num = num + 1; // 63

	num += 1; //복합 대인 연산자 , 64
	printf("num:%d\n", num); // 64

	//  자기 자신 값을 무조건 1증가 , 단하안 연산자 ++, --
	num++; //num=num+1
	num++;
	num++;

	printf("num:%d\n", num); // 64

	return 0;

}