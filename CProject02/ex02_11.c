#include<stdio.h>

int main() {

	int nData = 0,x=10,y=20;
	
	//조건 연산자 
	//nData = x < y ? x : y; // 참 : 거짃

	if (x <y) 
	{
		nData = x;
	}
	else 
	{
		nData = y;
	}

	printf("%d\n" , nData); // 10

	return 0;
}