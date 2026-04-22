#include<stdio.h>
#include<string.h>

void user_strcpy(char*, char*);

int main()
{
	char fruit[20];

	user_strcpy(&fruit, "strawberry");

	printf("배열에 저장된 문자열 : %s", fruit);

	return 0;
}

void user_strcpy(char* des, char* src)
{
	//초기화
/*
	for (int i = 0; i < 20; i++)
	{
		des[i] = NULL;
		printf("%\n", des[i]);
	}
*/

	printf("================\n");
	for (int i = 0; i < strlen(src); i++)
	{
		if (src[i] != "\0") {
			des[i] = src[i];
			printf("%c\n", des[i]);
		}
	}
	des[strlen(src)] = '\0';

	printf("================\n");
}

/*

void user_strcpy(char* des, char* src)
{
	while (*src != '\0')
	{
		*des = *src;
		src++;
		des++;
	}
	*des = '\0'; // 중요
}
*/


