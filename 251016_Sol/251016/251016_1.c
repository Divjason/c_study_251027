#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;

	/*
	
	int a; ���� 4����Ʈ = 32��Ʈ*
	short b; ���� 2����Ʈ = 16��Ʈ
	char c; ���ڿ� 1����Ʈ = 8��Ʈ
	double d; �Ǽ�*
	float f; �Ǽ�

	int
	double

	*/

	x = 1;
	y = 2;
	z = x + y;

	printf("Result is %d", z); // decimal = 10����
	printf("Result is %i", z); // integer = ����

	return 0;
}