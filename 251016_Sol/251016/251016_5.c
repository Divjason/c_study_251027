#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int a = 0;
	//a++; // 대입연산자 값을 대입, 자기 자신의 값을 증가

	//printf("%d\n", a);

	//++a; // 먼저 자기 자신의 값을 증가시키고, 대입연산자 대입
	//printf("%d\n", a);

	int count = 0;

	//while (count < 10)
	//{
	//	printf("%d", count);
	//	count++;
	//}

	//while (count < 10)
	//{
	//	printf("%d", count);
	//	++count;
	//}

	//while (count++ < 10)
	//{
	//	printf("%d", count);
	//	/*++count;*/
	//}

	while (++count < 10)
	{
		printf("%d", count);
		/*++count;*/
	}

	return 0;
}