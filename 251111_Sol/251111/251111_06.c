#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char title[100];
	int published;
} Book;

typedef struct {
	Book book;
} Bag;


int main(void)
{
	Bag myBag = {
		{"인생은 아름다워!", 2025}
	};

	printf("\n 책 제목 : %s \n 출간년도 : %d", myBag.book.title, myBag.book.published);

	return 0;
}