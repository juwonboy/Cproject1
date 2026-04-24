#include<stdio.h>

void exchange(char**, char**);

int main()
{   
    char** ap = "failure";
    char** bp = "success";


    printf("ap->%s , bp->%s \n", &ap, &bp);

    //printf("111 ap->%s , bp->%s \n", *ap, *bp);

    exchange(&ap, &bp);
    printf("ap->%s , bp->%s \n", &ap, &bp);

    return 0;
}

void exchange(char** app, char** cpp)
{

    char** temp = **(app);

    app = **(cpp);
    cpp = **(temp);

}
