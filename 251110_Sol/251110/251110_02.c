#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swapNumber(int **dptr1, int** dptr2)
{
	int* temp = *dptr1;
	*dptr1 = *dptr2;
	*dptr2 = temp;
}

int main(void)
{
	// Call-by-reference : 함수를 호출할 때
	// 인자값으로 포인터 변수를 전달해서
	// 해당 함수가 주소값에 직접 접근할 수 있도록
	// 하는 방식!!!

	int num1 = 66, num2 = 99;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	printf("*ptr1: %d *ptr2 : %d \n", *ptr1, *ptr2);
	swapNumber(&ptr1, &ptr2);
	printf("*ptr1: %d *ptr2 : %d \n", *ptr1, *ptr2);

	return 0;
}