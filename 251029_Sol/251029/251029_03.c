#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int arr[5] = {10, 20, 30, 40, 50};
	//int* ptr = arr;

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", *ptr);
	//	ptr++;
	//}

	// 배열
	// 문자열
	// 다차원 배열: 배열 안에 또다른 배열 담겨있는 것
	// > 행과 열 int myArr[2][3] : 2차원 배열
	// > 행과 열 int myArr[2][2][3] : 2차원 배열
	// > 서버 구축, 데이터 저장.보관
	// > 코테문제 && 간단한 프로그래밍 개발
	int i, j;

	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr[i][j] = 10;
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}