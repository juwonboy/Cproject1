#include<stdio.h>
#include<string.h>

int main()
{
	// 홀수 먼째 문자만을 출력
	char* str = "watermelon";
	int i = 0;

	printf("%c\n", str[0]);
	printf("%c\n", str[2]);
	
	
	printf("==========================\n");

	while ( i < strlen(str)) {

		if ((i+1)%2 != 0) {
			printf("%c", str[i]);
		}
		i++;
	}

/*	printf("\n");

	for (int i = 0;i<10;i++) {
		for (int j = 0;j < 10;j++) {
			printf("*");
		}
		printf("\n");
	}*/



	return 0;
}
