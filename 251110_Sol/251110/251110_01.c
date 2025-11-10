#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 포인터 "변수" -> 변수
	//int num = 3;
	//int* ptr = &num; // ptr : 포인터 변수 => 싱글포인터
	//int** dptr = &ptr;

	int num = 3;
	int* ptr1 = &num;
	int** dptr1 = &ptr1;

	int* ptr2;

	printf("%p %p \n", ptr1, dptr1);
	printf("%d %d \n", num, **dptr1);

	ptr2 = *dptr1;
	*ptr2 = 9;

	printf("%d %d \n", num, **dptr1);

	return 0;
}