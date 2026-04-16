#include<stdio.h>


int main() {
	

/*
	함수(기능)
	개발자가 만들어준 함수 내가 만든 함수 (규칙에 맞게)
	함수는 독립된 공간
	반환 타입 int,double,char 함수명 (매개변수) : 외부로 부터 값을 입력받아 전달 
*/

	printf(" %d * %d = %d", 1, 2, sum(1, 2));

	return 0;
}

int sum(int a, int b) {

	int res; // 지역변수 local variable => 함수 안에 선언된 변수

	res = a + b; // 30

	return  res; // 30을 호출하는 곳으로 보내고 함수 종료 
}
