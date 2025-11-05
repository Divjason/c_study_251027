#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int dvd(int a, int b, int *rem)
{
	if (b == 0)
		return 0;

	*rem = a % b;
	return a / b;
}

int main(void)
{
	/*
	사용자로부터 정수 2개를 입력받으세요. ex) 1, 2
	그리고 해당 정수의 4칙 연산 (+, -, *, /)을 실행시킬 수 있는 4개의 함수를
	각각 선언 및 호출할 수 있는 프로그래밍 코드를 작성해주세요.

	add
	sub
	mul
	dvd (몫, 나머지)
	*/

	int x, y;

	printf("두 정수를 입력 : ");
	scanf("%d %d", &x, &y);

	printf("덧셈 : %d\n", add(x, y));
	printf("뺄셈 : %d\n", sub(x, y));
	printf("곱셈 : %d\n", mul(x, y));

	if (y == 0)
		printf("나눗셈 : 0으로 나눌 수 없습니다.\n");
	else {
		int r;
		int q = dvd(x, y, &r);
		printf("나눗셈 : 몫 = %d, 나머지 = %d \n", q, r);
	}

	return 0;
}