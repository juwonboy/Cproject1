#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
    동적 할당 테스트
     - 문자열을 입력받아 동적 할당한 메모리에 저장하는 프로그램
      1. 문자열 입력받기
      2. 문자열 길이 + 1 만큼의 메모리 할당
      3. 입력한 문자열을 동적 할당한 메모리에 복사
      4. 동적 할당한 메모리 해제
*/

int main()
{
    char temp[80];
    char* str[3];
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("문자열 입력 : ");
        gets(temp); // 문자열 입력
        str[i] = (char*)malloc(strlen(temp) + 1); // 문자열 길이 + 1 만큼의 메모리 할당
        if (str[i] == NULL) {
            printf("메모리 할당 실패\n");
			exit(1); // 프로그램 강제 종료
        }
        strcpy_s(str[i], strlen(temp) + 1, temp); // 입력한 문자열을 동적 할당한 메모리에 복사
    }

    for (i = 0; i < 3; i++) {
       //printf("입력한 문자열 : str[%d] :: %s\n", i ,*(str+i)); // 입력한 문자열 출력
       printf("입력한 문자열 : str[%d] :: %s\n", i ,str[i]); // 입력한 문자열 출력
    }

	for (i = 0; i < 3; i++) {
        free(str[i]); // 동적 할당한 메모리 해제
    }

    return 0;
}
