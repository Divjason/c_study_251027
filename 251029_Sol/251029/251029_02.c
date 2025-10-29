#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 배열의 이름은 포인터 변수의 역할을 함
	// 로컬 컴퓨터에 저장된 배열 데이터가 시작되는 메모리 주소를 배열
	// 의 이름이 가지고 있다
	// 포인터 변수를 활용해서 새로운 값을 할당 받기도 했지만
	// 배열의 이름이 포인터 변수의 역할은 해도, 실제 별도의 값을 재할당 할 수는 없음!
	//int myArr[3] = {1, 2, 3};
	//printf("%d \n", myArr[0]);
	//printf("%d \n", myArr[1]);
	//printf("%d \n", myArr[2]);

	//printf("%p \n", myArr);
	//printf("%p \n", &myArr[0]);
	//printf("%p \n", &myArr[1]);
	//printf("%p \n", &myArr[2]);

	// 9 A B C
	// D E F 0
	// 배열안에 담겨있는 값이 int 정수 입력자료형 => 4

	// int : 4바이트 => 32비트 => 2^32
	// short : 2바이트 => 16비트 => 2^16

	//short sarr[3] = { 1, 2, 3 };
	//int iarr[3] = { 10, 20, 30 };

	//printf("%d %d %d \n", sarr[0], sarr[1], sarr[2]);
	//printf("%d %d %d \n", iarr[0], iarr[1], iarr[2]);

	//printf("%d %d %d \n", *sarr, *(sarr + 1), *(sarr + 2));
	//printf("%d %d %d \n", *iarr, *(iarr + 1), *(iarr + 2));
	///*printf("%d %d %d \n", iarr[0], iarr[1], iarr[2]);*/

	//printf("%p %p %p \n", &sarr[0], &sarr[1], &sarr[2]);
	//printf("%p %p %p \n", &iarr[0], &iarr[1], &iarr[2]);

	// 배열
	// 포인터 변수
	// 배열이름 = 포인터 변수
	// 포인터 배열 : 포인터 형을 사용해서 배열을 선언하면 그것을 포인터 배열이라고 부름

	int n1 = 3, n2 = 6, n3 = 9;

	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	int* parr[3] = { ptr1, ptr2, ptr3 };

	printf("%d %d %d \n", *parr[0], *parr[1], *parr[2]);
	printf("%p %p %p \n", parr[0], parr[1], parr[2]);

	return 0;
}