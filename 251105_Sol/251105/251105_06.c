#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int readArray(int *arr, int length)
{
	int i;
	printf("배열의 요소 읽어보기 : [ ");
	for (i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
		if (i + 1 < length)
		{
			printf(", ");
		}
		else
		{
			printf(" ");
		}
	}
	printf("]");
}

int main(void)
{
	// 함수
	// 입력값, 출력값

	// 입력값 => 정수 형태의 변수
	// 배열?!

	int arr[3] = {3, 6, 9};

	readArray(arr, 3);

	return 0;
}