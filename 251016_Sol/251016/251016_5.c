#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int a = 0;
	//a++; // ���Կ����� ���� ����, �ڱ� �ڽ��� ���� ����

	//printf("%d\n", a);

	//++a; // ���� �ڱ� �ڽ��� ���� ������Ű��, ���Կ����� ����
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