#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int countSevens(int n)
{
	int from = n, to = n + 200, cnt = 0;
	for (int x = from; x <= to; x++)
	{
		if (x % 7 == 0)
			cnt++;
	}
	return cnt;
}

int main(void)
{
	/*
	사용자로부터 정수 1개를 받으세요.
	그리고 입력받은 해당 정수 1개를 기준으로
	해당 숫자보다 200큰 정수 사이에 7의 배수가
	몇 개나 존재하는지의 결과값을 반환하는 함수를
	구현해주세요!!

	100 300 : 7의 배수는 28개!
	*/

	int n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	printf("%d과 %d 사이의 7의 배수는 %d개 입니다.", n, n+200, countSevens(n));

	return 0;
}