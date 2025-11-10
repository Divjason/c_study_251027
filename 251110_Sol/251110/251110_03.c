#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int myFunc(int num1, int num2)
//{
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//	return 0;
//}

int main(void)
{
	// 다중포인터
	//int num = 999;
	//int* ptr = &num;
	//int** dptr = &ptr;
	//int*** tptr = &dptr;

	//printf("%d %d %d %d", num, *ptr, **dptr, ***tptr);

	// 포인터 & 배열 & 문자열 & 함수
	// C언어에서는 함수도 선언 및 생성 > 메모리 공간
	// 메모리 공간 > 주소 > 함수의 주소 => 포인터 변수
	// 함수 포인터

	//int (*fptr)(int, int);
	//fptr = myFunc;

	//fptr(9, 6);

	//double value = 3.8;
	//double* ptr = &value;
	//double** dptr = &ptr;

	//printf("%.1f \n", **dptr);


	return 0;
}