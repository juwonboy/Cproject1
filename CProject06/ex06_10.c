#include<stdio.h>
#include<stdlib.h>

void assign(int*);

int main() {

	int cheoil = 0;

	// ÇÔ¼ö È£Ãâ(ÇÔ¼ö´Â È£­ŒÇØ¾ß ¸Ş¸ğ¸®¿¡¼­ ¸¸µé¾îÁö°í ½ÇÇàµÈ´Ù.)
	assign(&cheoil);

	printf("ÇÔ¼ö°¡ È£ÃâµÈ ÈÄ¿¡ cheli¿¡ ÀúÀåµÈ °ª :%d\n", cheoil);

	return 0;

}

void assign(int* ip) {

	ip = 10;
	printf("ip = %p\n", ip);
	printf("*ip = %d\n", *ip);

}

