#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수의 원형
int add(int a, int b);

int main(void)
{
	int result;

	result = add(3, 5);
	printf("add 함수 반환 값 : %d", result);

	return 0;
}

// 함수의 기능 정의
int add(int a, int b)
{
	return a + b;
}

/*
입력값(매개변수 | 인자값)과 반환값이 모두 있는 경우
입력값만 있는 경우
반환값만 있는 경우
입력값과 반환값이 모두 없는 경우
*/