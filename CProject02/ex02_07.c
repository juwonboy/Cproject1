#include<stdio.h>

int main()
{
	int nData = 10, nNewData = 20;
	int nResult = 10;

	printf("%d\n", nData == nResult || nData > nNewData); // 1
	printf("%d\n", nData != nResult || nData > nNewData); // 0
	printf("%d\n", nData != nResult && nData > nNewData); // 0

	printf("%d\n", nData >= nResult && ++nNewData); // 1
	printf("nNewData=%d\n", nNewData); // 21

	return 0;
}

/*
#include<stdio.h>

int main(){

	char x;
	scanf("%c", &x);
	printf("%c", x);

	return 0;
}
*/