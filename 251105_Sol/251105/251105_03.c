#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumOddBetween(int a, int b)
{
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % 2 != 0)
			sum += i;
	}
	return sum;
}

int main(void)
{
	/*
	사용자로부터 2개의 정수를 입력받으세요.
	그리고 해당 정수 사이에 존재하는 정수들 중 홀수값만
	찾아서 해당 정수들의 총 합계를 출력하는 프로그래밍 코드를
	작성해주세요.

	5, 9 => 5 6 7 8 9 => 5 + 7 + 9 = 21
	*/
	int a, b;
	printf("두 정수 입력 : ");
	scanf("%d %d", &a, &b);
	printf("%d과 %d 사이의 홀수인 정수의 합계는 : %d", a, b, sumOddBetween(a, b));
	
	return 0;
}