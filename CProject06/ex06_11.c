#include<stdio.h>
#include<stdlib.h>

void exchange(int*, int*);

int main() {

	int cheoil = 10, metal =20;

	// ÇÔ¼ö È£Ãâ(ÇÔ¼ö´Â È£­ŒÇØ¾ß ¸Ş¸ğ¸®¿¡¼­ ¸¸µé¾îÁö°í ½ÇÇàµÈ´Ù.)
	exchange(&cheoil,&metal);

	printf("ÇÔ¼ö°¡ È£ÃâµÈ ÈÄ¿¡ cheli¿¡ ÀúÀåµÈ °ª :%d\n", cheoil);

	return 0;

}

void exchange	(int* ip, int* mp) {

	int temp = 0;
	temp = *ip;

	ip = *mp;
	mp = temp;

	printf("*ip = %d\n", ip);
	printf("*mp = %d\n", mp);

}

