#include<stdio.h>
#include<stdlib.h>

void line_up(double*, double*, double*);
void exchange(double*, double*);

int main() {

	double max, mid, min;

	printf("숫자 세 개를 입력하세요.");
	scanf_s("%1f%1f%1f", &max, &mid, &min); //  30 50 40

	//printf("l%.21f\n,%.21f\n,%.21f\n", max, mid, min);

	line_up(&max, &mid, &min);

	printf("큰수 부터 차례로 출력 : %.21f\n,%.21f\n,%.21f\n", max, mid, min);

	return 0;

}

void line_up(double* mp, double* ip, double* np)
{
	//double test[] = {*mp , *ip, *np };
	/*
	double max, mid, min;

	max = 0.0;
	mid = 0.0;
	min = 0.0;


	if (*mp > *ip &&  *mp > *np) {
		max = *mp;
	}

	if (*ip > *mp && *ip > *np) {
		max = *ip;
	}

	if (*np > *mp && *np > *ip) {
		max = *np;
	}


	if (*mp < *ip && *mp < *np) {
		min = *mp;
	}

	if (*ip < *mp && *ip < *np) {
		min = *ip;
	}

	if (*np < *mp && *np < *ip) {
		min = *np;
	}



	if (*mp != max || *mp != min) {
		mid = *mp;
	}

	if (*ip != max || *ip != min) {
		mid = *ip;
	}

	if (*np != max || *np != min) {
		mid = *np;
	}

	*mp = max;
	*ip = mid;
	*np = min;

	&max, &mid, &min
	
	*/
	if (*mp < *ip) {
		exchange(mp, ip);
	}
	if (*mp < *np) {
		exchange(mp, np);
	}
	if (*ip < *mp) {
		exchange(ip, mp);
	}

}

void exchange(double* mp, double* ip)
{
	// &max, & mid, & min

	double temp;
	temp = *mp;
	*mp = *ip;
	*ip = temp;

}
