#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;

	/*
	
	int a; 정수 4바이트 = 32비트*
	short b; 정수 2바이트 = 16비트
	char c; 문자열 1바이트 = 8비트
	double d; 실수*
	float f; 실수

	int
	double

	*/

	x = 1;
	y = 2;
	z = x + y;

	printf("Result is %d", z); // decimal = 10진수
	printf("Result is %i", z); // integer = 정수

	return 0;
}