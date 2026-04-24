#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main() {

	int ary1[3] = {1,2,3}; //
	double ary2[3] = {1.1,2.2,3.3}; //

	printf("%d		%lf\n", *ary1, *ary2);

	//printf("%d		%lf", (*ary1)+100, (*ary2)+100);

	*ary1 = *ary1 * 100;
	*ary2 = *ary2 + 120.5;

	printf("%d		%lf\n", *ary1, *ary2);
	printf("%d		%lf\n", ary1[0], ary2[0]);

	return 0;
}

