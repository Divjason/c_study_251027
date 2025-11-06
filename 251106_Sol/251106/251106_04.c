#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursiveSum(int n)
{
	// 재귀함수를 가장 쉽게 사용하는 방법
	// 재귀함수 (n - 1)

	if (n == 0)
		return 0;

	return n + recursiveSum(n - 1);
}

int main(void)
{
	/*
	사용자에게 어떤 정수 1개를 받습니다.
	그리고, 사용자에게 받은 정수까지의 합을 구하는
	프로그래밍 코드를 작성해주세요!

	10 정수
	1부터 10까지의 정수의 합 : 55!!
	> 재귀함수를 활용해서 문제를 풀어보세요.
	> 만약, 재귀함수가 힘들다면, 재귀함수가 아닌 방법도 오케이!
	*/

	int n;

	printf("n을 입력하세요 : ");
	scanf("%d", &n);

	int result = recursiveSum(n);
	printf("1부터 n까지의 합 : %d", result);

	return 0;
}
