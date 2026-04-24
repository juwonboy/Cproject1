#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] = {0};
	char b[5]; 
	
	
	char c1[] = "";
	printf("%zd\n",strlen(c1));
	char c2[] = " ";
	printf("%zd\n", strlen(c2));
	char c3[] = "  "`;
	printf("%zd\n", strlen(c3));

	while (1){
		//scanf_s("%s", b, sizeof(b) / sizeof(b[0]));
		scanf_s("%s", b, 5);
		//printf("b strlen = %d  || b = %s \n", strlen(b),b);

		if (strlen(b) == 0) {
			printf("입력값이 5자리를 초과 하였습니다.\n", a);
			break;
		}

		//gets_s(b,5);

		//printf("a len : %d \n",strlen(a));
		//printf("b len : %d \n",strlen(b));

		if (strlen(a)+ strlen(b) >= 100) {
			printf("100byte 넘으면 안됨.\n", a);
			break;
		}
		
		if (strcmp(b,"끝") == 0) {
			break;
		}

		printf("a len : %d \n", strlen(a));
		printf("a sizeof : %d \n", sizeof(a));

		strcat_s(a, sizeof(a), b);
	}

	printf("입력된 값 : %s\n", a);

	return 0;

}

