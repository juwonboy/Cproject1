#include<stdio.h>
#include<malloc.h>
#include<string.h>

double ary_min(double*,int,int);

int main() {

	double ary[] = { 1.5, 20.1, 16.4, 2.4, 3.5 }; // 12 byte
	int aryLen = 0;
	double res;

	aryLen = sizeof(ary) / sizeof(ary[0]);

	res = ary_min(&ary, aryLen,0);

	printf("최소값 :: %lf \n", res);

	res = ary_min(&ary, aryLen, 1);
	printf("최대값 :: %lf ", res);


	return 0;
}

double ary_min(double* ap, int len, int value)
{
	double check;
	check = ap[0];

	for (int i = 0; i < len; i++)
	{
		if (value == 0) {
			if (check > ap[i]) {
				check = ap[i];
			}
		}
		else {
			if (check < ap[i]) {
				check = ap[i];
			}
		}
	}	
	return check;
}
