#include<stdio.h>
/*
	int ary[] = { 3,4,7,8,10,12,15,15,6,5,13,15,16,17,13,12,7,16,20,19 };
	int i;
	int size;
	int n;
	int count = 0; // 누적 변수
	printf("찿기를 원하는 숫자를 입력하세요(1~20):");
	scanf_s("%d", &n);
*/

int main() {
	
	int ary[] = { 3,4,7,8,10,12,15,15,6,5,13,15,16,17,13,12,7,16,20,19 };
	int i;
	int size;
	int n;
	int count = 0; // 누적 변수

	size = sizeof(ary) / sizeof(ary[0]);

	printf("찿기를 원하는 숫자를 입력하세요(1~20):");
	scanf_s("%d", &n);

	for ( i = 0 ; i < size ; i++)
	{
		if (ary[i] == n)
		{
			count++;
		}
	}

	if (count > 0) {
		printf("찾는 숫자 있음. %d개 \n",count);
	}
	else
	{
		printf("없음.");
	}

	return 0;
}


