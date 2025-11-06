#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 3

// 1) 실제 맞춰야하는 값을 생성하는 함수
void make_secret(char ans[])
{
	int used[10] = { 0 };
	int i = 0;

	while (i < LEN)
	{
		int d = rand() % 10;
		if (!used[d])
		{
			used[d] = 1;
			ans[i++] = '0' + d;
		}
	}

	ans[LEN] = '\0';
}

// 2) 사용자가 정상적으로 값을 입력했는지 검증함수
int is_valid_guess(char *s)
{
	return 1;
}


int main(void)
{
	/*
	A : 3개의 숫자를 임의로 섞어서 나열 369
	B : 123 (1볼) -1 / 19
	B : 392 (1스트라이크 1볼) -2 / 18
	B : 359 (2스트라이크) -3 / 17
	B : 369 (3스트라이크) => 게임종료
	> 반드시 3개의 숫자가 중복 x
	*/

	return 0;
}
