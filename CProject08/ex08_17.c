#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80];
    char instr[4];
    int ch;
    int i;

    printf("문자열을 입력하세요.\n");

    //if (strlen(instr) == 0) {
    //    printf("4자 까지 입력가능 합니다.\n");
    //}
    i = 0;
    //ch = getchar();

    //while (i < 4) {
    //    ch = getchar();
    //    str1[i] = ch;
    //    //printf("입력받은 문자 1111: %c\n", str1[i]);
    //    printf(" i : %d\n", i);
    //    printf(" tr1[%d] : %c\n", i, str1[i]);
    //    i++;
    //}

    for (int j = 0;j < 4;j++) {
        ch = getchar();
        printf(" ch : %d\n", ch);
        printf(" ch : %c\n", ch);
        if (ch == 10) {
            break;

        }
        str1[j] = ch;
        //printf("입력받은 문자 1111: %c\n", str1[i]);
        printf(" j : %d\n", j);
        printf(" tr1[%d] : %c\n", j, str1[j]);
    }
    
    str1[strlen(str1)] = '\0';
    
    printf("입력받은 문자 : %s\n", str1);

    return 0;
}