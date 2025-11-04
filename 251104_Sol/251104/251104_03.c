#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	// 함수 => 프로그래밍 영역, 꽃
	// 함수 1) 값을 반환하는 함수 2) 값을 반환하지 않는 함수
	// 반환 => 되돌려준다

	/*
	
	int main(void) {
		return 0;
	}

	*/

	int result;

	result = add(3, 5);

	printf("add 함수가 반환한 값 : %d", result);

	return 0;
}