#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//printf("%10i\n", 1234567);
	//printf("%-10i", 1234567);

	int n = 1;

	int i;
	float f;

	scanf("%d %f", &i, &f);
	printf("%d %f", i, f);

	//printf("%d", n);
	//n = n + 1; // ���մ��Կ����� => �ڵ带 �ݺ������� ��� ��ȿ���� ����
	//n += 1;
	
	//printf("%d", n);
	//n = n + 1;

	//printf("%d", n);
	//n = n + 1;

	//while (n < 11)
	//{
	//	printf("%d\n", n);
	//	n = n + 1;
	//}

	return 0;
}