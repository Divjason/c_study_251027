#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{	
	// 배열 = array
	// list

	// 변수 선언 > 할당 > 1개의 값을 저장
	// 정수, 실수, 불, 문자

	// 복수의 값을 할당 (*여러개의 값을 할당)

	//int myArr01[3] = { 1, 2, 3 };
	//int myArr02[] = { 1, 2, 3 };
	//char characters[] = {'a', 'b', 'c', 'd'};

	// 언어
	// CRUD
	// Create
	// Read
	// Update
	// Delete

	// myArr01[index 값]

	//printf("%d %d %d \n", myArr01[0], myArr01[1], myArr01[2]);
	//printf("%c %c %c", characters[0], characters[1], characters[2]);

	// 문자열 ("ABC DEF") VS 문자 ('A')
	// 인덱스 값을 가지고 있는 자료구조
	// 반복 순회할 수 있는 iterable 속성

	int i;
	int odd[3];
	int even[5] = {2, 4, 6, 8, 10};

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d %d %d \n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", even[i]);
	}

	return 0;
}