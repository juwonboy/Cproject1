#include<stdio.h>

int main() {

	char word[80];
	int i;
	int wordLength;
	int count = 0;

	printf("단어를 입력 하세요.");
	scanf_s("%s", word,20);

	wordLength = sizeof(word) / sizeof(word[0]);

	for ( i = 0; i < wordLength;i++)
	{
		if (word[i] != '\0') {
			printf("%d :: %c \n",i ,word[i]);
			count++;
		}
		else {
				break;
		}
	}

	printf("11 : %s단어를 길이는 %d자 입니다\n",word,count);
	
	for (i = count; i >=0 ;i--) {
		
		//printf("%d :: %c \n", i, word[i]);
		if (word[i] != '\0') {
			printf("%c", word[i]);
		}
	}

	printf("\n22 : %s단어를 길이는 %d자 입니다\n",word,count);


	return 0;
}
