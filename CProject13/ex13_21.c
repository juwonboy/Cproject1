#include<stdio.h>
#include<string.h>

#define SIZE 3 // 기호 상수

typedef struct
{
	char name[50];		// 제목
	char author[30];	// 저자
	int year;			// 출판년도
	int price;			// 가격
	int qty;			// 재고
}Book; // 92bytes

void print_book(const Book* b);
void print_all(const Book* p, int n); // 전체 도서 목록
void find_cheapest(const Book* p, int n);
void increase_qty(Book* p, int n, int amount);
int total_price(const Book* p, int n);

int main() {

	Book books[SIZE] = {
		{"C Programming", "씨푸", 1978, 50000, 10}
		,{"Python", "하선", 1985, 60000, 5}
		,{"Database", "데배",1992, 45000, 8}
	}; // 276bytes
	int i;

	//베열을 포인터 변수에 연결
	//pbs = &books;
	print_all(&books, SIZE);
	find_cheapest(&books, SIZE);
	increase_qty(&books, SIZE, 5);

	for(i=0; i<SIZE; i++)
	{
		print_book(&books[i]);

	return 0;
	}
}

void print_book(const Book* ptb)
{
	printf("제목: %20s, 저자: %10s, 출판년도: %d, 가격: %d, 재고: %d\n",
		ptb->name
		, ptb->author
		, ptb->year
		, ptb->price
		, ptb->qty
	);
}

// 전체 도서 목록
void print_all(const Book* p, int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		printf("11:: 제목: %20s, 저자: %10s, 출판년도: %d, 가격: %d, 재고: %d\n",
			p[i].name
			, p[i].author
			, p[i].year
			, p[i].price
			, p[i].qty
		);

		printf("22:: 제목: %20s, 저자: %10s, 출판년도: %d, 가격: %d, 재고: %d\n",
			(*(p+i)).name
			, (*(p+i)).author
			, (*(p+i)).year
			, (*(p+i)).price
			, (*(p+i)).qty
		);

		printf("33:: 제목: %20s, 저자: %10s, 출판년도: %d, 가격: %d, 재고: %d\n",
			(p + i)->name
			, (p + i)->author
			, (p + i)->year
			, (p + i)->price
			, (p + i)->qty
		);
	}

	// print_book
}

void find_cheapest(const Book* p, int n)
{
	// 1안
	/*
	int j;
	int minprice,min;
	minprice = 0;

	minprice = (p + 0)->price;

	for (j = 0; j < n; j++)
	{
		if (minprice > (p + j)->price) {
			minprice = (p + j)->price;
			min = j;
		}
	}

	printf("minname: %s\n", (p + min)->name);
	printf("minprice : %d\n", minprice);
	*/

	// 2안	

	const Book* cheapest = p; // 가장 싼 책의 주소를 저장할 포인터 변수

	//cheapest

	printf("cheapest size %d:: " , sizeof(*p));

	for(int i=1; i<n; i++)
	{
		if((p + i)->price < cheapest->price)
		{
			cheapest = p + i;
		}
	}

	print_book(cheapest);

	printf("\n ===================== \n");

	printf("Cheapest book: %s\n", cheapest->name);
	printf("Price: %d\n", cheapest->price);
}

void increase_qty(Book* p, int n, int amount)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		(p + i)->qty += amount;
	}
}

int total_price(const Book* p, int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
	{
		total += (p + i)->price * (p + i)->qty;
	}
	return total;
}